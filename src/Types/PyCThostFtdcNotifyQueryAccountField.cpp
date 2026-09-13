
#include "PyCThostFtdcNotifyQueryAccountField.h"

///查询账户信息通知

static int PyCThostFtdcNotifyQueryAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "ErrorID", "ErrorMsg", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcNotifyQueryAccountField_TradeCode = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcNotifyQueryAccountField_BankID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcNotifyQueryAccountField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcNotifyQueryAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcNotifyQueryAccountField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcNotifyQueryAccountField_TradeDate = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcNotifyQueryAccountField_TradeTime = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcNotifyQueryAccountField_BankSerial = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcNotifyQueryAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcNotifyQueryAccountField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcNotifyQueryAccountField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcNotifyQueryAccountField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcNotifyQueryAccountField_CustomerName = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcNotifyQueryAccountField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcNotifyQueryAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcNotifyQueryAccountField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcNotifyQueryAccountField_BankAccount = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcNotifyQueryAccountField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcNotifyQueryAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcNotifyQueryAccountField_Password = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_Password_length = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcNotifyQueryAccountField_FutureSerial = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcNotifyQueryAccountField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcNotifyQueryAccountField_UserID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcNotifyQueryAccountField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcNotifyQueryAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_CurrencyID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcNotifyQueryAccountField_Digest = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcNotifyQueryAccountField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcNotifyQueryAccountField_DeviceID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcNotifyQueryAccountField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcNotifyQueryAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcNotifyQueryAccountField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcNotifyQueryAccountField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcNotifyQueryAccountField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcNotifyQueryAccountField_OperNo = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcNotifyQueryAccountField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcNotifyQueryAccountField_TID = 0;

    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcNotifyQueryAccountField_BankUseAmount = 0.0;

    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcNotifyQueryAccountField_BankFetchAmount = 0.0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcNotifyQueryAccountField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcNotifyQueryAccountField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_ErrorMsg_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcNotifyQueryAccountField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcNotifyQueryAccountField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddiy#y#", (char **)kwlist
        , &CThostFtdcNotifyQueryAccountField_TradeCode, &CThostFtdcNotifyQueryAccountField_TradeCode_length
        , &CThostFtdcNotifyQueryAccountField_BankID, &CThostFtdcNotifyQueryAccountField_BankID_length
        , &CThostFtdcNotifyQueryAccountField_BankBranchID, &CThostFtdcNotifyQueryAccountField_BankBranchID_length
        , &CThostFtdcNotifyQueryAccountField_BrokerID, &CThostFtdcNotifyQueryAccountField_BrokerID_length
        , &CThostFtdcNotifyQueryAccountField_BrokerBranchID, &CThostFtdcNotifyQueryAccountField_BrokerBranchID_length
        , &CThostFtdcNotifyQueryAccountField_TradeDate, &CThostFtdcNotifyQueryAccountField_TradeDate_length
        , &CThostFtdcNotifyQueryAccountField_TradeTime, &CThostFtdcNotifyQueryAccountField_TradeTime_length
        , &CThostFtdcNotifyQueryAccountField_BankSerial, &CThostFtdcNotifyQueryAccountField_BankSerial_length
        , &CThostFtdcNotifyQueryAccountField_TradingDay, &CThostFtdcNotifyQueryAccountField_TradingDay_length
        , &CThostFtdcNotifyQueryAccountField_PlateSerial
        , &CThostFtdcNotifyQueryAccountField_LastFragment
        , &CThostFtdcNotifyQueryAccountField_SessionID
        , &CThostFtdcNotifyQueryAccountField_CustomerName, &CThostFtdcNotifyQueryAccountField_CustomerName_length
        , &CThostFtdcNotifyQueryAccountField_IdCardType
        , &CThostFtdcNotifyQueryAccountField_IdentifiedCardNo, &CThostFtdcNotifyQueryAccountField_IdentifiedCardNo_length
        , &CThostFtdcNotifyQueryAccountField_CustType
        , &CThostFtdcNotifyQueryAccountField_BankAccount, &CThostFtdcNotifyQueryAccountField_BankAccount_length
        , &CThostFtdcNotifyQueryAccountField_BankPassWord, &CThostFtdcNotifyQueryAccountField_BankPassWord_length
        , &CThostFtdcNotifyQueryAccountField_AccountID, &CThostFtdcNotifyQueryAccountField_AccountID_length
        , &CThostFtdcNotifyQueryAccountField_Password, &CThostFtdcNotifyQueryAccountField_Password_length
        , &CThostFtdcNotifyQueryAccountField_FutureSerial
        , &CThostFtdcNotifyQueryAccountField_InstallID
        , &CThostFtdcNotifyQueryAccountField_UserID, &CThostFtdcNotifyQueryAccountField_UserID_length
        , &CThostFtdcNotifyQueryAccountField_VerifyCertNoFlag
        , &CThostFtdcNotifyQueryAccountField_CurrencyID, &CThostFtdcNotifyQueryAccountField_CurrencyID_length
        , &CThostFtdcNotifyQueryAccountField_Digest, &CThostFtdcNotifyQueryAccountField_Digest_length
        , &CThostFtdcNotifyQueryAccountField_BankAccType
        , &CThostFtdcNotifyQueryAccountField_DeviceID, &CThostFtdcNotifyQueryAccountField_DeviceID_length
        , &CThostFtdcNotifyQueryAccountField_BankSecuAccType
        , &CThostFtdcNotifyQueryAccountField_BrokerIDByBank, &CThostFtdcNotifyQueryAccountField_BrokerIDByBank_length
        , &CThostFtdcNotifyQueryAccountField_BankSecuAcc, &CThostFtdcNotifyQueryAccountField_BankSecuAcc_length
        , &CThostFtdcNotifyQueryAccountField_BankPwdFlag
        , &CThostFtdcNotifyQueryAccountField_SecuPwdFlag
        , &CThostFtdcNotifyQueryAccountField_OperNo, &CThostFtdcNotifyQueryAccountField_OperNo_length
        , &CThostFtdcNotifyQueryAccountField_RequestID
        , &CThostFtdcNotifyQueryAccountField_TID
        , &CThostFtdcNotifyQueryAccountField_BankUseAmount
        , &CThostFtdcNotifyQueryAccountField_BankFetchAmount
        , &CThostFtdcNotifyQueryAccountField_ErrorID
        , &CThostFtdcNotifyQueryAccountField_ErrorMsg, &CThostFtdcNotifyQueryAccountField_ErrorMsg_length
        , &CThostFtdcNotifyQueryAccountField_LongCustomerName, &CThostFtdcNotifyQueryAccountField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcNotifyQueryAccountField_TradeCode != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcNotifyQueryAccountField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcNotifyQueryAccountField_TradeCode, CThostFtdcNotifyQueryAccountField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcNotifyQueryAccountField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcNotifyQueryAccountField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcNotifyQueryAccountField_BankID != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcNotifyQueryAccountField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcNotifyQueryAccountField_BankID, CThostFtdcNotifyQueryAccountField_BankID_length);
        strncpy(data->BankID, CThostFtdcNotifyQueryAccountField_BankID, sizeof(data->BankID));
        CThostFtdcNotifyQueryAccountField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcNotifyQueryAccountField_BankBranchID != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcNotifyQueryAccountField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcNotifyQueryAccountField_BankBranchID, CThostFtdcNotifyQueryAccountField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcNotifyQueryAccountField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcNotifyQueryAccountField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcNotifyQueryAccountField_BrokerID != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcNotifyQueryAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcNotifyQueryAccountField_BrokerID, CThostFtdcNotifyQueryAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcNotifyQueryAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcNotifyQueryAccountField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcNotifyQueryAccountField_BrokerBranchID != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcNotifyQueryAccountField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcNotifyQueryAccountField_BrokerBranchID, CThostFtdcNotifyQueryAccountField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcNotifyQueryAccountField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcNotifyQueryAccountField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcNotifyQueryAccountField_TradeDate != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcNotifyQueryAccountField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcNotifyQueryAccountField_TradeDate, CThostFtdcNotifyQueryAccountField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcNotifyQueryAccountField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcNotifyQueryAccountField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcNotifyQueryAccountField_TradeTime != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcNotifyQueryAccountField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcNotifyQueryAccountField_TradeTime, CThostFtdcNotifyQueryAccountField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcNotifyQueryAccountField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcNotifyQueryAccountField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcNotifyQueryAccountField_BankSerial != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcNotifyQueryAccountField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcNotifyQueryAccountField_BankSerial, CThostFtdcNotifyQueryAccountField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcNotifyQueryAccountField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcNotifyQueryAccountField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcNotifyQueryAccountField_TradingDay != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcNotifyQueryAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcNotifyQueryAccountField_TradingDay, CThostFtdcNotifyQueryAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcNotifyQueryAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcNotifyQueryAccountField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcNotifyQueryAccountField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcNotifyQueryAccountField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcNotifyQueryAccountField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcNotifyQueryAccountField_CustomerName != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcNotifyQueryAccountField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcNotifyQueryAccountField_CustomerName, CThostFtdcNotifyQueryAccountField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcNotifyQueryAccountField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcNotifyQueryAccountField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcNotifyQueryAccountField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcNotifyQueryAccountField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcNotifyQueryAccountField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcNotifyQueryAccountField_IdentifiedCardNo, CThostFtdcNotifyQueryAccountField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcNotifyQueryAccountField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcNotifyQueryAccountField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcNotifyQueryAccountField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcNotifyQueryAccountField_BankAccount != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcNotifyQueryAccountField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcNotifyQueryAccountField_BankAccount, CThostFtdcNotifyQueryAccountField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcNotifyQueryAccountField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcNotifyQueryAccountField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcNotifyQueryAccountField_BankPassWord != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcNotifyQueryAccountField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcNotifyQueryAccountField_BankPassWord, CThostFtdcNotifyQueryAccountField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcNotifyQueryAccountField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcNotifyQueryAccountField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcNotifyQueryAccountField_AccountID != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcNotifyQueryAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcNotifyQueryAccountField_AccountID, CThostFtdcNotifyQueryAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcNotifyQueryAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcNotifyQueryAccountField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcNotifyQueryAccountField_Password != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcNotifyQueryAccountField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcNotifyQueryAccountField_Password, CThostFtdcNotifyQueryAccountField_Password_length);
        strncpy(data->Password, CThostFtdcNotifyQueryAccountField_Password, sizeof(data->Password));
        CThostFtdcNotifyQueryAccountField_Password = NULL;
    }

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcNotifyQueryAccountField_FutureSerial;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcNotifyQueryAccountField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcNotifyQueryAccountField_UserID != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcNotifyQueryAccountField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcNotifyQueryAccountField_UserID, CThostFtdcNotifyQueryAccountField_UserID_length);
        strncpy(data->UserID, CThostFtdcNotifyQueryAccountField_UserID, sizeof(data->UserID));
        CThostFtdcNotifyQueryAccountField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcNotifyQueryAccountField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcNotifyQueryAccountField_CurrencyID != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcNotifyQueryAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcNotifyQueryAccountField_CurrencyID, CThostFtdcNotifyQueryAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcNotifyQueryAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcNotifyQueryAccountField_CurrencyID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcNotifyQueryAccountField_Digest != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcNotifyQueryAccountField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcNotifyQueryAccountField_Digest, CThostFtdcNotifyQueryAccountField_Digest_length);
        strncpy(data->Digest, CThostFtdcNotifyQueryAccountField_Digest, sizeof(data->Digest));
        CThostFtdcNotifyQueryAccountField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcNotifyQueryAccountField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcNotifyQueryAccountField_DeviceID != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcNotifyQueryAccountField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcNotifyQueryAccountField_DeviceID, CThostFtdcNotifyQueryAccountField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcNotifyQueryAccountField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcNotifyQueryAccountField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcNotifyQueryAccountField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcNotifyQueryAccountField_BrokerIDByBank != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcNotifyQueryAccountField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcNotifyQueryAccountField_BrokerIDByBank, CThostFtdcNotifyQueryAccountField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcNotifyQueryAccountField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcNotifyQueryAccountField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcNotifyQueryAccountField_BankSecuAcc != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcNotifyQueryAccountField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcNotifyQueryAccountField_BankSecuAcc, CThostFtdcNotifyQueryAccountField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcNotifyQueryAccountField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcNotifyQueryAccountField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcNotifyQueryAccountField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcNotifyQueryAccountField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcNotifyQueryAccountField_OperNo != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcNotifyQueryAccountField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcNotifyQueryAccountField_OperNo, CThostFtdcNotifyQueryAccountField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcNotifyQueryAccountField_OperNo, sizeof(data->OperNo));
        CThostFtdcNotifyQueryAccountField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcNotifyQueryAccountField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcNotifyQueryAccountField_TID;

    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    data->BankUseAmount = CThostFtdcNotifyQueryAccountField_BankUseAmount;

    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->BankFetchAmount = CThostFtdcNotifyQueryAccountField_BankFetchAmount;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcNotifyQueryAccountField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcNotifyQueryAccountField_ErrorMsg != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcNotifyQueryAccountField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcNotifyQueryAccountField_ErrorMsg, CThostFtdcNotifyQueryAccountField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcNotifyQueryAccountField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcNotifyQueryAccountField_ErrorMsg = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcNotifyQueryAccountField_LongCustomerName != NULL ) {
        if(CThostFtdcNotifyQueryAccountField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcNotifyQueryAccountField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcNotifyQueryAccountField_LongCustomerName, CThostFtdcNotifyQueryAccountField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcNotifyQueryAccountField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcNotifyQueryAccountField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:i,s:y,s:y}"
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
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyQueryAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyQueryAccountField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcNotifyQueryAccountFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcNotifyQueryAccountFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryAccountField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(self);
    CThostFtdcNotifyQueryAccountField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcNotifyQueryAccountFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.BankUseAmount),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.BankFetchAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银行可取金额")
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
        .offset = offsetof(PyCThostFtdcNotifyQueryAccountFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcNotifyQueryAccountFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_TradeCode,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankID,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankBranchID,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_TradeDate,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_TradeTime,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankSerial,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_LastFragment,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_CustomerName,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_IdCardType,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_CustType,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankAccount,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankPassWord,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_AccountID,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_Password,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_UserID,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_Digest,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankAccType,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_DeviceID,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_OperNo,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_ErrorMsg,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcNotifyQueryAccountFieldType_get_LongCustomerName,
    .set = PyCThostFtdcNotifyQueryAccountFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcNotifyQueryAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcNotifyQueryAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询账户信息通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcNotifyQueryAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcNotifyQueryAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcNotifyQueryAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcNotifyQueryAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcNotifyQueryAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcNotifyQueryAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询账户信息通知")},
    {Py_tp_members, PyCThostFtdcNotifyQueryAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcNotifyQueryAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcNotifyQueryAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcNotifyQueryAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcNotifyQueryAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcNotifyQueryAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcNotifyQueryAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcNotifyQueryAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcNotifyQueryAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcNotifyQueryAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcNotifyQueryAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcNotifyQueryAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcNotifyQueryAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcNotifyQueryAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcNotifyQueryAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyQueryAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}