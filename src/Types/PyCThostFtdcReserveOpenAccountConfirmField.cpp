
#include "PyCThostFtdcReserveOpenAccountConfirmField.h"

///银期预约开户确认请求

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "InstallID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "BrokerIDByBank", "TID", "AccountID", "Password", "BankReserveOpenSeq", "BookDate", "BookPsw", "ErrorID", "ErrorMsg", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReserveOpenAccountConfirmField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReserveOpenAccountConfirmField_BankID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReserveOpenAccountConfirmField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReserveOpenAccountConfirmField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReserveOpenAccountConfirmField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReserveOpenAccountConfirmField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReserveOpenAccountConfirmField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReserveOpenAccountConfirmField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReserveOpenAccountConfirmField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReserveOpenAccountConfirmField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReserveOpenAccountConfirmField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReserveOpenAccountConfirmField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReserveOpenAccountConfirmField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo_length = 0;

    /// 性别
    /// typedef char TThostFtdcGenderType
    char CThostFtdcReserveOpenAccountConfirmField_Gender = 0;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    char *CThostFtdcReserveOpenAccountConfirmField_CountryCode = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_CountryCode_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReserveOpenAccountConfirmField_CustType = 0;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcReserveOpenAccountConfirmField_Address = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_Address_length = 0;

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    char *CThostFtdcReserveOpenAccountConfirmField_ZipCode = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_ZipCode_length = 0;

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcReserveOpenAccountConfirmField_Telephone = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_Telephone_length = 0;

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    char *CThostFtdcReserveOpenAccountConfirmField_MobilePhone = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_MobilePhone_length = 0;

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    char *CThostFtdcReserveOpenAccountConfirmField_Fax = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_Fax_length = 0;

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    char *CThostFtdcReserveOpenAccountConfirmField_EMail = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_EMail_length = 0;

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    char CThostFtdcReserveOpenAccountConfirmField_MoneyAccountStatus = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReserveOpenAccountConfirmField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReserveOpenAccountConfirmField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BankPassWord_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReserveOpenAccountConfirmField_InstallID = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcReserveOpenAccountConfirmField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReserveOpenAccountConfirmField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_CurrencyID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReserveOpenAccountConfirmField_Digest = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReserveOpenAccountConfirmField_BankAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank_length = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReserveOpenAccountConfirmField_TID = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcReserveOpenAccountConfirmField_AccountID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReserveOpenAccountConfirmField_Password = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_Password_length = 0;

    /// 预约开户银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq_length = 0;

    /// 预约开户日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReserveOpenAccountConfirmField_BookDate = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BookDate_length = 0;

    /// 预约开户验证密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReserveOpenAccountConfirmField_BookPsw = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_BookPsw_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcReserveOpenAccountConfirmField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcReserveOpenAccountConfirmField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountConfirmField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#icy#y#cy#iy#y#y#y#y#iy#", (char **)kwlist
        , &CThostFtdcReserveOpenAccountConfirmField_TradeCode, &CThostFtdcReserveOpenAccountConfirmField_TradeCode_length
        , &CThostFtdcReserveOpenAccountConfirmField_BankID, &CThostFtdcReserveOpenAccountConfirmField_BankID_length
        , &CThostFtdcReserveOpenAccountConfirmField_BankBranchID, &CThostFtdcReserveOpenAccountConfirmField_BankBranchID_length
        , &CThostFtdcReserveOpenAccountConfirmField_BrokerID, &CThostFtdcReserveOpenAccountConfirmField_BrokerID_length
        , &CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID, &CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID_length
        , &CThostFtdcReserveOpenAccountConfirmField_TradeDate, &CThostFtdcReserveOpenAccountConfirmField_TradeDate_length
        , &CThostFtdcReserveOpenAccountConfirmField_TradeTime, &CThostFtdcReserveOpenAccountConfirmField_TradeTime_length
        , &CThostFtdcReserveOpenAccountConfirmField_BankSerial, &CThostFtdcReserveOpenAccountConfirmField_BankSerial_length
        , &CThostFtdcReserveOpenAccountConfirmField_TradingDay, &CThostFtdcReserveOpenAccountConfirmField_TradingDay_length
        , &CThostFtdcReserveOpenAccountConfirmField_PlateSerial
        , &CThostFtdcReserveOpenAccountConfirmField_LastFragment
        , &CThostFtdcReserveOpenAccountConfirmField_SessionID
        , &CThostFtdcReserveOpenAccountConfirmField_CustomerName, &CThostFtdcReserveOpenAccountConfirmField_CustomerName_length
        , &CThostFtdcReserveOpenAccountConfirmField_IdCardType
        , &CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo, &CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo_length
        , &CThostFtdcReserveOpenAccountConfirmField_Gender
        , &CThostFtdcReserveOpenAccountConfirmField_CountryCode, &CThostFtdcReserveOpenAccountConfirmField_CountryCode_length
        , &CThostFtdcReserveOpenAccountConfirmField_CustType
        , &CThostFtdcReserveOpenAccountConfirmField_Address, &CThostFtdcReserveOpenAccountConfirmField_Address_length
        , &CThostFtdcReserveOpenAccountConfirmField_ZipCode, &CThostFtdcReserveOpenAccountConfirmField_ZipCode_length
        , &CThostFtdcReserveOpenAccountConfirmField_Telephone, &CThostFtdcReserveOpenAccountConfirmField_Telephone_length
        , &CThostFtdcReserveOpenAccountConfirmField_MobilePhone, &CThostFtdcReserveOpenAccountConfirmField_MobilePhone_length
        , &CThostFtdcReserveOpenAccountConfirmField_Fax, &CThostFtdcReserveOpenAccountConfirmField_Fax_length
        , &CThostFtdcReserveOpenAccountConfirmField_EMail, &CThostFtdcReserveOpenAccountConfirmField_EMail_length
        , &CThostFtdcReserveOpenAccountConfirmField_MoneyAccountStatus
        , &CThostFtdcReserveOpenAccountConfirmField_BankAccount, &CThostFtdcReserveOpenAccountConfirmField_BankAccount_length
        , &CThostFtdcReserveOpenAccountConfirmField_BankPassWord, &CThostFtdcReserveOpenAccountConfirmField_BankPassWord_length
        , &CThostFtdcReserveOpenAccountConfirmField_InstallID
        , &CThostFtdcReserveOpenAccountConfirmField_VerifyCertNoFlag
        , &CThostFtdcReserveOpenAccountConfirmField_CurrencyID, &CThostFtdcReserveOpenAccountConfirmField_CurrencyID_length
        , &CThostFtdcReserveOpenAccountConfirmField_Digest, &CThostFtdcReserveOpenAccountConfirmField_Digest_length
        , &CThostFtdcReserveOpenAccountConfirmField_BankAccType
        , &CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank, &CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank_length
        , &CThostFtdcReserveOpenAccountConfirmField_TID
        , &CThostFtdcReserveOpenAccountConfirmField_AccountID, &CThostFtdcReserveOpenAccountConfirmField_AccountID_length
        , &CThostFtdcReserveOpenAccountConfirmField_Password, &CThostFtdcReserveOpenAccountConfirmField_Password_length
        , &CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq, &CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq_length
        , &CThostFtdcReserveOpenAccountConfirmField_BookDate, &CThostFtdcReserveOpenAccountConfirmField_BookDate_length
        , &CThostFtdcReserveOpenAccountConfirmField_BookPsw, &CThostFtdcReserveOpenAccountConfirmField_BookPsw_length
        , &CThostFtdcReserveOpenAccountConfirmField_ErrorID
        , &CThostFtdcReserveOpenAccountConfirmField_ErrorMsg, &CThostFtdcReserveOpenAccountConfirmField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReserveOpenAccountConfirmField_TradeCode != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReserveOpenAccountConfirmField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReserveOpenAccountConfirmField_TradeCode, CThostFtdcReserveOpenAccountConfirmField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReserveOpenAccountConfirmField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReserveOpenAccountConfirmField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReserveOpenAccountConfirmField_BankID != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReserveOpenAccountConfirmField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReserveOpenAccountConfirmField_BankID, CThostFtdcReserveOpenAccountConfirmField_BankID_length);
        strncpy(data->BankID, CThostFtdcReserveOpenAccountConfirmField_BankID, sizeof(data->BankID));
        CThostFtdcReserveOpenAccountConfirmField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReserveOpenAccountConfirmField_BankBranchID != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReserveOpenAccountConfirmField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReserveOpenAccountConfirmField_BankBranchID, CThostFtdcReserveOpenAccountConfirmField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReserveOpenAccountConfirmField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReserveOpenAccountConfirmField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReserveOpenAccountConfirmField_BrokerID != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReserveOpenAccountConfirmField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReserveOpenAccountConfirmField_BrokerID, CThostFtdcReserveOpenAccountConfirmField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReserveOpenAccountConfirmField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReserveOpenAccountConfirmField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID, CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReserveOpenAccountConfirmField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReserveOpenAccountConfirmField_TradeDate != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReserveOpenAccountConfirmField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReserveOpenAccountConfirmField_TradeDate, CThostFtdcReserveOpenAccountConfirmField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReserveOpenAccountConfirmField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReserveOpenAccountConfirmField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReserveOpenAccountConfirmField_TradeTime != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReserveOpenAccountConfirmField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReserveOpenAccountConfirmField_TradeTime, CThostFtdcReserveOpenAccountConfirmField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReserveOpenAccountConfirmField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReserveOpenAccountConfirmField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReserveOpenAccountConfirmField_BankSerial != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReserveOpenAccountConfirmField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReserveOpenAccountConfirmField_BankSerial, CThostFtdcReserveOpenAccountConfirmField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReserveOpenAccountConfirmField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReserveOpenAccountConfirmField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReserveOpenAccountConfirmField_TradingDay != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReserveOpenAccountConfirmField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReserveOpenAccountConfirmField_TradingDay, CThostFtdcReserveOpenAccountConfirmField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReserveOpenAccountConfirmField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReserveOpenAccountConfirmField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReserveOpenAccountConfirmField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReserveOpenAccountConfirmField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReserveOpenAccountConfirmField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReserveOpenAccountConfirmField_CustomerName != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReserveOpenAccountConfirmField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReserveOpenAccountConfirmField_CustomerName, CThostFtdcReserveOpenAccountConfirmField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReserveOpenAccountConfirmField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReserveOpenAccountConfirmField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReserveOpenAccountConfirmField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo, CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReserveOpenAccountConfirmField_IdentifiedCardNo = NULL;
    }

    /// 性别
    /// typedef char TThostFtdcGenderType
    data->Gender = CThostFtdcReserveOpenAccountConfirmField_Gender;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    if( CThostFtdcReserveOpenAccountConfirmField_CountryCode != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_CountryCode_length >= (Py_ssize_t)sizeof(data->CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is 20)", CThostFtdcReserveOpenAccountConfirmField_CountryCode_length);
            return -1;
        }
        // memset(data->CountryCode, 0, sizeof(data->CountryCode));
        // memcpy(data->CountryCode, CThostFtdcReserveOpenAccountConfirmField_CountryCode, CThostFtdcReserveOpenAccountConfirmField_CountryCode_length);
        strncpy(data->CountryCode, CThostFtdcReserveOpenAccountConfirmField_CountryCode, sizeof(data->CountryCode));
        CThostFtdcReserveOpenAccountConfirmField_CountryCode = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReserveOpenAccountConfirmField_CustType;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcReserveOpenAccountConfirmField_Address != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcReserveOpenAccountConfirmField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcReserveOpenAccountConfirmField_Address, CThostFtdcReserveOpenAccountConfirmField_Address_length);
        strncpy(data->Address, CThostFtdcReserveOpenAccountConfirmField_Address, sizeof(data->Address));
        CThostFtdcReserveOpenAccountConfirmField_Address = NULL;
    }

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    if( CThostFtdcReserveOpenAccountConfirmField_ZipCode != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_ZipCode_length >= (Py_ssize_t)sizeof(data->ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is 6)", CThostFtdcReserveOpenAccountConfirmField_ZipCode_length);
            return -1;
        }
        // memset(data->ZipCode, 0, sizeof(data->ZipCode));
        // memcpy(data->ZipCode, CThostFtdcReserveOpenAccountConfirmField_ZipCode, CThostFtdcReserveOpenAccountConfirmField_ZipCode_length);
        strncpy(data->ZipCode, CThostFtdcReserveOpenAccountConfirmField_ZipCode, sizeof(data->ZipCode));
        CThostFtdcReserveOpenAccountConfirmField_ZipCode = NULL;
    }

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcReserveOpenAccountConfirmField_Telephone != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountConfirmField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcReserveOpenAccountConfirmField_Telephone, CThostFtdcReserveOpenAccountConfirmField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcReserveOpenAccountConfirmField_Telephone, sizeof(data->Telephone));
        CThostFtdcReserveOpenAccountConfirmField_Telephone = NULL;
    }

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    if( CThostFtdcReserveOpenAccountConfirmField_MobilePhone != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_MobilePhone_length >= (Py_ssize_t)sizeof(data->MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is 20)", CThostFtdcReserveOpenAccountConfirmField_MobilePhone_length);
            return -1;
        }
        // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
        // memcpy(data->MobilePhone, CThostFtdcReserveOpenAccountConfirmField_MobilePhone, CThostFtdcReserveOpenAccountConfirmField_MobilePhone_length);
        strncpy(data->MobilePhone, CThostFtdcReserveOpenAccountConfirmField_MobilePhone, sizeof(data->MobilePhone));
        CThostFtdcReserveOpenAccountConfirmField_MobilePhone = NULL;
    }

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    if( CThostFtdcReserveOpenAccountConfirmField_Fax != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_Fax_length >= (Py_ssize_t)sizeof(data->Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountConfirmField_Fax_length);
            return -1;
        }
        // memset(data->Fax, 0, sizeof(data->Fax));
        // memcpy(data->Fax, CThostFtdcReserveOpenAccountConfirmField_Fax, CThostFtdcReserveOpenAccountConfirmField_Fax_length);
        strncpy(data->Fax, CThostFtdcReserveOpenAccountConfirmField_Fax, sizeof(data->Fax));
        CThostFtdcReserveOpenAccountConfirmField_Fax = NULL;
    }

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    if( CThostFtdcReserveOpenAccountConfirmField_EMail != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_EMail_length >= (Py_ssize_t)sizeof(data->EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountConfirmField_EMail_length);
            return -1;
        }
        // memset(data->EMail, 0, sizeof(data->EMail));
        // memcpy(data->EMail, CThostFtdcReserveOpenAccountConfirmField_EMail, CThostFtdcReserveOpenAccountConfirmField_EMail_length);
        strncpy(data->EMail, CThostFtdcReserveOpenAccountConfirmField_EMail, sizeof(data->EMail));
        CThostFtdcReserveOpenAccountConfirmField_EMail = NULL;
    }

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    data->MoneyAccountStatus = CThostFtdcReserveOpenAccountConfirmField_MoneyAccountStatus;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReserveOpenAccountConfirmField_BankAccount != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountConfirmField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReserveOpenAccountConfirmField_BankAccount, CThostFtdcReserveOpenAccountConfirmField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReserveOpenAccountConfirmField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReserveOpenAccountConfirmField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReserveOpenAccountConfirmField_BankPassWord != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountConfirmField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReserveOpenAccountConfirmField_BankPassWord, CThostFtdcReserveOpenAccountConfirmField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReserveOpenAccountConfirmField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReserveOpenAccountConfirmField_BankPassWord = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReserveOpenAccountConfirmField_InstallID;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcReserveOpenAccountConfirmField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReserveOpenAccountConfirmField_CurrencyID != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReserveOpenAccountConfirmField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReserveOpenAccountConfirmField_CurrencyID, CThostFtdcReserveOpenAccountConfirmField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReserveOpenAccountConfirmField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReserveOpenAccountConfirmField_CurrencyID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReserveOpenAccountConfirmField_Digest != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReserveOpenAccountConfirmField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReserveOpenAccountConfirmField_Digest, CThostFtdcReserveOpenAccountConfirmField_Digest_length);
        strncpy(data->Digest, CThostFtdcReserveOpenAccountConfirmField_Digest, sizeof(data->Digest));
        CThostFtdcReserveOpenAccountConfirmField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcReserveOpenAccountConfirmField_BankAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank, CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReserveOpenAccountConfirmField_BrokerIDByBank = NULL;
    }

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReserveOpenAccountConfirmField_TID;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcReserveOpenAccountConfirmField_AccountID != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcReserveOpenAccountConfirmField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcReserveOpenAccountConfirmField_AccountID, CThostFtdcReserveOpenAccountConfirmField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcReserveOpenAccountConfirmField_AccountID, sizeof(data->AccountID));
        CThostFtdcReserveOpenAccountConfirmField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReserveOpenAccountConfirmField_Password != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountConfirmField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReserveOpenAccountConfirmField_Password, CThostFtdcReserveOpenAccountConfirmField_Password_length);
        strncpy(data->Password, CThostFtdcReserveOpenAccountConfirmField_Password, sizeof(data->Password));
        CThostFtdcReserveOpenAccountConfirmField_Password = NULL;
    }

    /// 预约开户银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq_length >= (Py_ssize_t)sizeof(data->BankReserveOpenSeq)) {
            PyErr_Format(PyExc_ValueError, "BankReserveOpenSeq too long: length=%zd (max allowed is 12)", CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq_length);
            return -1;
        }
        // memset(data->BankReserveOpenSeq, 0, sizeof(data->BankReserveOpenSeq));
        // memcpy(data->BankReserveOpenSeq, CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq, CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq_length);
        strncpy(data->BankReserveOpenSeq, CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq, sizeof(data->BankReserveOpenSeq));
        CThostFtdcReserveOpenAccountConfirmField_BankReserveOpenSeq = NULL;
    }

    /// 预约开户日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReserveOpenAccountConfirmField_BookDate != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BookDate_length >= (Py_ssize_t)sizeof(data->BookDate)) {
            PyErr_Format(PyExc_ValueError, "BookDate too long: length=%zd (max allowed is 8)", CThostFtdcReserveOpenAccountConfirmField_BookDate_length);
            return -1;
        }
        // memset(data->BookDate, 0, sizeof(data->BookDate));
        // memcpy(data->BookDate, CThostFtdcReserveOpenAccountConfirmField_BookDate, CThostFtdcReserveOpenAccountConfirmField_BookDate_length);
        strncpy(data->BookDate, CThostFtdcReserveOpenAccountConfirmField_BookDate, sizeof(data->BookDate));
        CThostFtdcReserveOpenAccountConfirmField_BookDate = NULL;
    }

    /// 预约开户验证密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReserveOpenAccountConfirmField_BookPsw != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_BookPsw_length >= (Py_ssize_t)sizeof(data->BookPsw)) {
            PyErr_Format(PyExc_ValueError, "BookPsw too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountConfirmField_BookPsw_length);
            return -1;
        }
        // memset(data->BookPsw, 0, sizeof(data->BookPsw));
        // memcpy(data->BookPsw, CThostFtdcReserveOpenAccountConfirmField_BookPsw, CThostFtdcReserveOpenAccountConfirmField_BookPsw_length);
        strncpy(data->BookPsw, CThostFtdcReserveOpenAccountConfirmField_BookPsw, sizeof(data->BookPsw));
        CThostFtdcReserveOpenAccountConfirmField_BookPsw = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcReserveOpenAccountConfirmField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcReserveOpenAccountConfirmField_ErrorMsg != NULL ) {
        if(CThostFtdcReserveOpenAccountConfirmField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcReserveOpenAccountConfirmField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcReserveOpenAccountConfirmField_ErrorMsg, CThostFtdcReserveOpenAccountConfirmField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcReserveOpenAccountConfirmField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcReserveOpenAccountConfirmField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_repr(PyObject *self) {

    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
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
        , "InstallID", data->InstallID
        , "VerifyCertNoFlag", data->VerifyCertNoFlag
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "Digest", data->Digest//, (Py_ssize_t)sizeof(data->Digest)
        , "BankAccType", data->BankAccType
        , "BrokerIDByBank", data->BrokerIDByBank//, (Py_ssize_t)sizeof(data->BrokerIDByBank)
        , "TID", data->TID
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "BankReserveOpenSeq", data->BankReserveOpenSeq//, (Py_ssize_t)sizeof(data->BankReserveOpenSeq)
        , "BookDate", data->BookDate//, (Py_ssize_t)sizeof(data->BookDate)
        , "BookPsw", data->BookPsw//, (Py_ssize_t)sizeof(data->BookPsw)
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReserveOpenAccountConfirmField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReserveOpenAccountConfirmField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 性别
/// typedef char TThostFtdcGenderType
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Gender(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Gender), 1);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Gender(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Gender Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::Gender)) {
        PyErr_SetString(PyExc_ValueError, "Gender must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    data->Gender = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 国家代码
/// typedef char TThostFtdcCountryCodeType[21]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_CountryCode(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CountryCode, (Py_ssize_t)sizeof(data->CountryCode));
    return PyBytes_FromString(data->CountryCode);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_CountryCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CountryCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::CountryCode)) {
        PyErr_SetString(PyExc_ValueError, "CountryCode must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->CountryCode, 0, sizeof(data->CountryCode));
    // memcpy(data->CountryCode, buf, len);
    strncpy(data->CountryCode, buf, sizeof(data->CountryCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 邮编
/// typedef char TThostFtdcZipCodeType[7]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_ZipCode(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ZipCode, (Py_ssize_t)sizeof(data->ZipCode));
    return PyBytes_FromString(data->ZipCode);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_ZipCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->ZipCode, 0, sizeof(data->ZipCode));
    // memcpy(data->ZipCode, buf, len);
    strncpy(data->ZipCode, buf, sizeof(data->ZipCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电话号码
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机
/// typedef char TThostFtdcMobilePhoneType[21]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_MobilePhone(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MobilePhone, (Py_ssize_t)sizeof(data->MobilePhone));
    return PyBytes_FromString(data->MobilePhone);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_MobilePhone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MobilePhone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::MobilePhone)) {
        PyErr_SetString(PyExc_ValueError, "MobilePhone must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
    // memcpy(data->MobilePhone, buf, len);
    strncpy(data->MobilePhone, buf, sizeof(data->MobilePhone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 传真
/// typedef char TThostFtdcFaxType[41]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Fax(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Fax, (Py_ssize_t)sizeof(data->Fax));
    return PyBytes_FromString(data->Fax);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Fax(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Fax Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::Fax)) {
        PyErr_SetString(PyExc_ValueError, "Fax must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->Fax, 0, sizeof(data->Fax));
    // memcpy(data->Fax, buf, len);
    strncpy(data->Fax, buf, sizeof(data->Fax));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电子邮件
/// typedef char TThostFtdcEMailType[41]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_EMail(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EMail, (Py_ssize_t)sizeof(data->EMail));
    return PyBytes_FromString(data->EMail);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_EMail(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EMail Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::EMail)) {
        PyErr_SetString(PyExc_ValueError, "EMail must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->EMail, 0, sizeof(data->EMail));
    // memcpy(data->EMail, buf, len);
    strncpy(data->EMail, buf, sizeof(data->EMail));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户状态
/// typedef char TThostFtdcMoneyAccountStatusType
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_MoneyAccountStatus(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MoneyAccountStatus), 1);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_MoneyAccountStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MoneyAccountStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::MoneyAccountStatus)) {
        PyErr_SetString(PyExc_ValueError, "MoneyAccountStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    data->MoneyAccountStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预约开户银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankReserveOpenSeq(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankReserveOpenSeq, (Py_ssize_t)sizeof(data->BankReserveOpenSeq));
    return PyBytes_FromString(data->BankReserveOpenSeq);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankReserveOpenSeq(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankReserveOpenSeq Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BankReserveOpenSeq)) {
        PyErr_SetString(PyExc_ValueError, "BankReserveOpenSeq must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BankReserveOpenSeq, 0, sizeof(data->BankReserveOpenSeq));
    // memcpy(data->BankReserveOpenSeq, buf, len);
    strncpy(data->BankReserveOpenSeq, buf, sizeof(data->BankReserveOpenSeq));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预约开户日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BookDate(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BookDate, (Py_ssize_t)sizeof(data->BookDate));
    return PyBytes_FromString(data->BookDate);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BookDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BookDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BookDate)) {
        PyErr_SetString(PyExc_ValueError, "BookDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BookDate, 0, sizeof(data->BookDate));
    // memcpy(data->BookDate, buf, len);
    strncpy(data->BookDate, buf, sizeof(data->BookDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预约开户验证密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BookPsw(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BookPsw, (Py_ssize_t)sizeof(data->BookPsw));
    return PyBytes_FromString(data->BookPsw);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BookPsw(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BookPsw Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::BookPsw)) {
        PyErr_SetString(PyExc_ValueError, "BookPsw must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->BookPsw, 0, sizeof(data->BookPsw));
    // memcpy(data->BookPsw, buf, len);
    strncpy(data->BookPsw, buf, sizeof(data->BookPsw));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcReserveOpenAccountConfirmFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcReserveOpenAccountConfirmFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountConfirmField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountConfirmFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountConfirmFieldData>(self);
    CThostFtdcReserveOpenAccountConfirmField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReserveOpenAccountConfirmFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReserveOpenAccountConfirmFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReserveOpenAccountConfirmFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReserveOpenAccountConfirmFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcReserveOpenAccountConfirmFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcReserveOpenAccountConfirmFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReserveOpenAccountConfirmFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_TradeCode,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankID,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankBranchID,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BrokerID,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_TradeDate,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_TradeTime,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankSerial,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_TradingDay,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_LastFragment,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_CustomerName,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_IdCardType,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 性别
    /// typedef char TThostFtdcGenderType
    {
    .name = "Gender",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Gender,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Gender,
    .doc = PyDoc_STR("性别"),
    },
    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    {
    .name = "CountryCode",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_CountryCode,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_CountryCode,
    .doc = PyDoc_STR("国家代码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_CustType,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Address,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Address,
    .doc = PyDoc_STR("地址"),
    },
    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    {
    .name = "ZipCode",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_ZipCode,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_ZipCode,
    .doc = PyDoc_STR("邮编"),
    },
    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Telephone,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Telephone,
    .doc = PyDoc_STR("电话号码"),
    },
    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    {
    .name = "MobilePhone",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_MobilePhone,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_MobilePhone,
    .doc = PyDoc_STR("手机"),
    },
    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    {
    .name = "Fax",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Fax,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Fax,
    .doc = PyDoc_STR("传真"),
    },
    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    {
    .name = "EMail",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_EMail,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_EMail,
    .doc = PyDoc_STR("电子邮件"),
    },
    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    {
    .name = "MoneyAccountStatus",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_MoneyAccountStatus,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_MoneyAccountStatus,
    .doc = PyDoc_STR("资金账户状态"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankAccount,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankPassWord,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_CurrencyID,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Digest,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankAccType,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_AccountID,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_Password,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 预约开户银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankReserveOpenSeq",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BankReserveOpenSeq,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BankReserveOpenSeq,
    .doc = PyDoc_STR("预约开户银行流水号"),
    },
    /// 预约开户日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "BookDate",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BookDate,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BookDate,
    .doc = PyDoc_STR("预约开户日期"),
    },
    /// 预约开户验证密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BookPsw",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_BookPsw,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_BookPsw,
    .doc = PyDoc_STR("预约开户验证密码"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcReserveOpenAccountConfirmFieldType_get_ErrorMsg,
    .set = PyCThostFtdcReserveOpenAccountConfirmFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReserveOpenAccountConfirmFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReserveOpenAccountConfirmField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银期预约开户确认请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReserveOpenAccountConfirmFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReserveOpenAccountConfirmFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReserveOpenAccountConfirmFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReserveOpenAccountConfirmFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReserveOpenAccountConfirmFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReserveOpenAccountConfirmFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银期预约开户确认请求")},
    {Py_tp_members, PyCThostFtdcReserveOpenAccountConfirmFieldType_members},
    {Py_tp_getset, PyCThostFtdcReserveOpenAccountConfirmFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReserveOpenAccountConfirmFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReserveOpenAccountConfirmFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReserveOpenAccountConfirmFieldType_spec = {
    .name = "PyCTP.CThostFtdcReserveOpenAccountConfirmField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReserveOpenAccountConfirmFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReserveOpenAccountConfirmFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReserveOpenAccountConfirmFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReserveOpenAccountConfirmFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReserveOpenAccountConfirmFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReserveOpenAccountConfirmFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReserveOpenAccountConfirmFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReserveOpenAccountConfirmFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReserveOpenAccountConfirmField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReserveOpenAccountConfirmField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}