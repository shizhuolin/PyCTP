
#include "PyCThostFtdcReserveOpenAccountField.h"

///银期预约开户

static int PyCThostFtdcReserveOpenAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "InstallID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "BrokerIDByBank", "TID", "ReserveOpenAccStas", "ErrorID", "ErrorMsg", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReserveOpenAccountField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReserveOpenAccountField_BankID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReserveOpenAccountField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReserveOpenAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReserveOpenAccountField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReserveOpenAccountField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReserveOpenAccountField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReserveOpenAccountField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReserveOpenAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReserveOpenAccountField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReserveOpenAccountField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReserveOpenAccountField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReserveOpenAccountField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReserveOpenAccountField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReserveOpenAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_IdentifiedCardNo_length = 0;

    /// 性别
    /// typedef char TThostFtdcGenderType
    char CThostFtdcReserveOpenAccountField_Gender = 0;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    char *CThostFtdcReserveOpenAccountField_CountryCode = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_CountryCode_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReserveOpenAccountField_CustType = 0;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcReserveOpenAccountField_Address = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_Address_length = 0;

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    char *CThostFtdcReserveOpenAccountField_ZipCode = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_ZipCode_length = 0;

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcReserveOpenAccountField_Telephone = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_Telephone_length = 0;

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    char *CThostFtdcReserveOpenAccountField_MobilePhone = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_MobilePhone_length = 0;

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    char *CThostFtdcReserveOpenAccountField_Fax = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_Fax_length = 0;

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    char *CThostFtdcReserveOpenAccountField_EMail = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_EMail_length = 0;

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    char CThostFtdcReserveOpenAccountField_MoneyAccountStatus = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReserveOpenAccountField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReserveOpenAccountField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_BankPassWord_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReserveOpenAccountField_InstallID = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcReserveOpenAccountField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReserveOpenAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_CurrencyID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReserveOpenAccountField_Digest = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReserveOpenAccountField_BankAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReserveOpenAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_BrokerIDByBank_length = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReserveOpenAccountField_TID = 0;

    /// 预约开户状态
    /// typedef char TThostFtdcReserveOpenAccStasType
    char CThostFtdcReserveOpenAccountField_ReserveOpenAccStas = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcReserveOpenAccountField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcReserveOpenAccountField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcReserveOpenAccountField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#icy#y#cy#iciy#", (char **)kwlist
        , &CThostFtdcReserveOpenAccountField_TradeCode, &CThostFtdcReserveOpenAccountField_TradeCode_length
        , &CThostFtdcReserveOpenAccountField_BankID, &CThostFtdcReserveOpenAccountField_BankID_length
        , &CThostFtdcReserveOpenAccountField_BankBranchID, &CThostFtdcReserveOpenAccountField_BankBranchID_length
        , &CThostFtdcReserveOpenAccountField_BrokerID, &CThostFtdcReserveOpenAccountField_BrokerID_length
        , &CThostFtdcReserveOpenAccountField_BrokerBranchID, &CThostFtdcReserveOpenAccountField_BrokerBranchID_length
        , &CThostFtdcReserveOpenAccountField_TradeDate, &CThostFtdcReserveOpenAccountField_TradeDate_length
        , &CThostFtdcReserveOpenAccountField_TradeTime, &CThostFtdcReserveOpenAccountField_TradeTime_length
        , &CThostFtdcReserveOpenAccountField_BankSerial, &CThostFtdcReserveOpenAccountField_BankSerial_length
        , &CThostFtdcReserveOpenAccountField_TradingDay, &CThostFtdcReserveOpenAccountField_TradingDay_length
        , &CThostFtdcReserveOpenAccountField_PlateSerial
        , &CThostFtdcReserveOpenAccountField_LastFragment
        , &CThostFtdcReserveOpenAccountField_SessionID
        , &CThostFtdcReserveOpenAccountField_CustomerName, &CThostFtdcReserveOpenAccountField_CustomerName_length
        , &CThostFtdcReserveOpenAccountField_IdCardType
        , &CThostFtdcReserveOpenAccountField_IdentifiedCardNo, &CThostFtdcReserveOpenAccountField_IdentifiedCardNo_length
        , &CThostFtdcReserveOpenAccountField_Gender
        , &CThostFtdcReserveOpenAccountField_CountryCode, &CThostFtdcReserveOpenAccountField_CountryCode_length
        , &CThostFtdcReserveOpenAccountField_CustType
        , &CThostFtdcReserveOpenAccountField_Address, &CThostFtdcReserveOpenAccountField_Address_length
        , &CThostFtdcReserveOpenAccountField_ZipCode, &CThostFtdcReserveOpenAccountField_ZipCode_length
        , &CThostFtdcReserveOpenAccountField_Telephone, &CThostFtdcReserveOpenAccountField_Telephone_length
        , &CThostFtdcReserveOpenAccountField_MobilePhone, &CThostFtdcReserveOpenAccountField_MobilePhone_length
        , &CThostFtdcReserveOpenAccountField_Fax, &CThostFtdcReserveOpenAccountField_Fax_length
        , &CThostFtdcReserveOpenAccountField_EMail, &CThostFtdcReserveOpenAccountField_EMail_length
        , &CThostFtdcReserveOpenAccountField_MoneyAccountStatus
        , &CThostFtdcReserveOpenAccountField_BankAccount, &CThostFtdcReserveOpenAccountField_BankAccount_length
        , &CThostFtdcReserveOpenAccountField_BankPassWord, &CThostFtdcReserveOpenAccountField_BankPassWord_length
        , &CThostFtdcReserveOpenAccountField_InstallID
        , &CThostFtdcReserveOpenAccountField_VerifyCertNoFlag
        , &CThostFtdcReserveOpenAccountField_CurrencyID, &CThostFtdcReserveOpenAccountField_CurrencyID_length
        , &CThostFtdcReserveOpenAccountField_Digest, &CThostFtdcReserveOpenAccountField_Digest_length
        , &CThostFtdcReserveOpenAccountField_BankAccType
        , &CThostFtdcReserveOpenAccountField_BrokerIDByBank, &CThostFtdcReserveOpenAccountField_BrokerIDByBank_length
        , &CThostFtdcReserveOpenAccountField_TID
        , &CThostFtdcReserveOpenAccountField_ReserveOpenAccStas
        , &CThostFtdcReserveOpenAccountField_ErrorID
        , &CThostFtdcReserveOpenAccountField_ErrorMsg, &CThostFtdcReserveOpenAccountField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReserveOpenAccountField_TradeCode != NULL ) {
        if(CThostFtdcReserveOpenAccountField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReserveOpenAccountField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReserveOpenAccountField_TradeCode, CThostFtdcReserveOpenAccountField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReserveOpenAccountField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReserveOpenAccountField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReserveOpenAccountField_BankID != NULL ) {
        if(CThostFtdcReserveOpenAccountField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReserveOpenAccountField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReserveOpenAccountField_BankID, CThostFtdcReserveOpenAccountField_BankID_length);
        strncpy(data->BankID, CThostFtdcReserveOpenAccountField_BankID, sizeof(data->BankID));
        CThostFtdcReserveOpenAccountField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReserveOpenAccountField_BankBranchID != NULL ) {
        if(CThostFtdcReserveOpenAccountField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReserveOpenAccountField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReserveOpenAccountField_BankBranchID, CThostFtdcReserveOpenAccountField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReserveOpenAccountField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReserveOpenAccountField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReserveOpenAccountField_BrokerID != NULL ) {
        if(CThostFtdcReserveOpenAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReserveOpenAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReserveOpenAccountField_BrokerID, CThostFtdcReserveOpenAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReserveOpenAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReserveOpenAccountField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReserveOpenAccountField_BrokerBranchID != NULL ) {
        if(CThostFtdcReserveOpenAccountField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReserveOpenAccountField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReserveOpenAccountField_BrokerBranchID, CThostFtdcReserveOpenAccountField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReserveOpenAccountField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReserveOpenAccountField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReserveOpenAccountField_TradeDate != NULL ) {
        if(CThostFtdcReserveOpenAccountField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReserveOpenAccountField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReserveOpenAccountField_TradeDate, CThostFtdcReserveOpenAccountField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReserveOpenAccountField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReserveOpenAccountField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReserveOpenAccountField_TradeTime != NULL ) {
        if(CThostFtdcReserveOpenAccountField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReserveOpenAccountField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReserveOpenAccountField_TradeTime, CThostFtdcReserveOpenAccountField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReserveOpenAccountField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReserveOpenAccountField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReserveOpenAccountField_BankSerial != NULL ) {
        if(CThostFtdcReserveOpenAccountField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReserveOpenAccountField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReserveOpenAccountField_BankSerial, CThostFtdcReserveOpenAccountField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReserveOpenAccountField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReserveOpenAccountField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReserveOpenAccountField_TradingDay != NULL ) {
        if(CThostFtdcReserveOpenAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReserveOpenAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReserveOpenAccountField_TradingDay, CThostFtdcReserveOpenAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReserveOpenAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReserveOpenAccountField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReserveOpenAccountField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReserveOpenAccountField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReserveOpenAccountField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReserveOpenAccountField_CustomerName != NULL ) {
        if(CThostFtdcReserveOpenAccountField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReserveOpenAccountField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReserveOpenAccountField_CustomerName, CThostFtdcReserveOpenAccountField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReserveOpenAccountField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReserveOpenAccountField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReserveOpenAccountField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReserveOpenAccountField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReserveOpenAccountField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReserveOpenAccountField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReserveOpenAccountField_IdentifiedCardNo, CThostFtdcReserveOpenAccountField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReserveOpenAccountField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReserveOpenAccountField_IdentifiedCardNo = NULL;
    }

    /// 性别
    /// typedef char TThostFtdcGenderType
    data->Gender = CThostFtdcReserveOpenAccountField_Gender;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    if( CThostFtdcReserveOpenAccountField_CountryCode != NULL ) {
        if(CThostFtdcReserveOpenAccountField_CountryCode_length >= (Py_ssize_t)sizeof(data->CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is 20)", CThostFtdcReserveOpenAccountField_CountryCode_length);
            return -1;
        }
        // memset(data->CountryCode, 0, sizeof(data->CountryCode));
        // memcpy(data->CountryCode, CThostFtdcReserveOpenAccountField_CountryCode, CThostFtdcReserveOpenAccountField_CountryCode_length);
        strncpy(data->CountryCode, CThostFtdcReserveOpenAccountField_CountryCode, sizeof(data->CountryCode));
        CThostFtdcReserveOpenAccountField_CountryCode = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReserveOpenAccountField_CustType;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcReserveOpenAccountField_Address != NULL ) {
        if(CThostFtdcReserveOpenAccountField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcReserveOpenAccountField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcReserveOpenAccountField_Address, CThostFtdcReserveOpenAccountField_Address_length);
        strncpy(data->Address, CThostFtdcReserveOpenAccountField_Address, sizeof(data->Address));
        CThostFtdcReserveOpenAccountField_Address = NULL;
    }

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    if( CThostFtdcReserveOpenAccountField_ZipCode != NULL ) {
        if(CThostFtdcReserveOpenAccountField_ZipCode_length >= (Py_ssize_t)sizeof(data->ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is 6)", CThostFtdcReserveOpenAccountField_ZipCode_length);
            return -1;
        }
        // memset(data->ZipCode, 0, sizeof(data->ZipCode));
        // memcpy(data->ZipCode, CThostFtdcReserveOpenAccountField_ZipCode, CThostFtdcReserveOpenAccountField_ZipCode_length);
        strncpy(data->ZipCode, CThostFtdcReserveOpenAccountField_ZipCode, sizeof(data->ZipCode));
        CThostFtdcReserveOpenAccountField_ZipCode = NULL;
    }

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcReserveOpenAccountField_Telephone != NULL ) {
        if(CThostFtdcReserveOpenAccountField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcReserveOpenAccountField_Telephone, CThostFtdcReserveOpenAccountField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcReserveOpenAccountField_Telephone, sizeof(data->Telephone));
        CThostFtdcReserveOpenAccountField_Telephone = NULL;
    }

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    if( CThostFtdcReserveOpenAccountField_MobilePhone != NULL ) {
        if(CThostFtdcReserveOpenAccountField_MobilePhone_length >= (Py_ssize_t)sizeof(data->MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is 20)", CThostFtdcReserveOpenAccountField_MobilePhone_length);
            return -1;
        }
        // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
        // memcpy(data->MobilePhone, CThostFtdcReserveOpenAccountField_MobilePhone, CThostFtdcReserveOpenAccountField_MobilePhone_length);
        strncpy(data->MobilePhone, CThostFtdcReserveOpenAccountField_MobilePhone, sizeof(data->MobilePhone));
        CThostFtdcReserveOpenAccountField_MobilePhone = NULL;
    }

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    if( CThostFtdcReserveOpenAccountField_Fax != NULL ) {
        if(CThostFtdcReserveOpenAccountField_Fax_length >= (Py_ssize_t)sizeof(data->Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountField_Fax_length);
            return -1;
        }
        // memset(data->Fax, 0, sizeof(data->Fax));
        // memcpy(data->Fax, CThostFtdcReserveOpenAccountField_Fax, CThostFtdcReserveOpenAccountField_Fax_length);
        strncpy(data->Fax, CThostFtdcReserveOpenAccountField_Fax, sizeof(data->Fax));
        CThostFtdcReserveOpenAccountField_Fax = NULL;
    }

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    if( CThostFtdcReserveOpenAccountField_EMail != NULL ) {
        if(CThostFtdcReserveOpenAccountField_EMail_length >= (Py_ssize_t)sizeof(data->EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountField_EMail_length);
            return -1;
        }
        // memset(data->EMail, 0, sizeof(data->EMail));
        // memcpy(data->EMail, CThostFtdcReserveOpenAccountField_EMail, CThostFtdcReserveOpenAccountField_EMail_length);
        strncpy(data->EMail, CThostFtdcReserveOpenAccountField_EMail, sizeof(data->EMail));
        CThostFtdcReserveOpenAccountField_EMail = NULL;
    }

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    data->MoneyAccountStatus = CThostFtdcReserveOpenAccountField_MoneyAccountStatus;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReserveOpenAccountField_BankAccount != NULL ) {
        if(CThostFtdcReserveOpenAccountField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReserveOpenAccountField_BankAccount, CThostFtdcReserveOpenAccountField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReserveOpenAccountField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReserveOpenAccountField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReserveOpenAccountField_BankPassWord != NULL ) {
        if(CThostFtdcReserveOpenAccountField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReserveOpenAccountField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReserveOpenAccountField_BankPassWord, CThostFtdcReserveOpenAccountField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReserveOpenAccountField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReserveOpenAccountField_BankPassWord = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReserveOpenAccountField_InstallID;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcReserveOpenAccountField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReserveOpenAccountField_CurrencyID != NULL ) {
        if(CThostFtdcReserveOpenAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReserveOpenAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReserveOpenAccountField_CurrencyID, CThostFtdcReserveOpenAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReserveOpenAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReserveOpenAccountField_CurrencyID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReserveOpenAccountField_Digest != NULL ) {
        if(CThostFtdcReserveOpenAccountField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReserveOpenAccountField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReserveOpenAccountField_Digest, CThostFtdcReserveOpenAccountField_Digest_length);
        strncpy(data->Digest, CThostFtdcReserveOpenAccountField_Digest, sizeof(data->Digest));
        CThostFtdcReserveOpenAccountField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcReserveOpenAccountField_BankAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReserveOpenAccountField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReserveOpenAccountField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReserveOpenAccountField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReserveOpenAccountField_BrokerIDByBank, CThostFtdcReserveOpenAccountField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReserveOpenAccountField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReserveOpenAccountField_BrokerIDByBank = NULL;
    }

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReserveOpenAccountField_TID;

    /// 预约开户状态
    /// typedef char TThostFtdcReserveOpenAccStasType
    data->ReserveOpenAccStas = CThostFtdcReserveOpenAccountField_ReserveOpenAccStas;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcReserveOpenAccountField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcReserveOpenAccountField_ErrorMsg != NULL ) {
        if(CThostFtdcReserveOpenAccountField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcReserveOpenAccountField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcReserveOpenAccountField_ErrorMsg, CThostFtdcReserveOpenAccountField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcReserveOpenAccountField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcReserveOpenAccountField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReserveOpenAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:y,s:y,s:c,s:y,s:i,s:c,s:i,s:y}"
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
        , "ReserveOpenAccStas", data->ReserveOpenAccStas
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReserveOpenAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReserveOpenAccountField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 性别
/// typedef char TThostFtdcGenderType
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_Gender(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Gender), 1);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_Gender(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Gender Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::Gender)) {
        PyErr_SetString(PyExc_ValueError, "Gender must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    data->Gender = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 国家代码
/// typedef char TThostFtdcCountryCodeType[21]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_CountryCode(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CountryCode, (Py_ssize_t)sizeof(data->CountryCode));
    return PyBytes_FromString(data->CountryCode);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_CountryCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CountryCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::CountryCode)) {
        PyErr_SetString(PyExc_ValueError, "CountryCode must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->CountryCode, 0, sizeof(data->CountryCode));
    // memcpy(data->CountryCode, buf, len);
    strncpy(data->CountryCode, buf, sizeof(data->CountryCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 邮编
/// typedef char TThostFtdcZipCodeType[7]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_ZipCode(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ZipCode, (Py_ssize_t)sizeof(data->ZipCode));
    return PyBytes_FromString(data->ZipCode);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_ZipCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->ZipCode, 0, sizeof(data->ZipCode));
    // memcpy(data->ZipCode, buf, len);
    strncpy(data->ZipCode, buf, sizeof(data->ZipCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电话号码
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机
/// typedef char TThostFtdcMobilePhoneType[21]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_MobilePhone(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MobilePhone, (Py_ssize_t)sizeof(data->MobilePhone));
    return PyBytes_FromString(data->MobilePhone);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_MobilePhone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MobilePhone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::MobilePhone)) {
        PyErr_SetString(PyExc_ValueError, "MobilePhone must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
    // memcpy(data->MobilePhone, buf, len);
    strncpy(data->MobilePhone, buf, sizeof(data->MobilePhone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 传真
/// typedef char TThostFtdcFaxType[41]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_Fax(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Fax, (Py_ssize_t)sizeof(data->Fax));
    return PyBytes_FromString(data->Fax);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_Fax(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Fax Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::Fax)) {
        PyErr_SetString(PyExc_ValueError, "Fax must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->Fax, 0, sizeof(data->Fax));
    // memcpy(data->Fax, buf, len);
    strncpy(data->Fax, buf, sizeof(data->Fax));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电子邮件
/// typedef char TThostFtdcEMailType[41]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_EMail(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EMail, (Py_ssize_t)sizeof(data->EMail));
    return PyBytes_FromString(data->EMail);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_EMail(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EMail Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::EMail)) {
        PyErr_SetString(PyExc_ValueError, "EMail must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->EMail, 0, sizeof(data->EMail));
    // memcpy(data->EMail, buf, len);
    strncpy(data->EMail, buf, sizeof(data->EMail));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户状态
/// typedef char TThostFtdcMoneyAccountStatusType
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_MoneyAccountStatus(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MoneyAccountStatus), 1);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_MoneyAccountStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MoneyAccountStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::MoneyAccountStatus)) {
        PyErr_SetString(PyExc_ValueError, "MoneyAccountStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    data->MoneyAccountStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预约开户状态
/// typedef char TThostFtdcReserveOpenAccStasType
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_ReserveOpenAccStas(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ReserveOpenAccStas), 1);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_ReserveOpenAccStas(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReserveOpenAccStas Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::ReserveOpenAccStas)) {
        PyErr_SetString(PyExc_ValueError, "ReserveOpenAccStas must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    data->ReserveOpenAccStas = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcReserveOpenAccountFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcReserveOpenAccountFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReserveOpenAccountField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReserveOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReserveOpenAccountFieldData>(self);
    CThostFtdcReserveOpenAccountField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReserveOpenAccountFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReserveOpenAccountFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReserveOpenAccountFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReserveOpenAccountFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcReserveOpenAccountFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcReserveOpenAccountFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReserveOpenAccountFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_TradeCode,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BankID,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BankBranchID,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_TradeDate,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_TradeTime,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BankSerial,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_LastFragment,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_CustomerName,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_IdCardType,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 性别
    /// typedef char TThostFtdcGenderType
    {
    .name = "Gender",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_Gender,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_Gender,
    .doc = PyDoc_STR("性别"),
    },
    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    {
    .name = "CountryCode",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_CountryCode,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_CountryCode,
    .doc = PyDoc_STR("国家代码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_CustType,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_Address,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_Address,
    .doc = PyDoc_STR("地址"),
    },
    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    {
    .name = "ZipCode",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_ZipCode,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_ZipCode,
    .doc = PyDoc_STR("邮编"),
    },
    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_Telephone,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_Telephone,
    .doc = PyDoc_STR("电话号码"),
    },
    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    {
    .name = "MobilePhone",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_MobilePhone,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_MobilePhone,
    .doc = PyDoc_STR("手机"),
    },
    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    {
    .name = "Fax",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_Fax,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_Fax,
    .doc = PyDoc_STR("传真"),
    },
    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    {
    .name = "EMail",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_EMail,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_EMail,
    .doc = PyDoc_STR("电子邮件"),
    },
    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    {
    .name = "MoneyAccountStatus",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_MoneyAccountStatus,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_MoneyAccountStatus,
    .doc = PyDoc_STR("资金账户状态"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BankAccount,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BankPassWord,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_Digest,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BankAccType,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 预约开户状态
    /// typedef char TThostFtdcReserveOpenAccStasType
    {
    .name = "ReserveOpenAccStas",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_ReserveOpenAccStas,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_ReserveOpenAccStas,
    .doc = PyDoc_STR("预约开户状态"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcReserveOpenAccountFieldType_get_ErrorMsg,
    .set = PyCThostFtdcReserveOpenAccountFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReserveOpenAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReserveOpenAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银期预约开户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReserveOpenAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReserveOpenAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReserveOpenAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReserveOpenAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReserveOpenAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReserveOpenAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银期预约开户")},
    {Py_tp_members, PyCThostFtdcReserveOpenAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcReserveOpenAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReserveOpenAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReserveOpenAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReserveOpenAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcReserveOpenAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReserveOpenAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReserveOpenAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReserveOpenAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReserveOpenAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReserveOpenAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReserveOpenAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReserveOpenAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReserveOpenAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReserveOpenAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReserveOpenAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}