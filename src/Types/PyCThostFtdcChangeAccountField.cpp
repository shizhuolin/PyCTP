
#include "PyCThostFtdcChangeAccountField.h"

///银期变更银行账号信息

static int PyCThostFtdcChangeAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "NewBankAccount", "NewBankPassWord", "AccountID", "Password", "BankAccType", "InstallID", "VerifyCertNoFlag", "CurrencyID", "BrokerIDByBank", "BankPwdFlag", "SecuPwdFlag", "TID", "Digest", "ErrorID", "ErrorMsg", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcChangeAccountField_TradeCode = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcChangeAccountField_BankID = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcChangeAccountField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcChangeAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcChangeAccountField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcChangeAccountField_TradeDate = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcChangeAccountField_TradeTime = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcChangeAccountField_BankSerial = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcChangeAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcChangeAccountField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcChangeAccountField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcChangeAccountField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcChangeAccountField_CustomerName = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcChangeAccountField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcChangeAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_IdentifiedCardNo_length = 0;

    /// 性别
    /// typedef char TThostFtdcGenderType
    char CThostFtdcChangeAccountField_Gender = 0;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    char *CThostFtdcChangeAccountField_CountryCode = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_CountryCode_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcChangeAccountField_CustType = 0;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcChangeAccountField_Address = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_Address_length = 0;

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    char *CThostFtdcChangeAccountField_ZipCode = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_ZipCode_length = 0;

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcChangeAccountField_Telephone = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_Telephone_length = 0;

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    char *CThostFtdcChangeAccountField_MobilePhone = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_MobilePhone_length = 0;

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    char *CThostFtdcChangeAccountField_Fax = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_Fax_length = 0;

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    char *CThostFtdcChangeAccountField_EMail = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_EMail_length = 0;

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    char CThostFtdcChangeAccountField_MoneyAccountStatus = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcChangeAccountField_BankAccount = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcChangeAccountField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_BankPassWord_length = 0;

    /// 新银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcChangeAccountField_NewBankAccount = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_NewBankAccount_length = 0;

    /// 新银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcChangeAccountField_NewBankPassWord = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_NewBankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcChangeAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcChangeAccountField_Password = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_Password_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcChangeAccountField_BankAccType = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcChangeAccountField_InstallID = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcChangeAccountField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcChangeAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_CurrencyID_length = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcChangeAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_BrokerIDByBank_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcChangeAccountField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcChangeAccountField_SecuPwdFlag = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcChangeAccountField_TID = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcChangeAccountField_Digest = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_Digest_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcChangeAccountField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcChangeAccountField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_ErrorMsg_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcChangeAccountField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcChangeAccountField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#y#y#cicy#y#cciy#iy#y#", (char **)kwlist
        , &CThostFtdcChangeAccountField_TradeCode, &CThostFtdcChangeAccountField_TradeCode_length
        , &CThostFtdcChangeAccountField_BankID, &CThostFtdcChangeAccountField_BankID_length
        , &CThostFtdcChangeAccountField_BankBranchID, &CThostFtdcChangeAccountField_BankBranchID_length
        , &CThostFtdcChangeAccountField_BrokerID, &CThostFtdcChangeAccountField_BrokerID_length
        , &CThostFtdcChangeAccountField_BrokerBranchID, &CThostFtdcChangeAccountField_BrokerBranchID_length
        , &CThostFtdcChangeAccountField_TradeDate, &CThostFtdcChangeAccountField_TradeDate_length
        , &CThostFtdcChangeAccountField_TradeTime, &CThostFtdcChangeAccountField_TradeTime_length
        , &CThostFtdcChangeAccountField_BankSerial, &CThostFtdcChangeAccountField_BankSerial_length
        , &CThostFtdcChangeAccountField_TradingDay, &CThostFtdcChangeAccountField_TradingDay_length
        , &CThostFtdcChangeAccountField_PlateSerial
        , &CThostFtdcChangeAccountField_LastFragment
        , &CThostFtdcChangeAccountField_SessionID
        , &CThostFtdcChangeAccountField_CustomerName, &CThostFtdcChangeAccountField_CustomerName_length
        , &CThostFtdcChangeAccountField_IdCardType
        , &CThostFtdcChangeAccountField_IdentifiedCardNo, &CThostFtdcChangeAccountField_IdentifiedCardNo_length
        , &CThostFtdcChangeAccountField_Gender
        , &CThostFtdcChangeAccountField_CountryCode, &CThostFtdcChangeAccountField_CountryCode_length
        , &CThostFtdcChangeAccountField_CustType
        , &CThostFtdcChangeAccountField_Address, &CThostFtdcChangeAccountField_Address_length
        , &CThostFtdcChangeAccountField_ZipCode, &CThostFtdcChangeAccountField_ZipCode_length
        , &CThostFtdcChangeAccountField_Telephone, &CThostFtdcChangeAccountField_Telephone_length
        , &CThostFtdcChangeAccountField_MobilePhone, &CThostFtdcChangeAccountField_MobilePhone_length
        , &CThostFtdcChangeAccountField_Fax, &CThostFtdcChangeAccountField_Fax_length
        , &CThostFtdcChangeAccountField_EMail, &CThostFtdcChangeAccountField_EMail_length
        , &CThostFtdcChangeAccountField_MoneyAccountStatus
        , &CThostFtdcChangeAccountField_BankAccount, &CThostFtdcChangeAccountField_BankAccount_length
        , &CThostFtdcChangeAccountField_BankPassWord, &CThostFtdcChangeAccountField_BankPassWord_length
        , &CThostFtdcChangeAccountField_NewBankAccount, &CThostFtdcChangeAccountField_NewBankAccount_length
        , &CThostFtdcChangeAccountField_NewBankPassWord, &CThostFtdcChangeAccountField_NewBankPassWord_length
        , &CThostFtdcChangeAccountField_AccountID, &CThostFtdcChangeAccountField_AccountID_length
        , &CThostFtdcChangeAccountField_Password, &CThostFtdcChangeAccountField_Password_length
        , &CThostFtdcChangeAccountField_BankAccType
        , &CThostFtdcChangeAccountField_InstallID
        , &CThostFtdcChangeAccountField_VerifyCertNoFlag
        , &CThostFtdcChangeAccountField_CurrencyID, &CThostFtdcChangeAccountField_CurrencyID_length
        , &CThostFtdcChangeAccountField_BrokerIDByBank, &CThostFtdcChangeAccountField_BrokerIDByBank_length
        , &CThostFtdcChangeAccountField_BankPwdFlag
        , &CThostFtdcChangeAccountField_SecuPwdFlag
        , &CThostFtdcChangeAccountField_TID
        , &CThostFtdcChangeAccountField_Digest, &CThostFtdcChangeAccountField_Digest_length
        , &CThostFtdcChangeAccountField_ErrorID
        , &CThostFtdcChangeAccountField_ErrorMsg, &CThostFtdcChangeAccountField_ErrorMsg_length
        , &CThostFtdcChangeAccountField_LongCustomerName, &CThostFtdcChangeAccountField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcChangeAccountField_TradeCode != NULL ) {
        if(CThostFtdcChangeAccountField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcChangeAccountField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcChangeAccountField_TradeCode, CThostFtdcChangeAccountField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcChangeAccountField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcChangeAccountField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcChangeAccountField_BankID != NULL ) {
        if(CThostFtdcChangeAccountField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcChangeAccountField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcChangeAccountField_BankID, CThostFtdcChangeAccountField_BankID_length);
        strncpy(data->BankID, CThostFtdcChangeAccountField_BankID, sizeof(data->BankID));
        CThostFtdcChangeAccountField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcChangeAccountField_BankBranchID != NULL ) {
        if(CThostFtdcChangeAccountField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcChangeAccountField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcChangeAccountField_BankBranchID, CThostFtdcChangeAccountField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcChangeAccountField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcChangeAccountField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcChangeAccountField_BrokerID != NULL ) {
        if(CThostFtdcChangeAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcChangeAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcChangeAccountField_BrokerID, CThostFtdcChangeAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcChangeAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcChangeAccountField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcChangeAccountField_BrokerBranchID != NULL ) {
        if(CThostFtdcChangeAccountField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcChangeAccountField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcChangeAccountField_BrokerBranchID, CThostFtdcChangeAccountField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcChangeAccountField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcChangeAccountField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcChangeAccountField_TradeDate != NULL ) {
        if(CThostFtdcChangeAccountField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcChangeAccountField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcChangeAccountField_TradeDate, CThostFtdcChangeAccountField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcChangeAccountField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcChangeAccountField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcChangeAccountField_TradeTime != NULL ) {
        if(CThostFtdcChangeAccountField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcChangeAccountField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcChangeAccountField_TradeTime, CThostFtdcChangeAccountField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcChangeAccountField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcChangeAccountField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcChangeAccountField_BankSerial != NULL ) {
        if(CThostFtdcChangeAccountField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcChangeAccountField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcChangeAccountField_BankSerial, CThostFtdcChangeAccountField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcChangeAccountField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcChangeAccountField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcChangeAccountField_TradingDay != NULL ) {
        if(CThostFtdcChangeAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcChangeAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcChangeAccountField_TradingDay, CThostFtdcChangeAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcChangeAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcChangeAccountField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcChangeAccountField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcChangeAccountField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcChangeAccountField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcChangeAccountField_CustomerName != NULL ) {
        if(CThostFtdcChangeAccountField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcChangeAccountField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcChangeAccountField_CustomerName, CThostFtdcChangeAccountField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcChangeAccountField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcChangeAccountField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcChangeAccountField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcChangeAccountField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcChangeAccountField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcChangeAccountField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcChangeAccountField_IdentifiedCardNo, CThostFtdcChangeAccountField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcChangeAccountField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcChangeAccountField_IdentifiedCardNo = NULL;
    }

    /// 性别
    /// typedef char TThostFtdcGenderType
    data->Gender = CThostFtdcChangeAccountField_Gender;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    if( CThostFtdcChangeAccountField_CountryCode != NULL ) {
        if(CThostFtdcChangeAccountField_CountryCode_length >= (Py_ssize_t)sizeof(data->CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is 20)", CThostFtdcChangeAccountField_CountryCode_length);
            return -1;
        }
        // memset(data->CountryCode, 0, sizeof(data->CountryCode));
        // memcpy(data->CountryCode, CThostFtdcChangeAccountField_CountryCode, CThostFtdcChangeAccountField_CountryCode_length);
        strncpy(data->CountryCode, CThostFtdcChangeAccountField_CountryCode, sizeof(data->CountryCode));
        CThostFtdcChangeAccountField_CountryCode = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcChangeAccountField_CustType;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcChangeAccountField_Address != NULL ) {
        if(CThostFtdcChangeAccountField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcChangeAccountField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcChangeAccountField_Address, CThostFtdcChangeAccountField_Address_length);
        strncpy(data->Address, CThostFtdcChangeAccountField_Address, sizeof(data->Address));
        CThostFtdcChangeAccountField_Address = NULL;
    }

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    if( CThostFtdcChangeAccountField_ZipCode != NULL ) {
        if(CThostFtdcChangeAccountField_ZipCode_length >= (Py_ssize_t)sizeof(data->ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is 6)", CThostFtdcChangeAccountField_ZipCode_length);
            return -1;
        }
        // memset(data->ZipCode, 0, sizeof(data->ZipCode));
        // memcpy(data->ZipCode, CThostFtdcChangeAccountField_ZipCode, CThostFtdcChangeAccountField_ZipCode_length);
        strncpy(data->ZipCode, CThostFtdcChangeAccountField_ZipCode, sizeof(data->ZipCode));
        CThostFtdcChangeAccountField_ZipCode = NULL;
    }

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcChangeAccountField_Telephone != NULL ) {
        if(CThostFtdcChangeAccountField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcChangeAccountField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcChangeAccountField_Telephone, CThostFtdcChangeAccountField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcChangeAccountField_Telephone, sizeof(data->Telephone));
        CThostFtdcChangeAccountField_Telephone = NULL;
    }

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    if( CThostFtdcChangeAccountField_MobilePhone != NULL ) {
        if(CThostFtdcChangeAccountField_MobilePhone_length >= (Py_ssize_t)sizeof(data->MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is 20)", CThostFtdcChangeAccountField_MobilePhone_length);
            return -1;
        }
        // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
        // memcpy(data->MobilePhone, CThostFtdcChangeAccountField_MobilePhone, CThostFtdcChangeAccountField_MobilePhone_length);
        strncpy(data->MobilePhone, CThostFtdcChangeAccountField_MobilePhone, sizeof(data->MobilePhone));
        CThostFtdcChangeAccountField_MobilePhone = NULL;
    }

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    if( CThostFtdcChangeAccountField_Fax != NULL ) {
        if(CThostFtdcChangeAccountField_Fax_length >= (Py_ssize_t)sizeof(data->Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is 40)", CThostFtdcChangeAccountField_Fax_length);
            return -1;
        }
        // memset(data->Fax, 0, sizeof(data->Fax));
        // memcpy(data->Fax, CThostFtdcChangeAccountField_Fax, CThostFtdcChangeAccountField_Fax_length);
        strncpy(data->Fax, CThostFtdcChangeAccountField_Fax, sizeof(data->Fax));
        CThostFtdcChangeAccountField_Fax = NULL;
    }

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    if( CThostFtdcChangeAccountField_EMail != NULL ) {
        if(CThostFtdcChangeAccountField_EMail_length >= (Py_ssize_t)sizeof(data->EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is 40)", CThostFtdcChangeAccountField_EMail_length);
            return -1;
        }
        // memset(data->EMail, 0, sizeof(data->EMail));
        // memcpy(data->EMail, CThostFtdcChangeAccountField_EMail, CThostFtdcChangeAccountField_EMail_length);
        strncpy(data->EMail, CThostFtdcChangeAccountField_EMail, sizeof(data->EMail));
        CThostFtdcChangeAccountField_EMail = NULL;
    }

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    data->MoneyAccountStatus = CThostFtdcChangeAccountField_MoneyAccountStatus;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcChangeAccountField_BankAccount != NULL ) {
        if(CThostFtdcChangeAccountField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcChangeAccountField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcChangeAccountField_BankAccount, CThostFtdcChangeAccountField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcChangeAccountField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcChangeAccountField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcChangeAccountField_BankPassWord != NULL ) {
        if(CThostFtdcChangeAccountField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcChangeAccountField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcChangeAccountField_BankPassWord, CThostFtdcChangeAccountField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcChangeAccountField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcChangeAccountField_BankPassWord = NULL;
    }

    /// 新银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcChangeAccountField_NewBankAccount != NULL ) {
        if(CThostFtdcChangeAccountField_NewBankAccount_length >= (Py_ssize_t)sizeof(data->NewBankAccount)) {
            PyErr_Format(PyExc_ValueError, "NewBankAccount too long: length=%zd (max allowed is 40)", CThostFtdcChangeAccountField_NewBankAccount_length);
            return -1;
        }
        // memset(data->NewBankAccount, 0, sizeof(data->NewBankAccount));
        // memcpy(data->NewBankAccount, CThostFtdcChangeAccountField_NewBankAccount, CThostFtdcChangeAccountField_NewBankAccount_length);
        strncpy(data->NewBankAccount, CThostFtdcChangeAccountField_NewBankAccount, sizeof(data->NewBankAccount));
        CThostFtdcChangeAccountField_NewBankAccount = NULL;
    }

    /// 新银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcChangeAccountField_NewBankPassWord != NULL ) {
        if(CThostFtdcChangeAccountField_NewBankPassWord_length >= (Py_ssize_t)sizeof(data->NewBankPassWord)) {
            PyErr_Format(PyExc_ValueError, "NewBankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcChangeAccountField_NewBankPassWord_length);
            return -1;
        }
        // memset(data->NewBankPassWord, 0, sizeof(data->NewBankPassWord));
        // memcpy(data->NewBankPassWord, CThostFtdcChangeAccountField_NewBankPassWord, CThostFtdcChangeAccountField_NewBankPassWord_length);
        strncpy(data->NewBankPassWord, CThostFtdcChangeAccountField_NewBankPassWord, sizeof(data->NewBankPassWord));
        CThostFtdcChangeAccountField_NewBankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcChangeAccountField_AccountID != NULL ) {
        if(CThostFtdcChangeAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcChangeAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcChangeAccountField_AccountID, CThostFtdcChangeAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcChangeAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcChangeAccountField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcChangeAccountField_Password != NULL ) {
        if(CThostFtdcChangeAccountField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcChangeAccountField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcChangeAccountField_Password, CThostFtdcChangeAccountField_Password_length);
        strncpy(data->Password, CThostFtdcChangeAccountField_Password, sizeof(data->Password));
        CThostFtdcChangeAccountField_Password = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcChangeAccountField_BankAccType;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcChangeAccountField_InstallID;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcChangeAccountField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcChangeAccountField_CurrencyID != NULL ) {
        if(CThostFtdcChangeAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcChangeAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcChangeAccountField_CurrencyID, CThostFtdcChangeAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcChangeAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcChangeAccountField_CurrencyID = NULL;
    }

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcChangeAccountField_BrokerIDByBank != NULL ) {
        if(CThostFtdcChangeAccountField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcChangeAccountField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcChangeAccountField_BrokerIDByBank, CThostFtdcChangeAccountField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcChangeAccountField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcChangeAccountField_BrokerIDByBank = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcChangeAccountField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcChangeAccountField_SecuPwdFlag;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcChangeAccountField_TID;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcChangeAccountField_Digest != NULL ) {
        if(CThostFtdcChangeAccountField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcChangeAccountField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcChangeAccountField_Digest, CThostFtdcChangeAccountField_Digest_length);
        strncpy(data->Digest, CThostFtdcChangeAccountField_Digest, sizeof(data->Digest));
        CThostFtdcChangeAccountField_Digest = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcChangeAccountField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcChangeAccountField_ErrorMsg != NULL ) {
        if(CThostFtdcChangeAccountField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcChangeAccountField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcChangeAccountField_ErrorMsg, CThostFtdcChangeAccountField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcChangeAccountField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcChangeAccountField_ErrorMsg = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcChangeAccountField_LongCustomerName != NULL ) {
        if(CThostFtdcChangeAccountField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcChangeAccountField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcChangeAccountField_LongCustomerName, CThostFtdcChangeAccountField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcChangeAccountField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcChangeAccountField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcChangeAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:y,s:y,s:c,s:c,s:i,s:y,s:i,s:y,s:y}"
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
        , "NewBankAccount", data->NewBankAccount//, (Py_ssize_t)sizeof(data->NewBankAccount)
        , "NewBankPassWord", data->NewBankPassWord//, (Py_ssize_t)sizeof(data->NewBankPassWord)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "BankAccType", data->BankAccType
        , "InstallID", data->InstallID
        , "VerifyCertNoFlag", data->VerifyCertNoFlag
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "BrokerIDByBank", data->BrokerIDByBank//, (Py_ssize_t)sizeof(data->BrokerIDByBank)
        , "BankPwdFlag", data->BankPwdFlag
        , "SecuPwdFlag", data->SecuPwdFlag
        , "TID", data->TID
        , "Digest", data->Digest//, (Py_ssize_t)sizeof(data->Digest)
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcChangeAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcChangeAccountField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcChangeAccountFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcChangeAccountFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcChangeAccountFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcChangeAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcChangeAccountFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcChangeAccountFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcChangeAccountFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcChangeAccountFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcChangeAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcChangeAccountFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcChangeAccountFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 性别
/// typedef char TThostFtdcGenderType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_Gender(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Gender), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_Gender(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Gender Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::Gender)) {
        PyErr_SetString(PyExc_ValueError, "Gender must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->Gender = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 国家代码
/// typedef char TThostFtdcCountryCodeType[21]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_CountryCode(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CountryCode, (Py_ssize_t)sizeof(data->CountryCode));
    return PyBytes_FromString(data->CountryCode);
}

static int PyCThostFtdcChangeAccountFieldType_set_CountryCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CountryCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::CountryCode)) {
        PyErr_SetString(PyExc_ValueError, "CountryCode must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->CountryCode, 0, sizeof(data->CountryCode));
    // memcpy(data->CountryCode, buf, len);
    strncpy(data->CountryCode, buf, sizeof(data->CountryCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcChangeAccountFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 邮编
/// typedef char TThostFtdcZipCodeType[7]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_ZipCode(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ZipCode, (Py_ssize_t)sizeof(data->ZipCode));
    return PyBytes_FromString(data->ZipCode);
}

static int PyCThostFtdcChangeAccountFieldType_set_ZipCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->ZipCode, 0, sizeof(data->ZipCode));
    // memcpy(data->ZipCode, buf, len);
    strncpy(data->ZipCode, buf, sizeof(data->ZipCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电话号码
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcChangeAccountFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机
/// typedef char TThostFtdcMobilePhoneType[21]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_MobilePhone(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MobilePhone, (Py_ssize_t)sizeof(data->MobilePhone));
    return PyBytes_FromString(data->MobilePhone);
}

static int PyCThostFtdcChangeAccountFieldType_set_MobilePhone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MobilePhone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::MobilePhone)) {
        PyErr_SetString(PyExc_ValueError, "MobilePhone must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
    // memcpy(data->MobilePhone, buf, len);
    strncpy(data->MobilePhone, buf, sizeof(data->MobilePhone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 传真
/// typedef char TThostFtdcFaxType[41]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_Fax(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Fax, (Py_ssize_t)sizeof(data->Fax));
    return PyBytes_FromString(data->Fax);
}

static int PyCThostFtdcChangeAccountFieldType_set_Fax(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Fax Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::Fax)) {
        PyErr_SetString(PyExc_ValueError, "Fax must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->Fax, 0, sizeof(data->Fax));
    // memcpy(data->Fax, buf, len);
    strncpy(data->Fax, buf, sizeof(data->Fax));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电子邮件
/// typedef char TThostFtdcEMailType[41]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_EMail(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EMail, (Py_ssize_t)sizeof(data->EMail));
    return PyBytes_FromString(data->EMail);
}

static int PyCThostFtdcChangeAccountFieldType_set_EMail(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EMail Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::EMail)) {
        PyErr_SetString(PyExc_ValueError, "EMail must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->EMail, 0, sizeof(data->EMail));
    // memcpy(data->EMail, buf, len);
    strncpy(data->EMail, buf, sizeof(data->EMail));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户状态
/// typedef char TThostFtdcMoneyAccountStatusType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_MoneyAccountStatus(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MoneyAccountStatus), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_MoneyAccountStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MoneyAccountStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::MoneyAccountStatus)) {
        PyErr_SetString(PyExc_ValueError, "MoneyAccountStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->MoneyAccountStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcChangeAccountFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcChangeAccountFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 新银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_NewBankAccount(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewBankAccount, (Py_ssize_t)sizeof(data->NewBankAccount));
    return PyBytes_FromString(data->NewBankAccount);
}

static int PyCThostFtdcChangeAccountFieldType_set_NewBankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewBankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::NewBankAccount)) {
        PyErr_SetString(PyExc_ValueError, "NewBankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->NewBankAccount, 0, sizeof(data->NewBankAccount));
    // memcpy(data->NewBankAccount, buf, len);
    strncpy(data->NewBankAccount, buf, sizeof(data->NewBankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 新银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_NewBankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewBankPassWord, (Py_ssize_t)sizeof(data->NewBankPassWord));
    return PyBytes_FromString(data->NewBankPassWord);
}

static int PyCThostFtdcChangeAccountFieldType_set_NewBankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewBankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::NewBankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "NewBankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->NewBankPassWord, 0, sizeof(data->NewBankPassWord));
    // memcpy(data->NewBankPassWord, buf, len);
    strncpy(data->NewBankPassWord, buf, sizeof(data->NewBankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcChangeAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcChangeAccountFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcChangeAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcChangeAccountFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcChangeAccountFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcChangeAccountFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcChangeAccountFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcChangeAccountFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcChangeAccountFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcChangeAccountFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcChangeAccountField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcChangeAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(self);
    CThostFtdcChangeAccountField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcChangeAccountFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcChangeAccountFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcChangeAccountFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcChangeAccountFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcChangeAccountFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcChangeAccountFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcChangeAccountFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcChangeAccountFieldType_get_TradeCode,
    .set = PyCThostFtdcChangeAccountFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcChangeAccountFieldType_get_BankID,
    .set = PyCThostFtdcChangeAccountFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcChangeAccountFieldType_get_BankBranchID,
    .set = PyCThostFtdcChangeAccountFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcChangeAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcChangeAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcChangeAccountFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcChangeAccountFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcChangeAccountFieldType_get_TradeDate,
    .set = PyCThostFtdcChangeAccountFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcChangeAccountFieldType_get_TradeTime,
    .set = PyCThostFtdcChangeAccountFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcChangeAccountFieldType_get_BankSerial,
    .set = PyCThostFtdcChangeAccountFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcChangeAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcChangeAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcChangeAccountFieldType_get_LastFragment,
    .set = PyCThostFtdcChangeAccountFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcChangeAccountFieldType_get_CustomerName,
    .set = PyCThostFtdcChangeAccountFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcChangeAccountFieldType_get_IdCardType,
    .set = PyCThostFtdcChangeAccountFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcChangeAccountFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcChangeAccountFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 性别
    /// typedef char TThostFtdcGenderType
    {
    .name = "Gender",
    .get = PyCThostFtdcChangeAccountFieldType_get_Gender,
    .set = PyCThostFtdcChangeAccountFieldType_set_Gender,
    .doc = PyDoc_STR("性别"),
    },
    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    {
    .name = "CountryCode",
    .get = PyCThostFtdcChangeAccountFieldType_get_CountryCode,
    .set = PyCThostFtdcChangeAccountFieldType_set_CountryCode,
    .doc = PyDoc_STR("国家代码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcChangeAccountFieldType_get_CustType,
    .set = PyCThostFtdcChangeAccountFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcChangeAccountFieldType_get_Address,
    .set = PyCThostFtdcChangeAccountFieldType_set_Address,
    .doc = PyDoc_STR("地址"),
    },
    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    {
    .name = "ZipCode",
    .get = PyCThostFtdcChangeAccountFieldType_get_ZipCode,
    .set = PyCThostFtdcChangeAccountFieldType_set_ZipCode,
    .doc = PyDoc_STR("邮编"),
    },
    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcChangeAccountFieldType_get_Telephone,
    .set = PyCThostFtdcChangeAccountFieldType_set_Telephone,
    .doc = PyDoc_STR("电话号码"),
    },
    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    {
    .name = "MobilePhone",
    .get = PyCThostFtdcChangeAccountFieldType_get_MobilePhone,
    .set = PyCThostFtdcChangeAccountFieldType_set_MobilePhone,
    .doc = PyDoc_STR("手机"),
    },
    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    {
    .name = "Fax",
    .get = PyCThostFtdcChangeAccountFieldType_get_Fax,
    .set = PyCThostFtdcChangeAccountFieldType_set_Fax,
    .doc = PyDoc_STR("传真"),
    },
    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    {
    .name = "EMail",
    .get = PyCThostFtdcChangeAccountFieldType_get_EMail,
    .set = PyCThostFtdcChangeAccountFieldType_set_EMail,
    .doc = PyDoc_STR("电子邮件"),
    },
    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    {
    .name = "MoneyAccountStatus",
    .get = PyCThostFtdcChangeAccountFieldType_get_MoneyAccountStatus,
    .set = PyCThostFtdcChangeAccountFieldType_set_MoneyAccountStatus,
    .doc = PyDoc_STR("资金账户状态"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcChangeAccountFieldType_get_BankAccount,
    .set = PyCThostFtdcChangeAccountFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcChangeAccountFieldType_get_BankPassWord,
    .set = PyCThostFtdcChangeAccountFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 新银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "NewBankAccount",
    .get = PyCThostFtdcChangeAccountFieldType_get_NewBankAccount,
    .set = PyCThostFtdcChangeAccountFieldType_set_NewBankAccount,
    .doc = PyDoc_STR("新银行帐号"),
    },
    /// 新银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "NewBankPassWord",
    .get = PyCThostFtdcChangeAccountFieldType_get_NewBankPassWord,
    .set = PyCThostFtdcChangeAccountFieldType_set_NewBankPassWord,
    .doc = PyDoc_STR("新银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcChangeAccountFieldType_get_AccountID,
    .set = PyCThostFtdcChangeAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcChangeAccountFieldType_get_Password,
    .set = PyCThostFtdcChangeAccountFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcChangeAccountFieldType_get_BankAccType,
    .set = PyCThostFtdcChangeAccountFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcChangeAccountFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcChangeAccountFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcChangeAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcChangeAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcChangeAccountFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcChangeAccountFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcChangeAccountFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcChangeAccountFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcChangeAccountFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcChangeAccountFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcChangeAccountFieldType_get_Digest,
    .set = PyCThostFtdcChangeAccountFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcChangeAccountFieldType_get_ErrorMsg,
    .set = PyCThostFtdcChangeAccountFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcChangeAccountFieldType_get_LongCustomerName,
    .set = PyCThostFtdcChangeAccountFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcChangeAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcChangeAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银期变更银行账号信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcChangeAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcChangeAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcChangeAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcChangeAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcChangeAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcChangeAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银期变更银行账号信息")},
    {Py_tp_members, PyCThostFtdcChangeAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcChangeAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcChangeAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcChangeAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcChangeAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcChangeAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcChangeAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcChangeAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcChangeAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcChangeAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcChangeAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcChangeAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcChangeAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcChangeAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcChangeAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcChangeAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}