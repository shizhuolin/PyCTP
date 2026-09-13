
#include "PyCThostFtdcRspQueryBankAccountBySecField.h"

///次席查询银行资金帐户信息回报

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "LongCustomerName", "DRIdentityID", "SecFutureSerial", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcRspQueryBankAccountBySecField_TradeCode = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcRspQueryBankAccountBySecField_BankID = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcRspQueryBankAccountBySecField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspQueryBankAccountBySecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspQueryBankAccountBySecField_TradeDate = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcRspQueryBankAccountBySecField_TradeTime = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspQueryBankAccountBySecField_BankSerial = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspQueryBankAccountBySecField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspQueryBankAccountBySecField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcRspQueryBankAccountBySecField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspQueryBankAccountBySecField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcRspQueryBankAccountBySecField_CustomerName = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcRspQueryBankAccountBySecField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcRspQueryBankAccountBySecField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspQueryBankAccountBySecField_BankAccount = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspQueryBankAccountBySecField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcRspQueryBankAccountBySecField_AccountID = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspQueryBankAccountBySecField_Password = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_Password_length = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcRspQueryBankAccountBySecField_FutureSerial = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcRspQueryBankAccountBySecField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspQueryBankAccountBySecField_UserID = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcRspQueryBankAccountBySecField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcRspQueryBankAccountBySecField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_CurrencyID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcRspQueryBankAccountBySecField_Digest = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcRspQueryBankAccountBySecField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcRspQueryBankAccountBySecField_DeviceID = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcRspQueryBankAccountBySecField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcRspQueryBankAccountBySecField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcRspQueryBankAccountBySecField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcRspQueryBankAccountBySecField_OperNo = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcRspQueryBankAccountBySecField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcRspQueryBankAccountBySecField_TID = 0;

    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspQueryBankAccountBySecField_BankUseAmount = 0.0;

    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspQueryBankAccountBySecField_BankFetchAmount = 0.0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcRspQueryBankAccountBySecField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcRspQueryBankAccountBySecField_LongCustomerName_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcRspQueryBankAccountBySecField_DRIdentityID = 0;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcRspQueryBankAccountBySecField_SecFutureSerial = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddy#ii", (char **)kwlist
        , &CThostFtdcRspQueryBankAccountBySecField_TradeCode, &CThostFtdcRspQueryBankAccountBySecField_TradeCode_length
        , &CThostFtdcRspQueryBankAccountBySecField_BankID, &CThostFtdcRspQueryBankAccountBySecField_BankID_length
        , &CThostFtdcRspQueryBankAccountBySecField_BankBranchID, &CThostFtdcRspQueryBankAccountBySecField_BankBranchID_length
        , &CThostFtdcRspQueryBankAccountBySecField_BrokerID, &CThostFtdcRspQueryBankAccountBySecField_BrokerID_length
        , &CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID, &CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID_length
        , &CThostFtdcRspQueryBankAccountBySecField_TradeDate, &CThostFtdcRspQueryBankAccountBySecField_TradeDate_length
        , &CThostFtdcRspQueryBankAccountBySecField_TradeTime, &CThostFtdcRspQueryBankAccountBySecField_TradeTime_length
        , &CThostFtdcRspQueryBankAccountBySecField_BankSerial, &CThostFtdcRspQueryBankAccountBySecField_BankSerial_length
        , &CThostFtdcRspQueryBankAccountBySecField_TradingDay, &CThostFtdcRspQueryBankAccountBySecField_TradingDay_length
        , &CThostFtdcRspQueryBankAccountBySecField_PlateSerial
        , &CThostFtdcRspQueryBankAccountBySecField_LastFragment
        , &CThostFtdcRspQueryBankAccountBySecField_SessionID
        , &CThostFtdcRspQueryBankAccountBySecField_CustomerName, &CThostFtdcRspQueryBankAccountBySecField_CustomerName_length
        , &CThostFtdcRspQueryBankAccountBySecField_IdCardType
        , &CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo, &CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo_length
        , &CThostFtdcRspQueryBankAccountBySecField_CustType
        , &CThostFtdcRspQueryBankAccountBySecField_BankAccount, &CThostFtdcRspQueryBankAccountBySecField_BankAccount_length
        , &CThostFtdcRspQueryBankAccountBySecField_BankPassWord, &CThostFtdcRspQueryBankAccountBySecField_BankPassWord_length
        , &CThostFtdcRspQueryBankAccountBySecField_AccountID, &CThostFtdcRspQueryBankAccountBySecField_AccountID_length
        , &CThostFtdcRspQueryBankAccountBySecField_Password, &CThostFtdcRspQueryBankAccountBySecField_Password_length
        , &CThostFtdcRspQueryBankAccountBySecField_FutureSerial
        , &CThostFtdcRspQueryBankAccountBySecField_InstallID
        , &CThostFtdcRspQueryBankAccountBySecField_UserID, &CThostFtdcRspQueryBankAccountBySecField_UserID_length
        , &CThostFtdcRspQueryBankAccountBySecField_VerifyCertNoFlag
        , &CThostFtdcRspQueryBankAccountBySecField_CurrencyID, &CThostFtdcRspQueryBankAccountBySecField_CurrencyID_length
        , &CThostFtdcRspQueryBankAccountBySecField_Digest, &CThostFtdcRspQueryBankAccountBySecField_Digest_length
        , &CThostFtdcRspQueryBankAccountBySecField_BankAccType
        , &CThostFtdcRspQueryBankAccountBySecField_DeviceID, &CThostFtdcRspQueryBankAccountBySecField_DeviceID_length
        , &CThostFtdcRspQueryBankAccountBySecField_BankSecuAccType
        , &CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank, &CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank_length
        , &CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc, &CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc_length
        , &CThostFtdcRspQueryBankAccountBySecField_BankPwdFlag
        , &CThostFtdcRspQueryBankAccountBySecField_SecuPwdFlag
        , &CThostFtdcRspQueryBankAccountBySecField_OperNo, &CThostFtdcRspQueryBankAccountBySecField_OperNo_length
        , &CThostFtdcRspQueryBankAccountBySecField_RequestID
        , &CThostFtdcRspQueryBankAccountBySecField_TID
        , &CThostFtdcRspQueryBankAccountBySecField_BankUseAmount
        , &CThostFtdcRspQueryBankAccountBySecField_BankFetchAmount
        , &CThostFtdcRspQueryBankAccountBySecField_LongCustomerName, &CThostFtdcRspQueryBankAccountBySecField_LongCustomerName_length
        , &CThostFtdcRspQueryBankAccountBySecField_DRIdentityID
        , &CThostFtdcRspQueryBankAccountBySecField_SecFutureSerial
    )) {
        return -1;
    }

    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcRspQueryBankAccountBySecField_TradeCode != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcRspQueryBankAccountBySecField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcRspQueryBankAccountBySecField_TradeCode, CThostFtdcRspQueryBankAccountBySecField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcRspQueryBankAccountBySecField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcRspQueryBankAccountBySecField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcRspQueryBankAccountBySecField_BankID != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcRspQueryBankAccountBySecField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcRspQueryBankAccountBySecField_BankID, CThostFtdcRspQueryBankAccountBySecField_BankID_length);
        strncpy(data->BankID, CThostFtdcRspQueryBankAccountBySecField_BankID, sizeof(data->BankID));
        CThostFtdcRspQueryBankAccountBySecField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcRspQueryBankAccountBySecField_BankBranchID != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcRspQueryBankAccountBySecField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcRspQueryBankAccountBySecField_BankBranchID, CThostFtdcRspQueryBankAccountBySecField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcRspQueryBankAccountBySecField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcRspQueryBankAccountBySecField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspQueryBankAccountBySecField_BrokerID != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspQueryBankAccountBySecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspQueryBankAccountBySecField_BrokerID, CThostFtdcRspQueryBankAccountBySecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspQueryBankAccountBySecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspQueryBankAccountBySecField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID, CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcRspQueryBankAccountBySecField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspQueryBankAccountBySecField_TradeDate != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryBankAccountBySecField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcRspQueryBankAccountBySecField_TradeDate, CThostFtdcRspQueryBankAccountBySecField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcRspQueryBankAccountBySecField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcRspQueryBankAccountBySecField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcRspQueryBankAccountBySecField_TradeTime != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryBankAccountBySecField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcRspQueryBankAccountBySecField_TradeTime, CThostFtdcRspQueryBankAccountBySecField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcRspQueryBankAccountBySecField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcRspQueryBankAccountBySecField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspQueryBankAccountBySecField_BankSerial != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspQueryBankAccountBySecField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcRspQueryBankAccountBySecField_BankSerial, CThostFtdcRspQueryBankAccountBySecField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcRspQueryBankAccountBySecField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcRspQueryBankAccountBySecField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspQueryBankAccountBySecField_TradingDay != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryBankAccountBySecField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspQueryBankAccountBySecField_TradingDay, CThostFtdcRspQueryBankAccountBySecField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspQueryBankAccountBySecField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspQueryBankAccountBySecField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcRspQueryBankAccountBySecField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcRspQueryBankAccountBySecField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspQueryBankAccountBySecField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcRspQueryBankAccountBySecField_CustomerName != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcRspQueryBankAccountBySecField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcRspQueryBankAccountBySecField_CustomerName, CThostFtdcRspQueryBankAccountBySecField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcRspQueryBankAccountBySecField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcRspQueryBankAccountBySecField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcRspQueryBankAccountBySecField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo, CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcRspQueryBankAccountBySecField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcRspQueryBankAccountBySecField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspQueryBankAccountBySecField_BankAccount != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryBankAccountBySecField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcRspQueryBankAccountBySecField_BankAccount, CThostFtdcRspQueryBankAccountBySecField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcRspQueryBankAccountBySecField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcRspQueryBankAccountBySecField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspQueryBankAccountBySecField_BankPassWord != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryBankAccountBySecField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcRspQueryBankAccountBySecField_BankPassWord, CThostFtdcRspQueryBankAccountBySecField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcRspQueryBankAccountBySecField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcRspQueryBankAccountBySecField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcRspQueryBankAccountBySecField_AccountID != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcRspQueryBankAccountBySecField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcRspQueryBankAccountBySecField_AccountID, CThostFtdcRspQueryBankAccountBySecField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcRspQueryBankAccountBySecField_AccountID, sizeof(data->AccountID));
        CThostFtdcRspQueryBankAccountBySecField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspQueryBankAccountBySecField_Password != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryBankAccountBySecField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcRspQueryBankAccountBySecField_Password, CThostFtdcRspQueryBankAccountBySecField_Password_length);
        strncpy(data->Password, CThostFtdcRspQueryBankAccountBySecField_Password, sizeof(data->Password));
        CThostFtdcRspQueryBankAccountBySecField_Password = NULL;
    }

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcRspQueryBankAccountBySecField_FutureSerial;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcRspQueryBankAccountBySecField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspQueryBankAccountBySecField_UserID != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspQueryBankAccountBySecField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspQueryBankAccountBySecField_UserID, CThostFtdcRspQueryBankAccountBySecField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspQueryBankAccountBySecField_UserID, sizeof(data->UserID));
        CThostFtdcRspQueryBankAccountBySecField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcRspQueryBankAccountBySecField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcRspQueryBankAccountBySecField_CurrencyID != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcRspQueryBankAccountBySecField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcRspQueryBankAccountBySecField_CurrencyID, CThostFtdcRspQueryBankAccountBySecField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcRspQueryBankAccountBySecField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcRspQueryBankAccountBySecField_CurrencyID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcRspQueryBankAccountBySecField_Digest != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcRspQueryBankAccountBySecField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcRspQueryBankAccountBySecField_Digest, CThostFtdcRspQueryBankAccountBySecField_Digest_length);
        strncpy(data->Digest, CThostFtdcRspQueryBankAccountBySecField_Digest, sizeof(data->Digest));
        CThostFtdcRspQueryBankAccountBySecField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcRspQueryBankAccountBySecField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcRspQueryBankAccountBySecField_DeviceID != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcRspQueryBankAccountBySecField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcRspQueryBankAccountBySecField_DeviceID, CThostFtdcRspQueryBankAccountBySecField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcRspQueryBankAccountBySecField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcRspQueryBankAccountBySecField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcRspQueryBankAccountBySecField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank, CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcRspQueryBankAccountBySecField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc, CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcRspQueryBankAccountBySecField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcRspQueryBankAccountBySecField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcRspQueryBankAccountBySecField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcRspQueryBankAccountBySecField_OperNo != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcRspQueryBankAccountBySecField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcRspQueryBankAccountBySecField_OperNo, CThostFtdcRspQueryBankAccountBySecField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcRspQueryBankAccountBySecField_OperNo, sizeof(data->OperNo));
        CThostFtdcRspQueryBankAccountBySecField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcRspQueryBankAccountBySecField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcRspQueryBankAccountBySecField_TID;

    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    data->BankUseAmount = CThostFtdcRspQueryBankAccountBySecField_BankUseAmount;

    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->BankFetchAmount = CThostFtdcRspQueryBankAccountBySecField_BankFetchAmount;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcRspQueryBankAccountBySecField_LongCustomerName != NULL ) {
        if(CThostFtdcRspQueryBankAccountBySecField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcRspQueryBankAccountBySecField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcRspQueryBankAccountBySecField_LongCustomerName, CThostFtdcRspQueryBankAccountBySecField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcRspQueryBankAccountBySecField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcRspQueryBankAccountBySecField_LongCustomerName = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcRspQueryBankAccountBySecField_DRIdentityID;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->SecFutureSerial = CThostFtdcRspQueryBankAccountBySecField_SecFutureSerial;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_repr(PyObject *self) {

    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:y,s:i,s:i}"
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
        , "DRIdentityID", data->DRIdentityID
        , "SecFutureSerial", data->SecFutureSerial
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryBankAccountBySecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryBankAccountBySecField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcRspQueryBankAccountBySecFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcRspQueryBankAccountBySecFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryBankAccountBySecField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryBankAccountBySecFieldData>(self);
    CThostFtdcRspQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspQueryBankAccountBySecFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.BankUseAmount),
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.BankFetchAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银行可取金额")
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.DRIdentityID),
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
        .offset = offsetof(PyCThostFtdcRspQueryBankAccountBySecFieldData, data.SecFutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次中心发起转账期货公司流水号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspQueryBankAccountBySecFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_TradeCode,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankID,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankBranchID,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BrokerID,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_TradeDate,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_TradeTime,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankSerial,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_TradingDay,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_LastFragment,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_CustomerName,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_IdCardType,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_CustType,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankAccount,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankPassWord,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_AccountID,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_Password,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_UserID,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_CurrencyID,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_Digest,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankAccType,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_DeviceID,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_OperNo,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcRspQueryBankAccountBySecFieldType_get_LongCustomerName,
    .set = PyCThostFtdcRspQueryBankAccountBySecFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspQueryBankAccountBySecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspQueryBankAccountBySecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("次席查询银行资金帐户信息回报")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspQueryBankAccountBySecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspQueryBankAccountBySecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspQueryBankAccountBySecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspQueryBankAccountBySecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspQueryBankAccountBySecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspQueryBankAccountBySecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("次席查询银行资金帐户信息回报")},
    {Py_tp_members, PyCThostFtdcRspQueryBankAccountBySecFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspQueryBankAccountBySecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspQueryBankAccountBySecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspQueryBankAccountBySecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspQueryBankAccountBySecFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspQueryBankAccountBySecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspQueryBankAccountBySecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspQueryBankAccountBySecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspQueryBankAccountBySecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspQueryBankAccountBySecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspQueryBankAccountBySecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspQueryBankAccountBySecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspQueryBankAccountBySecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspQueryBankAccountBySecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspQueryBankAccountBySecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspQueryBankAccountBySecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}