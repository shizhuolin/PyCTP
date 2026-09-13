
#include "PyCThostFtdcReqCancelAccountField.h"

///转帐销户请求

static int PyCThostFtdcReqCancelAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqCancelAccountField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqCancelAccountField_BankID = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqCancelAccountField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqCancelAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqCancelAccountField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqCancelAccountField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqCancelAccountField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqCancelAccountField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqCancelAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqCancelAccountField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqCancelAccountField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqCancelAccountField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcReqCancelAccountField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReqCancelAccountField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReqCancelAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_IdentifiedCardNo_length = 0;

    /// 性别
    /// typedef char TThostFtdcGenderType
    char CThostFtdcReqCancelAccountField_Gender = 0;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    char *CThostFtdcReqCancelAccountField_CountryCode = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_CountryCode_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReqCancelAccountField_CustType = 0;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcReqCancelAccountField_Address = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_Address_length = 0;

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    char *CThostFtdcReqCancelAccountField_ZipCode = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_ZipCode_length = 0;

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcReqCancelAccountField_Telephone = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_Telephone_length = 0;

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    char *CThostFtdcReqCancelAccountField_MobilePhone = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_MobilePhone_length = 0;

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    char *CThostFtdcReqCancelAccountField_Fax = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_Fax_length = 0;

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    char *CThostFtdcReqCancelAccountField_EMail = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_EMail_length = 0;

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    char CThostFtdcReqCancelAccountField_MoneyAccountStatus = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqCancelAccountField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqCancelAccountField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcReqCancelAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqCancelAccountField_Password = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReqCancelAccountField_InstallID = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcReqCancelAccountField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReqCancelAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_CurrencyID_length = 0;

    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    char CThostFtdcReqCancelAccountField_CashExchangeCode = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqCancelAccountField_Digest = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqCancelAccountField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcReqCancelAccountField_DeviceID = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqCancelAccountField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReqCancelAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqCancelAccountField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqCancelAccountField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqCancelAccountField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcReqCancelAccountField_OperNo = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_OperNo_length = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReqCancelAccountField_TID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqCancelAccountField_UserID = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_UserID_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReqCancelAccountField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcReqCancelAccountField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#y#", (char **)kwlist
        , &CThostFtdcReqCancelAccountField_TradeCode, &CThostFtdcReqCancelAccountField_TradeCode_length
        , &CThostFtdcReqCancelAccountField_BankID, &CThostFtdcReqCancelAccountField_BankID_length
        , &CThostFtdcReqCancelAccountField_BankBranchID, &CThostFtdcReqCancelAccountField_BankBranchID_length
        , &CThostFtdcReqCancelAccountField_BrokerID, &CThostFtdcReqCancelAccountField_BrokerID_length
        , &CThostFtdcReqCancelAccountField_BrokerBranchID, &CThostFtdcReqCancelAccountField_BrokerBranchID_length
        , &CThostFtdcReqCancelAccountField_TradeDate, &CThostFtdcReqCancelAccountField_TradeDate_length
        , &CThostFtdcReqCancelAccountField_TradeTime, &CThostFtdcReqCancelAccountField_TradeTime_length
        , &CThostFtdcReqCancelAccountField_BankSerial, &CThostFtdcReqCancelAccountField_BankSerial_length
        , &CThostFtdcReqCancelAccountField_TradingDay, &CThostFtdcReqCancelAccountField_TradingDay_length
        , &CThostFtdcReqCancelAccountField_PlateSerial
        , &CThostFtdcReqCancelAccountField_LastFragment
        , &CThostFtdcReqCancelAccountField_SessionID
        , &CThostFtdcReqCancelAccountField_CustomerName, &CThostFtdcReqCancelAccountField_CustomerName_length
        , &CThostFtdcReqCancelAccountField_IdCardType
        , &CThostFtdcReqCancelAccountField_IdentifiedCardNo, &CThostFtdcReqCancelAccountField_IdentifiedCardNo_length
        , &CThostFtdcReqCancelAccountField_Gender
        , &CThostFtdcReqCancelAccountField_CountryCode, &CThostFtdcReqCancelAccountField_CountryCode_length
        , &CThostFtdcReqCancelAccountField_CustType
        , &CThostFtdcReqCancelAccountField_Address, &CThostFtdcReqCancelAccountField_Address_length
        , &CThostFtdcReqCancelAccountField_ZipCode, &CThostFtdcReqCancelAccountField_ZipCode_length
        , &CThostFtdcReqCancelAccountField_Telephone, &CThostFtdcReqCancelAccountField_Telephone_length
        , &CThostFtdcReqCancelAccountField_MobilePhone, &CThostFtdcReqCancelAccountField_MobilePhone_length
        , &CThostFtdcReqCancelAccountField_Fax, &CThostFtdcReqCancelAccountField_Fax_length
        , &CThostFtdcReqCancelAccountField_EMail, &CThostFtdcReqCancelAccountField_EMail_length
        , &CThostFtdcReqCancelAccountField_MoneyAccountStatus
        , &CThostFtdcReqCancelAccountField_BankAccount, &CThostFtdcReqCancelAccountField_BankAccount_length
        , &CThostFtdcReqCancelAccountField_BankPassWord, &CThostFtdcReqCancelAccountField_BankPassWord_length
        , &CThostFtdcReqCancelAccountField_AccountID, &CThostFtdcReqCancelAccountField_AccountID_length
        , &CThostFtdcReqCancelAccountField_Password, &CThostFtdcReqCancelAccountField_Password_length
        , &CThostFtdcReqCancelAccountField_InstallID
        , &CThostFtdcReqCancelAccountField_VerifyCertNoFlag
        , &CThostFtdcReqCancelAccountField_CurrencyID, &CThostFtdcReqCancelAccountField_CurrencyID_length
        , &CThostFtdcReqCancelAccountField_CashExchangeCode
        , &CThostFtdcReqCancelAccountField_Digest, &CThostFtdcReqCancelAccountField_Digest_length
        , &CThostFtdcReqCancelAccountField_BankAccType
        , &CThostFtdcReqCancelAccountField_DeviceID, &CThostFtdcReqCancelAccountField_DeviceID_length
        , &CThostFtdcReqCancelAccountField_BankSecuAccType
        , &CThostFtdcReqCancelAccountField_BrokerIDByBank, &CThostFtdcReqCancelAccountField_BrokerIDByBank_length
        , &CThostFtdcReqCancelAccountField_BankSecuAcc, &CThostFtdcReqCancelAccountField_BankSecuAcc_length
        , &CThostFtdcReqCancelAccountField_BankPwdFlag
        , &CThostFtdcReqCancelAccountField_SecuPwdFlag
        , &CThostFtdcReqCancelAccountField_OperNo, &CThostFtdcReqCancelAccountField_OperNo_length
        , &CThostFtdcReqCancelAccountField_TID
        , &CThostFtdcReqCancelAccountField_UserID, &CThostFtdcReqCancelAccountField_UserID_length
        , &CThostFtdcReqCancelAccountField_LongCustomerName, &CThostFtdcReqCancelAccountField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqCancelAccountField_TradeCode != NULL ) {
        if(CThostFtdcReqCancelAccountField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqCancelAccountField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqCancelAccountField_TradeCode, CThostFtdcReqCancelAccountField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqCancelAccountField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqCancelAccountField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqCancelAccountField_BankID != NULL ) {
        if(CThostFtdcReqCancelAccountField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqCancelAccountField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqCancelAccountField_BankID, CThostFtdcReqCancelAccountField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqCancelAccountField_BankID, sizeof(data->BankID));
        CThostFtdcReqCancelAccountField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqCancelAccountField_BankBranchID != NULL ) {
        if(CThostFtdcReqCancelAccountField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqCancelAccountField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqCancelAccountField_BankBranchID, CThostFtdcReqCancelAccountField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqCancelAccountField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqCancelAccountField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqCancelAccountField_BrokerID != NULL ) {
        if(CThostFtdcReqCancelAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqCancelAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqCancelAccountField_BrokerID, CThostFtdcReqCancelAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqCancelAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqCancelAccountField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqCancelAccountField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqCancelAccountField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqCancelAccountField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqCancelAccountField_BrokerBranchID, CThostFtdcReqCancelAccountField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqCancelAccountField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqCancelAccountField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqCancelAccountField_TradeDate != NULL ) {
        if(CThostFtdcReqCancelAccountField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqCancelAccountField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqCancelAccountField_TradeDate, CThostFtdcReqCancelAccountField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqCancelAccountField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqCancelAccountField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqCancelAccountField_TradeTime != NULL ) {
        if(CThostFtdcReqCancelAccountField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqCancelAccountField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqCancelAccountField_TradeTime, CThostFtdcReqCancelAccountField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqCancelAccountField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqCancelAccountField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqCancelAccountField_BankSerial != NULL ) {
        if(CThostFtdcReqCancelAccountField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqCancelAccountField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqCancelAccountField_BankSerial, CThostFtdcReqCancelAccountField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqCancelAccountField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqCancelAccountField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqCancelAccountField_TradingDay != NULL ) {
        if(CThostFtdcReqCancelAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqCancelAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqCancelAccountField_TradingDay, CThostFtdcReqCancelAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqCancelAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqCancelAccountField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqCancelAccountField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqCancelAccountField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqCancelAccountField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcReqCancelAccountField_CustomerName != NULL ) {
        if(CThostFtdcReqCancelAccountField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcReqCancelAccountField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReqCancelAccountField_CustomerName, CThostFtdcReqCancelAccountField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReqCancelAccountField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReqCancelAccountField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReqCancelAccountField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReqCancelAccountField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReqCancelAccountField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReqCancelAccountField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReqCancelAccountField_IdentifiedCardNo, CThostFtdcReqCancelAccountField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReqCancelAccountField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReqCancelAccountField_IdentifiedCardNo = NULL;
    }

    /// 性别
    /// typedef char TThostFtdcGenderType
    data->Gender = CThostFtdcReqCancelAccountField_Gender;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    if( CThostFtdcReqCancelAccountField_CountryCode != NULL ) {
        if(CThostFtdcReqCancelAccountField_CountryCode_length >= (Py_ssize_t)sizeof(data->CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is 20)", CThostFtdcReqCancelAccountField_CountryCode_length);
            return -1;
        }
        // memset(data->CountryCode, 0, sizeof(data->CountryCode));
        // memcpy(data->CountryCode, CThostFtdcReqCancelAccountField_CountryCode, CThostFtdcReqCancelAccountField_CountryCode_length);
        strncpy(data->CountryCode, CThostFtdcReqCancelAccountField_CountryCode, sizeof(data->CountryCode));
        CThostFtdcReqCancelAccountField_CountryCode = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReqCancelAccountField_CustType;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcReqCancelAccountField_Address != NULL ) {
        if(CThostFtdcReqCancelAccountField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcReqCancelAccountField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcReqCancelAccountField_Address, CThostFtdcReqCancelAccountField_Address_length);
        strncpy(data->Address, CThostFtdcReqCancelAccountField_Address, sizeof(data->Address));
        CThostFtdcReqCancelAccountField_Address = NULL;
    }

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    if( CThostFtdcReqCancelAccountField_ZipCode != NULL ) {
        if(CThostFtdcReqCancelAccountField_ZipCode_length >= (Py_ssize_t)sizeof(data->ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is 6)", CThostFtdcReqCancelAccountField_ZipCode_length);
            return -1;
        }
        // memset(data->ZipCode, 0, sizeof(data->ZipCode));
        // memcpy(data->ZipCode, CThostFtdcReqCancelAccountField_ZipCode, CThostFtdcReqCancelAccountField_ZipCode_length);
        strncpy(data->ZipCode, CThostFtdcReqCancelAccountField_ZipCode, sizeof(data->ZipCode));
        CThostFtdcReqCancelAccountField_ZipCode = NULL;
    }

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcReqCancelAccountField_Telephone != NULL ) {
        if(CThostFtdcReqCancelAccountField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcReqCancelAccountField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcReqCancelAccountField_Telephone, CThostFtdcReqCancelAccountField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcReqCancelAccountField_Telephone, sizeof(data->Telephone));
        CThostFtdcReqCancelAccountField_Telephone = NULL;
    }

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    if( CThostFtdcReqCancelAccountField_MobilePhone != NULL ) {
        if(CThostFtdcReqCancelAccountField_MobilePhone_length >= (Py_ssize_t)sizeof(data->MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is 20)", CThostFtdcReqCancelAccountField_MobilePhone_length);
            return -1;
        }
        // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
        // memcpy(data->MobilePhone, CThostFtdcReqCancelAccountField_MobilePhone, CThostFtdcReqCancelAccountField_MobilePhone_length);
        strncpy(data->MobilePhone, CThostFtdcReqCancelAccountField_MobilePhone, sizeof(data->MobilePhone));
        CThostFtdcReqCancelAccountField_MobilePhone = NULL;
    }

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    if( CThostFtdcReqCancelAccountField_Fax != NULL ) {
        if(CThostFtdcReqCancelAccountField_Fax_length >= (Py_ssize_t)sizeof(data->Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is 40)", CThostFtdcReqCancelAccountField_Fax_length);
            return -1;
        }
        // memset(data->Fax, 0, sizeof(data->Fax));
        // memcpy(data->Fax, CThostFtdcReqCancelAccountField_Fax, CThostFtdcReqCancelAccountField_Fax_length);
        strncpy(data->Fax, CThostFtdcReqCancelAccountField_Fax, sizeof(data->Fax));
        CThostFtdcReqCancelAccountField_Fax = NULL;
    }

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    if( CThostFtdcReqCancelAccountField_EMail != NULL ) {
        if(CThostFtdcReqCancelAccountField_EMail_length >= (Py_ssize_t)sizeof(data->EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is 40)", CThostFtdcReqCancelAccountField_EMail_length);
            return -1;
        }
        // memset(data->EMail, 0, sizeof(data->EMail));
        // memcpy(data->EMail, CThostFtdcReqCancelAccountField_EMail, CThostFtdcReqCancelAccountField_EMail_length);
        strncpy(data->EMail, CThostFtdcReqCancelAccountField_EMail, sizeof(data->EMail));
        CThostFtdcReqCancelAccountField_EMail = NULL;
    }

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    data->MoneyAccountStatus = CThostFtdcReqCancelAccountField_MoneyAccountStatus;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqCancelAccountField_BankAccount != NULL ) {
        if(CThostFtdcReqCancelAccountField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReqCancelAccountField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReqCancelAccountField_BankAccount, CThostFtdcReqCancelAccountField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReqCancelAccountField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReqCancelAccountField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqCancelAccountField_BankPassWord != NULL ) {
        if(CThostFtdcReqCancelAccountField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReqCancelAccountField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReqCancelAccountField_BankPassWord, CThostFtdcReqCancelAccountField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReqCancelAccountField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReqCancelAccountField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcReqCancelAccountField_AccountID != NULL ) {
        if(CThostFtdcReqCancelAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcReqCancelAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcReqCancelAccountField_AccountID, CThostFtdcReqCancelAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcReqCancelAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcReqCancelAccountField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqCancelAccountField_Password != NULL ) {
        if(CThostFtdcReqCancelAccountField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqCancelAccountField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqCancelAccountField_Password, CThostFtdcReqCancelAccountField_Password_length);
        strncpy(data->Password, CThostFtdcReqCancelAccountField_Password, sizeof(data->Password));
        CThostFtdcReqCancelAccountField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReqCancelAccountField_InstallID;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcReqCancelAccountField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReqCancelAccountField_CurrencyID != NULL ) {
        if(CThostFtdcReqCancelAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReqCancelAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReqCancelAccountField_CurrencyID, CThostFtdcReqCancelAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReqCancelAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReqCancelAccountField_CurrencyID = NULL;
    }

    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    data->CashExchangeCode = CThostFtdcReqCancelAccountField_CashExchangeCode;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqCancelAccountField_Digest != NULL ) {
        if(CThostFtdcReqCancelAccountField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqCancelAccountField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqCancelAccountField_Digest, CThostFtdcReqCancelAccountField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqCancelAccountField_Digest, sizeof(data->Digest));
        CThostFtdcReqCancelAccountField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcReqCancelAccountField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcReqCancelAccountField_DeviceID != NULL ) {
        if(CThostFtdcReqCancelAccountField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcReqCancelAccountField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcReqCancelAccountField_DeviceID, CThostFtdcReqCancelAccountField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcReqCancelAccountField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcReqCancelAccountField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcReqCancelAccountField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReqCancelAccountField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReqCancelAccountField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReqCancelAccountField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReqCancelAccountField_BrokerIDByBank, CThostFtdcReqCancelAccountField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReqCancelAccountField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReqCancelAccountField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqCancelAccountField_BankSecuAcc != NULL ) {
        if(CThostFtdcReqCancelAccountField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcReqCancelAccountField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcReqCancelAccountField_BankSecuAcc, CThostFtdcReqCancelAccountField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcReqCancelAccountField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcReqCancelAccountField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcReqCancelAccountField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcReqCancelAccountField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcReqCancelAccountField_OperNo != NULL ) {
        if(CThostFtdcReqCancelAccountField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcReqCancelAccountField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcReqCancelAccountField_OperNo, CThostFtdcReqCancelAccountField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcReqCancelAccountField_OperNo, sizeof(data->OperNo));
        CThostFtdcReqCancelAccountField_OperNo = NULL;
    }

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReqCancelAccountField_TID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqCancelAccountField_UserID != NULL ) {
        if(CThostFtdcReqCancelAccountField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqCancelAccountField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqCancelAccountField_UserID, CThostFtdcReqCancelAccountField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqCancelAccountField_UserID, sizeof(data->UserID));
        CThostFtdcReqCancelAccountField_UserID = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReqCancelAccountField_LongCustomerName != NULL ) {
        if(CThostFtdcReqCancelAccountField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReqCancelAccountField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcReqCancelAccountField_LongCustomerName, CThostFtdcReqCancelAccountField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcReqCancelAccountField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcReqCancelAccountField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqCancelAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:y}"
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
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqCancelAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqCancelAccountField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 性别
/// typedef char TThostFtdcGenderType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_Gender(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Gender), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_Gender(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Gender Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::Gender)) {
        PyErr_SetString(PyExc_ValueError, "Gender must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->Gender = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 国家代码
/// typedef char TThostFtdcCountryCodeType[21]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_CountryCode(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CountryCode, (Py_ssize_t)sizeof(data->CountryCode));
    return PyBytes_FromString(data->CountryCode);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_CountryCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CountryCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::CountryCode)) {
        PyErr_SetString(PyExc_ValueError, "CountryCode must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->CountryCode, 0, sizeof(data->CountryCode));
    // memcpy(data->CountryCode, buf, len);
    strncpy(data->CountryCode, buf, sizeof(data->CountryCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 邮编
/// typedef char TThostFtdcZipCodeType[7]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_ZipCode(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ZipCode, (Py_ssize_t)sizeof(data->ZipCode));
    return PyBytes_FromString(data->ZipCode);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_ZipCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->ZipCode, 0, sizeof(data->ZipCode));
    // memcpy(data->ZipCode, buf, len);
    strncpy(data->ZipCode, buf, sizeof(data->ZipCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电话号码
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机
/// typedef char TThostFtdcMobilePhoneType[21]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_MobilePhone(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MobilePhone, (Py_ssize_t)sizeof(data->MobilePhone));
    return PyBytes_FromString(data->MobilePhone);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_MobilePhone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MobilePhone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::MobilePhone)) {
        PyErr_SetString(PyExc_ValueError, "MobilePhone must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
    // memcpy(data->MobilePhone, buf, len);
    strncpy(data->MobilePhone, buf, sizeof(data->MobilePhone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 传真
/// typedef char TThostFtdcFaxType[41]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_Fax(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Fax, (Py_ssize_t)sizeof(data->Fax));
    return PyBytes_FromString(data->Fax);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_Fax(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Fax Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::Fax)) {
        PyErr_SetString(PyExc_ValueError, "Fax must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->Fax, 0, sizeof(data->Fax));
    // memcpy(data->Fax, buf, len);
    strncpy(data->Fax, buf, sizeof(data->Fax));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电子邮件
/// typedef char TThostFtdcEMailType[41]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_EMail(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EMail, (Py_ssize_t)sizeof(data->EMail));
    return PyBytes_FromString(data->EMail);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_EMail(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EMail Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::EMail)) {
        PyErr_SetString(PyExc_ValueError, "EMail must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->EMail, 0, sizeof(data->EMail));
    // memcpy(data->EMail, buf, len);
    strncpy(data->EMail, buf, sizeof(data->EMail));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户状态
/// typedef char TThostFtdcMoneyAccountStatusType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_MoneyAccountStatus(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MoneyAccountStatus), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_MoneyAccountStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MoneyAccountStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::MoneyAccountStatus)) {
        PyErr_SetString(PyExc_ValueError, "MoneyAccountStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->MoneyAccountStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 汇钞标志
/// typedef char TThostFtdcCashExchangeCodeType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_CashExchangeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CashExchangeCode), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_CashExchangeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CashExchangeCode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::CashExchangeCode)) {
        PyErr_SetString(PyExc_ValueError, "CashExchangeCode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->CashExchangeCode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReqCancelAccountFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcReqCancelAccountFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqCancelAccountField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqCancelAccountFieldData>(self);
    CThostFtdcReqCancelAccountField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqCancelAccountFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqCancelAccountFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqCancelAccountFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReqCancelAccountFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcReqCancelAccountFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqCancelAccountFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_TradeCode,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankID,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_TradeDate,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_TradeTime,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankSerial,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_LastFragment,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_CustomerName,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_IdCardType,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 性别
    /// typedef char TThostFtdcGenderType
    {
    .name = "Gender",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_Gender,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_Gender,
    .doc = PyDoc_STR("性别"),
    },
    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    {
    .name = "CountryCode",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_CountryCode,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_CountryCode,
    .doc = PyDoc_STR("国家代码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_CustType,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_Address,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_Address,
    .doc = PyDoc_STR("地址"),
    },
    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    {
    .name = "ZipCode",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_ZipCode,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_ZipCode,
    .doc = PyDoc_STR("邮编"),
    },
    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_Telephone,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_Telephone,
    .doc = PyDoc_STR("电话号码"),
    },
    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    {
    .name = "MobilePhone",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_MobilePhone,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_MobilePhone,
    .doc = PyDoc_STR("手机"),
    },
    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    {
    .name = "Fax",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_Fax,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_Fax,
    .doc = PyDoc_STR("传真"),
    },
    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    {
    .name = "EMail",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_EMail,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_EMail,
    .doc = PyDoc_STR("电子邮件"),
    },
    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    {
    .name = "MoneyAccountStatus",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_MoneyAccountStatus,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_MoneyAccountStatus,
    .doc = PyDoc_STR("资金账户状态"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankAccount,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankPassWord,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_AccountID,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_Password,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    {
    .name = "CashExchangeCode",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_CashExchangeCode,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_CashExchangeCode,
    .doc = PyDoc_STR("汇钞标志"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_Digest,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankAccType,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_DeviceID,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_OperNo,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_UserID,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcReqCancelAccountFieldType_get_LongCustomerName,
    .set = PyCThostFtdcReqCancelAccountFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqCancelAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqCancelAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("转帐销户请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqCancelAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqCancelAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqCancelAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqCancelAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqCancelAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqCancelAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("转帐销户请求")},
    {Py_tp_members, PyCThostFtdcReqCancelAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqCancelAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqCancelAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqCancelAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqCancelAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqCancelAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqCancelAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqCancelAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqCancelAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqCancelAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqCancelAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqCancelAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqCancelAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqCancelAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqCancelAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqCancelAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}