
#include "PyCThostFtdcNotifyQueryFutureAccountBySecField.h"

///查询银行资金帐户信息通知 要发往次席

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "ErrorID", "ErrorMsg", "LongCustomerName", "DRIdentityID", "SecFutureSerial", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BankID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcNotifyQueryFutureAccountBySecField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcNotifyQueryFutureAccountBySecField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcNotifyQueryFutureAccountBySecField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcNotifyQueryFutureAccountBySecField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcNotifyQueryFutureAccountBySecField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_AccountID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_Password = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_Password_length = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcNotifyQueryFutureAccountBySecField_FutureSerial = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcNotifyQueryFutureAccountBySecField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_UserID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcNotifyQueryFutureAccountBySecField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_Digest = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcNotifyQueryFutureAccountBySecField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcNotifyQueryFutureAccountBySecField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcNotifyQueryFutureAccountBySecField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_OperNo = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcNotifyQueryFutureAccountBySecField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcNotifyQueryFutureAccountBySecField_TID = 0;

    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcNotifyQueryFutureAccountBySecField_BankUseAmount = 0.0;

    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcNotifyQueryFutureAccountBySecField_BankFetchAmount = 0.0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcNotifyQueryFutureAccountBySecField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcNotifyQueryFutureAccountBySecField_DRIdentityID = 0;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcNotifyQueryFutureAccountBySecField_SecFutureSerial = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddiy#y#ii", (char **)kwlist
        , &CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode, &CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankID, &CThostFtdcNotifyQueryFutureAccountBySecField_BankID_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID, &CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID, &CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID, &CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate, &CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime, &CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial, &CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay, &CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_PlateSerial
        , &CThostFtdcNotifyQueryFutureAccountBySecField_LastFragment
        , &CThostFtdcNotifyQueryFutureAccountBySecField_SessionID
        , &CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName, &CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_IdCardType
        , &CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo, &CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_CustType
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount, &CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord, &CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_AccountID, &CThostFtdcNotifyQueryFutureAccountBySecField_AccountID_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_Password, &CThostFtdcNotifyQueryFutureAccountBySecField_Password_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_FutureSerial
        , &CThostFtdcNotifyQueryFutureAccountBySecField_InstallID
        , &CThostFtdcNotifyQueryFutureAccountBySecField_UserID, &CThostFtdcNotifyQueryFutureAccountBySecField_UserID_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_VerifyCertNoFlag
        , &CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID, &CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_Digest, &CThostFtdcNotifyQueryFutureAccountBySecField_Digest_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankAccType
        , &CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID, &CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAccType
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank, &CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc, &CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankPwdFlag
        , &CThostFtdcNotifyQueryFutureAccountBySecField_SecuPwdFlag
        , &CThostFtdcNotifyQueryFutureAccountBySecField_OperNo, &CThostFtdcNotifyQueryFutureAccountBySecField_OperNo_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_RequestID
        , &CThostFtdcNotifyQueryFutureAccountBySecField_TID
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankUseAmount
        , &CThostFtdcNotifyQueryFutureAccountBySecField_BankFetchAmount
        , &CThostFtdcNotifyQueryFutureAccountBySecField_ErrorID
        , &CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg, &CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName, &CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName_length
        , &CThostFtdcNotifyQueryFutureAccountBySecField_DRIdentityID
        , &CThostFtdcNotifyQueryFutureAccountBySecField_SecFutureSerial
    )) {
        return -1;
    }

    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode, CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcNotifyQueryFutureAccountBySecField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BankID != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcNotifyQueryFutureAccountBySecField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcNotifyQueryFutureAccountBySecField_BankID, CThostFtdcNotifyQueryFutureAccountBySecField_BankID_length);
        strncpy(data->BankID, CThostFtdcNotifyQueryFutureAccountBySecField_BankID, sizeof(data->BankID));
        CThostFtdcNotifyQueryFutureAccountBySecField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID, CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcNotifyQueryFutureAccountBySecField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcNotifyQueryFutureAccountBySecField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcNotifyQueryFutureAccountBySecField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate, CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcNotifyQueryFutureAccountBySecField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime, CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcNotifyQueryFutureAccountBySecField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial, CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcNotifyQueryFutureAccountBySecField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay, CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcNotifyQueryFutureAccountBySecField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcNotifyQueryFutureAccountBySecField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcNotifyQueryFutureAccountBySecField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcNotifyQueryFutureAccountBySecField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName, CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcNotifyQueryFutureAccountBySecField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcNotifyQueryFutureAccountBySecField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo, CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcNotifyQueryFutureAccountBySecField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcNotifyQueryFutureAccountBySecField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount, CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcNotifyQueryFutureAccountBySecField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord, CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcNotifyQueryFutureAccountBySecField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_AccountID != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcNotifyQueryFutureAccountBySecField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcNotifyQueryFutureAccountBySecField_AccountID, CThostFtdcNotifyQueryFutureAccountBySecField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcNotifyQueryFutureAccountBySecField_AccountID, sizeof(data->AccountID));
        CThostFtdcNotifyQueryFutureAccountBySecField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_Password != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcNotifyQueryFutureAccountBySecField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcNotifyQueryFutureAccountBySecField_Password, CThostFtdcNotifyQueryFutureAccountBySecField_Password_length);
        strncpy(data->Password, CThostFtdcNotifyQueryFutureAccountBySecField_Password, sizeof(data->Password));
        CThostFtdcNotifyQueryFutureAccountBySecField_Password = NULL;
    }

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcNotifyQueryFutureAccountBySecField_FutureSerial;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcNotifyQueryFutureAccountBySecField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_UserID != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcNotifyQueryFutureAccountBySecField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcNotifyQueryFutureAccountBySecField_UserID, CThostFtdcNotifyQueryFutureAccountBySecField_UserID_length);
        strncpy(data->UserID, CThostFtdcNotifyQueryFutureAccountBySecField_UserID, sizeof(data->UserID));
        CThostFtdcNotifyQueryFutureAccountBySecField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcNotifyQueryFutureAccountBySecField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID, CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcNotifyQueryFutureAccountBySecField_CurrencyID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_Digest != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcNotifyQueryFutureAccountBySecField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcNotifyQueryFutureAccountBySecField_Digest, CThostFtdcNotifyQueryFutureAccountBySecField_Digest_length);
        strncpy(data->Digest, CThostFtdcNotifyQueryFutureAccountBySecField_Digest, sizeof(data->Digest));
        CThostFtdcNotifyQueryFutureAccountBySecField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcNotifyQueryFutureAccountBySecField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID, CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcNotifyQueryFutureAccountBySecField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcNotifyQueryFutureAccountBySecField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc, CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcNotifyQueryFutureAccountBySecField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcNotifyQueryFutureAccountBySecField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcNotifyQueryFutureAccountBySecField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_OperNo != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcNotifyQueryFutureAccountBySecField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcNotifyQueryFutureAccountBySecField_OperNo, CThostFtdcNotifyQueryFutureAccountBySecField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcNotifyQueryFutureAccountBySecField_OperNo, sizeof(data->OperNo));
        CThostFtdcNotifyQueryFutureAccountBySecField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcNotifyQueryFutureAccountBySecField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcNotifyQueryFutureAccountBySecField_TID;

    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    data->BankUseAmount = CThostFtdcNotifyQueryFutureAccountBySecField_BankUseAmount;

    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->BankFetchAmount = CThostFtdcNotifyQueryFutureAccountBySecField_BankFetchAmount;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcNotifyQueryFutureAccountBySecField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg, CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcNotifyQueryFutureAccountBySecField_ErrorMsg = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName != NULL ) {
        if(CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName, CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcNotifyQueryFutureAccountBySecField_LongCustomerName = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcNotifyQueryFutureAccountBySecField_DRIdentityID;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->SecFutureSerial = CThostFtdcNotifyQueryFutureAccountBySecField_SecFutureSerial;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_repr(PyObject *self) {

    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:i,s:y,s:y,s:i,s:i}"
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
        , "DRIdentityID", data->DRIdentityID
        , "SecFutureSerial", data->SecFutureSerial
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyQueryFutureAccountBySecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyQueryFutureAccountBySecField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNotifyQueryFutureAccountBySecField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNotifyQueryFutureAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryFutureAccountBySecFieldData>(self);
    CThostFtdcNotifyQueryFutureAccountBySecField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.BankUseAmount),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.BankFetchAmount),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.DRIdentityID),
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
        .offset = offsetof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData, data.SecFutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次中心发起转账期货公司流水号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_TradeCode,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankID,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankBranchID,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BrokerID,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_TradeDate,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_TradeTime,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankSerial,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_TradingDay,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_LastFragment,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_CustomerName,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_IdCardType,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_CustType,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankAccount,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankPassWord,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_AccountID,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_Password,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_UserID,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_CurrencyID,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_Digest,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankAccType,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_DeviceID,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_OperNo,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_ErrorMsg,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_get_LongCustomerName,
    .set = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcNotifyQueryFutureAccountBySecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询银行资金帐户信息通知 要发往次席")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询银行资金帐户信息通知 要发往次席")},
    {Py_tp_members, PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_members},
    {Py_tp_getset, PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_spec = {
    .name = "PyCTP.CThostFtdcNotifyQueryFutureAccountBySecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcNotifyQueryFutureAccountBySecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcNotifyQueryFutureAccountBySecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcNotifyQueryFutureAccountBySecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyQueryFutureAccountBySecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}