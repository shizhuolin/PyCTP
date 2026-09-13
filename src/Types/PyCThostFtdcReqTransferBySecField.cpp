
#include "PyCThostFtdcReqTransferBySecField.h"

///次中心发起的转帐交易

static int PyCThostFtdcReqTransferBySecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "LongCustomerName", "DRIdentityID", "SecFutureSerial", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqTransferBySecField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqTransferBySecField_BankID = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqTransferBySecField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqTransferBySecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqTransferBySecField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqTransferBySecField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqTransferBySecField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqTransferBySecField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqTransferBySecField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqTransferBySecField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqTransferBySecField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqTransferBySecField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcReqTransferBySecField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReqTransferBySecField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReqTransferBySecField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReqTransferBySecField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqTransferBySecField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqTransferBySecField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcReqTransferBySecField_AccountID = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqTransferBySecField_Password = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReqTransferBySecField_InstallID = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcReqTransferBySecField_FutureSerial = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqTransferBySecField_UserID = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcReqTransferBySecField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReqTransferBySecField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_CurrencyID_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcReqTransferBySecField_TradeAmount = 0.0;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcReqTransferBySecField_FutureFetchAmount = 0.0;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    char CThostFtdcReqTransferBySecField_FeePayFlag = 0;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    double CThostFtdcReqTransferBySecField_CustFee = 0.0;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    double CThostFtdcReqTransferBySecField_BrokerFee = 0.0;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    char *CThostFtdcReqTransferBySecField_Message = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_Message_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqTransferBySecField_Digest = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqTransferBySecField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcReqTransferBySecField_DeviceID = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqTransferBySecField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReqTransferBySecField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqTransferBySecField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqTransferBySecField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqTransferBySecField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcReqTransferBySecField_OperNo = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcReqTransferBySecField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReqTransferBySecField_TID = 0;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    char CThostFtdcReqTransferBySecField_TransferStatus = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReqTransferBySecField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcReqTransferBySecField_LongCustomerName_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcReqTransferBySecField_DRIdentityID = 0;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcReqTransferBySecField_SecFutureSerial = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iicy#ii", (char **)kwlist
        , &CThostFtdcReqTransferBySecField_TradeCode, &CThostFtdcReqTransferBySecField_TradeCode_length
        , &CThostFtdcReqTransferBySecField_BankID, &CThostFtdcReqTransferBySecField_BankID_length
        , &CThostFtdcReqTransferBySecField_BankBranchID, &CThostFtdcReqTransferBySecField_BankBranchID_length
        , &CThostFtdcReqTransferBySecField_BrokerID, &CThostFtdcReqTransferBySecField_BrokerID_length
        , &CThostFtdcReqTransferBySecField_BrokerBranchID, &CThostFtdcReqTransferBySecField_BrokerBranchID_length
        , &CThostFtdcReqTransferBySecField_TradeDate, &CThostFtdcReqTransferBySecField_TradeDate_length
        , &CThostFtdcReqTransferBySecField_TradeTime, &CThostFtdcReqTransferBySecField_TradeTime_length
        , &CThostFtdcReqTransferBySecField_BankSerial, &CThostFtdcReqTransferBySecField_BankSerial_length
        , &CThostFtdcReqTransferBySecField_TradingDay, &CThostFtdcReqTransferBySecField_TradingDay_length
        , &CThostFtdcReqTransferBySecField_PlateSerial
        , &CThostFtdcReqTransferBySecField_LastFragment
        , &CThostFtdcReqTransferBySecField_SessionID
        , &CThostFtdcReqTransferBySecField_CustomerName, &CThostFtdcReqTransferBySecField_CustomerName_length
        , &CThostFtdcReqTransferBySecField_IdCardType
        , &CThostFtdcReqTransferBySecField_IdentifiedCardNo, &CThostFtdcReqTransferBySecField_IdentifiedCardNo_length
        , &CThostFtdcReqTransferBySecField_CustType
        , &CThostFtdcReqTransferBySecField_BankAccount, &CThostFtdcReqTransferBySecField_BankAccount_length
        , &CThostFtdcReqTransferBySecField_BankPassWord, &CThostFtdcReqTransferBySecField_BankPassWord_length
        , &CThostFtdcReqTransferBySecField_AccountID, &CThostFtdcReqTransferBySecField_AccountID_length
        , &CThostFtdcReqTransferBySecField_Password, &CThostFtdcReqTransferBySecField_Password_length
        , &CThostFtdcReqTransferBySecField_InstallID
        , &CThostFtdcReqTransferBySecField_FutureSerial
        , &CThostFtdcReqTransferBySecField_UserID, &CThostFtdcReqTransferBySecField_UserID_length
        , &CThostFtdcReqTransferBySecField_VerifyCertNoFlag
        , &CThostFtdcReqTransferBySecField_CurrencyID, &CThostFtdcReqTransferBySecField_CurrencyID_length
        , &CThostFtdcReqTransferBySecField_TradeAmount
        , &CThostFtdcReqTransferBySecField_FutureFetchAmount
        , &CThostFtdcReqTransferBySecField_FeePayFlag
        , &CThostFtdcReqTransferBySecField_CustFee
        , &CThostFtdcReqTransferBySecField_BrokerFee
        , &CThostFtdcReqTransferBySecField_Message, &CThostFtdcReqTransferBySecField_Message_length
        , &CThostFtdcReqTransferBySecField_Digest, &CThostFtdcReqTransferBySecField_Digest_length
        , &CThostFtdcReqTransferBySecField_BankAccType
        , &CThostFtdcReqTransferBySecField_DeviceID, &CThostFtdcReqTransferBySecField_DeviceID_length
        , &CThostFtdcReqTransferBySecField_BankSecuAccType
        , &CThostFtdcReqTransferBySecField_BrokerIDByBank, &CThostFtdcReqTransferBySecField_BrokerIDByBank_length
        , &CThostFtdcReqTransferBySecField_BankSecuAcc, &CThostFtdcReqTransferBySecField_BankSecuAcc_length
        , &CThostFtdcReqTransferBySecField_BankPwdFlag
        , &CThostFtdcReqTransferBySecField_SecuPwdFlag
        , &CThostFtdcReqTransferBySecField_OperNo, &CThostFtdcReqTransferBySecField_OperNo_length
        , &CThostFtdcReqTransferBySecField_RequestID
        , &CThostFtdcReqTransferBySecField_TID
        , &CThostFtdcReqTransferBySecField_TransferStatus
        , &CThostFtdcReqTransferBySecField_LongCustomerName, &CThostFtdcReqTransferBySecField_LongCustomerName_length
        , &CThostFtdcReqTransferBySecField_DRIdentityID
        , &CThostFtdcReqTransferBySecField_SecFutureSerial
    )) {
        return -1;
    }

    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqTransferBySecField_TradeCode != NULL ) {
        if(CThostFtdcReqTransferBySecField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqTransferBySecField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqTransferBySecField_TradeCode, CThostFtdcReqTransferBySecField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqTransferBySecField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqTransferBySecField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqTransferBySecField_BankID != NULL ) {
        if(CThostFtdcReqTransferBySecField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqTransferBySecField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqTransferBySecField_BankID, CThostFtdcReqTransferBySecField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqTransferBySecField_BankID, sizeof(data->BankID));
        CThostFtdcReqTransferBySecField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqTransferBySecField_BankBranchID != NULL ) {
        if(CThostFtdcReqTransferBySecField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqTransferBySecField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqTransferBySecField_BankBranchID, CThostFtdcReqTransferBySecField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqTransferBySecField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqTransferBySecField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqTransferBySecField_BrokerID != NULL ) {
        if(CThostFtdcReqTransferBySecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqTransferBySecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqTransferBySecField_BrokerID, CThostFtdcReqTransferBySecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqTransferBySecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqTransferBySecField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqTransferBySecField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqTransferBySecField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqTransferBySecField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqTransferBySecField_BrokerBranchID, CThostFtdcReqTransferBySecField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqTransferBySecField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqTransferBySecField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqTransferBySecField_TradeDate != NULL ) {
        if(CThostFtdcReqTransferBySecField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqTransferBySecField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqTransferBySecField_TradeDate, CThostFtdcReqTransferBySecField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqTransferBySecField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqTransferBySecField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqTransferBySecField_TradeTime != NULL ) {
        if(CThostFtdcReqTransferBySecField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqTransferBySecField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqTransferBySecField_TradeTime, CThostFtdcReqTransferBySecField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqTransferBySecField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqTransferBySecField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqTransferBySecField_BankSerial != NULL ) {
        if(CThostFtdcReqTransferBySecField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqTransferBySecField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqTransferBySecField_BankSerial, CThostFtdcReqTransferBySecField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqTransferBySecField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqTransferBySecField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqTransferBySecField_TradingDay != NULL ) {
        if(CThostFtdcReqTransferBySecField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqTransferBySecField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqTransferBySecField_TradingDay, CThostFtdcReqTransferBySecField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqTransferBySecField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqTransferBySecField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqTransferBySecField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqTransferBySecField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqTransferBySecField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcReqTransferBySecField_CustomerName != NULL ) {
        if(CThostFtdcReqTransferBySecField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcReqTransferBySecField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReqTransferBySecField_CustomerName, CThostFtdcReqTransferBySecField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReqTransferBySecField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReqTransferBySecField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReqTransferBySecField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReqTransferBySecField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReqTransferBySecField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReqTransferBySecField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReqTransferBySecField_IdentifiedCardNo, CThostFtdcReqTransferBySecField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReqTransferBySecField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReqTransferBySecField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReqTransferBySecField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqTransferBySecField_BankAccount != NULL ) {
        if(CThostFtdcReqTransferBySecField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReqTransferBySecField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReqTransferBySecField_BankAccount, CThostFtdcReqTransferBySecField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReqTransferBySecField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReqTransferBySecField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqTransferBySecField_BankPassWord != NULL ) {
        if(CThostFtdcReqTransferBySecField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReqTransferBySecField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReqTransferBySecField_BankPassWord, CThostFtdcReqTransferBySecField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReqTransferBySecField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReqTransferBySecField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcReqTransferBySecField_AccountID != NULL ) {
        if(CThostFtdcReqTransferBySecField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcReqTransferBySecField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcReqTransferBySecField_AccountID, CThostFtdcReqTransferBySecField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcReqTransferBySecField_AccountID, sizeof(data->AccountID));
        CThostFtdcReqTransferBySecField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqTransferBySecField_Password != NULL ) {
        if(CThostFtdcReqTransferBySecField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqTransferBySecField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqTransferBySecField_Password, CThostFtdcReqTransferBySecField_Password_length);
        strncpy(data->Password, CThostFtdcReqTransferBySecField_Password, sizeof(data->Password));
        CThostFtdcReqTransferBySecField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReqTransferBySecField_InstallID;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcReqTransferBySecField_FutureSerial;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqTransferBySecField_UserID != NULL ) {
        if(CThostFtdcReqTransferBySecField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqTransferBySecField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqTransferBySecField_UserID, CThostFtdcReqTransferBySecField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqTransferBySecField_UserID, sizeof(data->UserID));
        CThostFtdcReqTransferBySecField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcReqTransferBySecField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReqTransferBySecField_CurrencyID != NULL ) {
        if(CThostFtdcReqTransferBySecField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReqTransferBySecField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReqTransferBySecField_CurrencyID, CThostFtdcReqTransferBySecField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReqTransferBySecField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReqTransferBySecField_CurrencyID = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    data->TradeAmount = CThostFtdcReqTransferBySecField_TradeAmount;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->FutureFetchAmount = CThostFtdcReqTransferBySecField_FutureFetchAmount;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    data->FeePayFlag = CThostFtdcReqTransferBySecField_FeePayFlag;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    data->CustFee = CThostFtdcReqTransferBySecField_CustFee;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    data->BrokerFee = CThostFtdcReqTransferBySecField_BrokerFee;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    if( CThostFtdcReqTransferBySecField_Message != NULL ) {
        if(CThostFtdcReqTransferBySecField_Message_length >= (Py_ssize_t)sizeof(data->Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is 128)", CThostFtdcReqTransferBySecField_Message_length);
            return -1;
        }
        // memset(data->Message, 0, sizeof(data->Message));
        // memcpy(data->Message, CThostFtdcReqTransferBySecField_Message, CThostFtdcReqTransferBySecField_Message_length);
        strncpy(data->Message, CThostFtdcReqTransferBySecField_Message, sizeof(data->Message));
        CThostFtdcReqTransferBySecField_Message = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqTransferBySecField_Digest != NULL ) {
        if(CThostFtdcReqTransferBySecField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqTransferBySecField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqTransferBySecField_Digest, CThostFtdcReqTransferBySecField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqTransferBySecField_Digest, sizeof(data->Digest));
        CThostFtdcReqTransferBySecField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcReqTransferBySecField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcReqTransferBySecField_DeviceID != NULL ) {
        if(CThostFtdcReqTransferBySecField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcReqTransferBySecField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcReqTransferBySecField_DeviceID, CThostFtdcReqTransferBySecField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcReqTransferBySecField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcReqTransferBySecField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcReqTransferBySecField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReqTransferBySecField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReqTransferBySecField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReqTransferBySecField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReqTransferBySecField_BrokerIDByBank, CThostFtdcReqTransferBySecField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReqTransferBySecField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReqTransferBySecField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqTransferBySecField_BankSecuAcc != NULL ) {
        if(CThostFtdcReqTransferBySecField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcReqTransferBySecField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcReqTransferBySecField_BankSecuAcc, CThostFtdcReqTransferBySecField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcReqTransferBySecField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcReqTransferBySecField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcReqTransferBySecField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcReqTransferBySecField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcReqTransferBySecField_OperNo != NULL ) {
        if(CThostFtdcReqTransferBySecField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcReqTransferBySecField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcReqTransferBySecField_OperNo, CThostFtdcReqTransferBySecField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcReqTransferBySecField_OperNo, sizeof(data->OperNo));
        CThostFtdcReqTransferBySecField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcReqTransferBySecField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReqTransferBySecField_TID;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    data->TransferStatus = CThostFtdcReqTransferBySecField_TransferStatus;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReqTransferBySecField_LongCustomerName != NULL ) {
        if(CThostFtdcReqTransferBySecField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReqTransferBySecField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcReqTransferBySecField_LongCustomerName, CThostFtdcReqTransferBySecField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcReqTransferBySecField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcReqTransferBySecField_LongCustomerName = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcReqTransferBySecField_DRIdentityID;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->SecFutureSerial = CThostFtdcReqTransferBySecField_SecFutureSerial;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqTransferBySecFieldType_repr(PyObject *self) {

    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:y,s:i,s:i}"
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
        , "InstallID", data->InstallID
        , "FutureSerial", data->FutureSerial
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "VerifyCertNoFlag", data->VerifyCertNoFlag
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "TradeAmount", data->TradeAmount
        , "FutureFetchAmount", data->FutureFetchAmount
        , "FeePayFlag", data->FeePayFlag
        , "CustFee", data->CustFee
        , "BrokerFee", data->BrokerFee
        , "Message", data->Message//, (Py_ssize_t)sizeof(data->Message)
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
        , "TransferStatus", data->TransferStatus
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
        , "DRIdentityID", data->DRIdentityID
        , "SecFutureSerial", data->SecFutureSerial
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqTransferBySecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqTransferBySecField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 费用支付标志
/// typedef char TThostFtdcFeePayFlagType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_FeePayFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FeePayFlag), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_FeePayFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FeePayFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::FeePayFlag)) {
        PyErr_SetString(PyExc_ValueError, "FeePayFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->FeePayFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发送方给接收方的消息
/// typedef char TThostFtdcAddInfoType[129]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_Message(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Message, (Py_ssize_t)sizeof(data->Message));
    return PyBytes_FromString(data->Message);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_Message(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->Message, 0, sizeof(data->Message));
    // memcpy(data->Message, buf, len);
    strncpy(data->Message, buf, sizeof(data->Message));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 转账交易状态
/// typedef char TThostFtdcTransferStatusType
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_TransferStatus(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TransferStatus), 1);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_TransferStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TransferStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::TransferStatus)) {
        PyErr_SetString(PyExc_ValueError, "TransferStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    data->TransferStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReqTransferBySecFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcReqTransferBySecFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferBySecField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferBySecFieldData>(self);
    CThostFtdcReqTransferBySecField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqTransferBySecFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
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
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.FutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货公司流水号")
    },
    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    {
        .name = "TradeAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.TradeAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("转帐金额")
    },
    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    {
        .name = "FutureFetchAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.FutureFetchAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货可取金额")
    },
    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    {
        .name = "CustFee",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.CustFee),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("应收客户费用")
    },
    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    {
        .name = "BrokerFee",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.BrokerFee),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("应收期货公司费用")
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
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.DRIdentityID),
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
        .offset = offsetof(PyCThostFtdcReqTransferBySecFieldData, data.SecFutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次中心发起转账期货公司流水号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqTransferBySecFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_TradeCode,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankID,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BrokerID,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_TradeDate,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_TradeTime,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankSerial,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_TradingDay,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_LastFragment,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_CustomerName,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_IdCardType,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_CustType,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankAccount,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankPassWord,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_AccountID,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_Password,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_UserID,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_CurrencyID,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    {
    .name = "FeePayFlag",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_FeePayFlag,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_FeePayFlag,
    .doc = PyDoc_STR("费用支付标志"),
    },
    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    {
    .name = "Message",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_Message,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_Message,
    .doc = PyDoc_STR("发送方给接收方的消息"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_Digest,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankAccType,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_DeviceID,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_OperNo,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    {
    .name = "TransferStatus",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_TransferStatus,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_TransferStatus,
    .doc = PyDoc_STR("转账交易状态"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcReqTransferBySecFieldType_get_LongCustomerName,
    .set = PyCThostFtdcReqTransferBySecFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqTransferBySecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqTransferBySecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("次中心发起的转帐交易")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqTransferBySecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqTransferBySecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqTransferBySecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqTransferBySecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqTransferBySecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqTransferBySecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("次中心发起的转帐交易")},
    {Py_tp_members, PyCThostFtdcReqTransferBySecFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqTransferBySecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqTransferBySecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqTransferBySecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqTransferBySecFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqTransferBySecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqTransferBySecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqTransferBySecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqTransferBySecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqTransferBySecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqTransferBySecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqTransferBySecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqTransferBySecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqTransferBySecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqTransferBySecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqTransferBySecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}