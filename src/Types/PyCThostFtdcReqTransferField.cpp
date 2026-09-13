
#include "PyCThostFtdcReqTransferField.h"

///转账请求

static int PyCThostFtdcReqTransferFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqTransferField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqTransferField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqTransferField_BankID = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqTransferField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqTransferField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqTransferField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqTransferField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqTransferField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqTransferField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqTransferField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqTransferField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqTransferField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqTransferField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqTransferField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqTransferField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqTransferField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcReqTransferField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReqTransferField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReqTransferField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReqTransferField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReqTransferField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReqTransferField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqTransferField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqTransferField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcReqTransferField_AccountID = NULL;
    Py_ssize_t CThostFtdcReqTransferField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqTransferField_Password = NULL;
    Py_ssize_t CThostFtdcReqTransferField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReqTransferField_InstallID = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcReqTransferField_FutureSerial = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqTransferField_UserID = NULL;
    Py_ssize_t CThostFtdcReqTransferField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcReqTransferField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReqTransferField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReqTransferField_CurrencyID_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcReqTransferField_TradeAmount = 0.0;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcReqTransferField_FutureFetchAmount = 0.0;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    char CThostFtdcReqTransferField_FeePayFlag = 0;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    double CThostFtdcReqTransferField_CustFee = 0.0;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    double CThostFtdcReqTransferField_BrokerFee = 0.0;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    char *CThostFtdcReqTransferField_Message = NULL;
    Py_ssize_t CThostFtdcReqTransferField_Message_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqTransferField_Digest = NULL;
    Py_ssize_t CThostFtdcReqTransferField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqTransferField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcReqTransferField_DeviceID = NULL;
    Py_ssize_t CThostFtdcReqTransferField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqTransferField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReqTransferField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqTransferField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcReqTransferField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqTransferField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqTransferField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcReqTransferField_OperNo = NULL;
    Py_ssize_t CThostFtdcReqTransferField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcReqTransferField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReqTransferField_TID = 0;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    char CThostFtdcReqTransferField_TransferStatus = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReqTransferField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcReqTransferField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iicy#", (char **)kwlist
        , &CThostFtdcReqTransferField_TradeCode, &CThostFtdcReqTransferField_TradeCode_length
        , &CThostFtdcReqTransferField_BankID, &CThostFtdcReqTransferField_BankID_length
        , &CThostFtdcReqTransferField_BankBranchID, &CThostFtdcReqTransferField_BankBranchID_length
        , &CThostFtdcReqTransferField_BrokerID, &CThostFtdcReqTransferField_BrokerID_length
        , &CThostFtdcReqTransferField_BrokerBranchID, &CThostFtdcReqTransferField_BrokerBranchID_length
        , &CThostFtdcReqTransferField_TradeDate, &CThostFtdcReqTransferField_TradeDate_length
        , &CThostFtdcReqTransferField_TradeTime, &CThostFtdcReqTransferField_TradeTime_length
        , &CThostFtdcReqTransferField_BankSerial, &CThostFtdcReqTransferField_BankSerial_length
        , &CThostFtdcReqTransferField_TradingDay, &CThostFtdcReqTransferField_TradingDay_length
        , &CThostFtdcReqTransferField_PlateSerial
        , &CThostFtdcReqTransferField_LastFragment
        , &CThostFtdcReqTransferField_SessionID
        , &CThostFtdcReqTransferField_CustomerName, &CThostFtdcReqTransferField_CustomerName_length
        , &CThostFtdcReqTransferField_IdCardType
        , &CThostFtdcReqTransferField_IdentifiedCardNo, &CThostFtdcReqTransferField_IdentifiedCardNo_length
        , &CThostFtdcReqTransferField_CustType
        , &CThostFtdcReqTransferField_BankAccount, &CThostFtdcReqTransferField_BankAccount_length
        , &CThostFtdcReqTransferField_BankPassWord, &CThostFtdcReqTransferField_BankPassWord_length
        , &CThostFtdcReqTransferField_AccountID, &CThostFtdcReqTransferField_AccountID_length
        , &CThostFtdcReqTransferField_Password, &CThostFtdcReqTransferField_Password_length
        , &CThostFtdcReqTransferField_InstallID
        , &CThostFtdcReqTransferField_FutureSerial
        , &CThostFtdcReqTransferField_UserID, &CThostFtdcReqTransferField_UserID_length
        , &CThostFtdcReqTransferField_VerifyCertNoFlag
        , &CThostFtdcReqTransferField_CurrencyID, &CThostFtdcReqTransferField_CurrencyID_length
        , &CThostFtdcReqTransferField_TradeAmount
        , &CThostFtdcReqTransferField_FutureFetchAmount
        , &CThostFtdcReqTransferField_FeePayFlag
        , &CThostFtdcReqTransferField_CustFee
        , &CThostFtdcReqTransferField_BrokerFee
        , &CThostFtdcReqTransferField_Message, &CThostFtdcReqTransferField_Message_length
        , &CThostFtdcReqTransferField_Digest, &CThostFtdcReqTransferField_Digest_length
        , &CThostFtdcReqTransferField_BankAccType
        , &CThostFtdcReqTransferField_DeviceID, &CThostFtdcReqTransferField_DeviceID_length
        , &CThostFtdcReqTransferField_BankSecuAccType
        , &CThostFtdcReqTransferField_BrokerIDByBank, &CThostFtdcReqTransferField_BrokerIDByBank_length
        , &CThostFtdcReqTransferField_BankSecuAcc, &CThostFtdcReqTransferField_BankSecuAcc_length
        , &CThostFtdcReqTransferField_BankPwdFlag
        , &CThostFtdcReqTransferField_SecuPwdFlag
        , &CThostFtdcReqTransferField_OperNo, &CThostFtdcReqTransferField_OperNo_length
        , &CThostFtdcReqTransferField_RequestID
        , &CThostFtdcReqTransferField_TID
        , &CThostFtdcReqTransferField_TransferStatus
        , &CThostFtdcReqTransferField_LongCustomerName, &CThostFtdcReqTransferField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqTransferField_TradeCode != NULL ) {
        if(CThostFtdcReqTransferField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqTransferField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqTransferField_TradeCode, CThostFtdcReqTransferField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqTransferField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqTransferField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqTransferField_BankID != NULL ) {
        if(CThostFtdcReqTransferField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqTransferField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqTransferField_BankID, CThostFtdcReqTransferField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqTransferField_BankID, sizeof(data->BankID));
        CThostFtdcReqTransferField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqTransferField_BankBranchID != NULL ) {
        if(CThostFtdcReqTransferField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqTransferField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqTransferField_BankBranchID, CThostFtdcReqTransferField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqTransferField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqTransferField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqTransferField_BrokerID != NULL ) {
        if(CThostFtdcReqTransferField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqTransferField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqTransferField_BrokerID, CThostFtdcReqTransferField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqTransferField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqTransferField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqTransferField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqTransferField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqTransferField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqTransferField_BrokerBranchID, CThostFtdcReqTransferField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqTransferField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqTransferField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqTransferField_TradeDate != NULL ) {
        if(CThostFtdcReqTransferField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqTransferField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqTransferField_TradeDate, CThostFtdcReqTransferField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqTransferField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqTransferField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqTransferField_TradeTime != NULL ) {
        if(CThostFtdcReqTransferField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqTransferField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqTransferField_TradeTime, CThostFtdcReqTransferField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqTransferField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqTransferField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqTransferField_BankSerial != NULL ) {
        if(CThostFtdcReqTransferField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqTransferField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqTransferField_BankSerial, CThostFtdcReqTransferField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqTransferField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqTransferField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqTransferField_TradingDay != NULL ) {
        if(CThostFtdcReqTransferField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqTransferField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqTransferField_TradingDay, CThostFtdcReqTransferField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqTransferField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqTransferField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqTransferField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqTransferField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqTransferField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcReqTransferField_CustomerName != NULL ) {
        if(CThostFtdcReqTransferField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcReqTransferField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReqTransferField_CustomerName, CThostFtdcReqTransferField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReqTransferField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReqTransferField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReqTransferField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReqTransferField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReqTransferField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReqTransferField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReqTransferField_IdentifiedCardNo, CThostFtdcReqTransferField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReqTransferField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReqTransferField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReqTransferField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqTransferField_BankAccount != NULL ) {
        if(CThostFtdcReqTransferField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReqTransferField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReqTransferField_BankAccount, CThostFtdcReqTransferField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReqTransferField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReqTransferField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqTransferField_BankPassWord != NULL ) {
        if(CThostFtdcReqTransferField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReqTransferField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReqTransferField_BankPassWord, CThostFtdcReqTransferField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReqTransferField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReqTransferField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcReqTransferField_AccountID != NULL ) {
        if(CThostFtdcReqTransferField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcReqTransferField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcReqTransferField_AccountID, CThostFtdcReqTransferField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcReqTransferField_AccountID, sizeof(data->AccountID));
        CThostFtdcReqTransferField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqTransferField_Password != NULL ) {
        if(CThostFtdcReqTransferField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqTransferField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqTransferField_Password, CThostFtdcReqTransferField_Password_length);
        strncpy(data->Password, CThostFtdcReqTransferField_Password, sizeof(data->Password));
        CThostFtdcReqTransferField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReqTransferField_InstallID;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcReqTransferField_FutureSerial;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqTransferField_UserID != NULL ) {
        if(CThostFtdcReqTransferField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqTransferField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqTransferField_UserID, CThostFtdcReqTransferField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqTransferField_UserID, sizeof(data->UserID));
        CThostFtdcReqTransferField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcReqTransferField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReqTransferField_CurrencyID != NULL ) {
        if(CThostFtdcReqTransferField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReqTransferField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReqTransferField_CurrencyID, CThostFtdcReqTransferField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReqTransferField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReqTransferField_CurrencyID = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    data->TradeAmount = CThostFtdcReqTransferField_TradeAmount;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->FutureFetchAmount = CThostFtdcReqTransferField_FutureFetchAmount;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    data->FeePayFlag = CThostFtdcReqTransferField_FeePayFlag;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    data->CustFee = CThostFtdcReqTransferField_CustFee;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    data->BrokerFee = CThostFtdcReqTransferField_BrokerFee;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    if( CThostFtdcReqTransferField_Message != NULL ) {
        if(CThostFtdcReqTransferField_Message_length >= (Py_ssize_t)sizeof(data->Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is 128)", CThostFtdcReqTransferField_Message_length);
            return -1;
        }
        // memset(data->Message, 0, sizeof(data->Message));
        // memcpy(data->Message, CThostFtdcReqTransferField_Message, CThostFtdcReqTransferField_Message_length);
        strncpy(data->Message, CThostFtdcReqTransferField_Message, sizeof(data->Message));
        CThostFtdcReqTransferField_Message = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqTransferField_Digest != NULL ) {
        if(CThostFtdcReqTransferField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqTransferField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqTransferField_Digest, CThostFtdcReqTransferField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqTransferField_Digest, sizeof(data->Digest));
        CThostFtdcReqTransferField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcReqTransferField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcReqTransferField_DeviceID != NULL ) {
        if(CThostFtdcReqTransferField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcReqTransferField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcReqTransferField_DeviceID, CThostFtdcReqTransferField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcReqTransferField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcReqTransferField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcReqTransferField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReqTransferField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReqTransferField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReqTransferField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReqTransferField_BrokerIDByBank, CThostFtdcReqTransferField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReqTransferField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReqTransferField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqTransferField_BankSecuAcc != NULL ) {
        if(CThostFtdcReqTransferField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcReqTransferField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcReqTransferField_BankSecuAcc, CThostFtdcReqTransferField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcReqTransferField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcReqTransferField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcReqTransferField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcReqTransferField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcReqTransferField_OperNo != NULL ) {
        if(CThostFtdcReqTransferField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcReqTransferField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcReqTransferField_OperNo, CThostFtdcReqTransferField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcReqTransferField_OperNo, sizeof(data->OperNo));
        CThostFtdcReqTransferField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcReqTransferField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReqTransferField_TID;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    data->TransferStatus = CThostFtdcReqTransferField_TransferStatus;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReqTransferField_LongCustomerName != NULL ) {
        if(CThostFtdcReqTransferField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReqTransferField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcReqTransferField_LongCustomerName, CThostFtdcReqTransferField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcReqTransferField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcReqTransferField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqTransferFieldType_repr(PyObject *self) {

    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:y}"
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqTransferField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqTransferField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqTransferFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqTransferFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqTransferFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqTransferFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqTransferFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqTransferFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqTransferFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqTransferFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqTransferFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqTransferFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqTransferFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqTransferFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqTransferFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqTransferFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcReqTransferFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReqTransferFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReqTransferFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReqTransferFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReqTransferFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReqTransferFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReqTransferFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReqTransferFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcReqTransferFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcReqTransferFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqTransferFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqTransferFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqTransferFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqTransferFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcReqTransferFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReqTransferFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReqTransferFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 费用支付标志
/// typedef char TThostFtdcFeePayFlagType
static PyObject *PyCThostFtdcReqTransferFieldType_get_FeePayFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FeePayFlag), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_FeePayFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FeePayFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::FeePayFlag)) {
        PyErr_SetString(PyExc_ValueError, "FeePayFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->FeePayFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发送方给接收方的消息
/// typedef char TThostFtdcAddInfoType[129]
static PyObject *PyCThostFtdcReqTransferFieldType_get_Message(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Message, (Py_ssize_t)sizeof(data->Message));
    return PyBytes_FromString(data->Message);
}

static int PyCThostFtdcReqTransferFieldType_set_Message(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->Message, 0, sizeof(data->Message));
    // memcpy(data->Message, buf, len);
    strncpy(data->Message, buf, sizeof(data->Message));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqTransferFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqTransferFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcReqTransferFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcReqTransferFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReqTransferFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcReqTransferFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqTransferFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqTransferFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcReqTransferFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcReqTransferFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 转账交易状态
/// typedef char TThostFtdcTransferStatusType
static PyObject *PyCThostFtdcReqTransferFieldType_get_TransferStatus(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TransferStatus), 1);
}

static int PyCThostFtdcReqTransferFieldType_set_TransferStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TransferStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqTransferField::TransferStatus)) {
        PyErr_SetString(PyExc_ValueError, "TransferStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    data->TransferStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReqTransferFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcReqTransferFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqTransferField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(self);
    CThostFtdcReqTransferField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqTransferFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.TradeAmount),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.FutureFetchAmount),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.CustFee),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.BrokerFee),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcReqTransferFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqTransferFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqTransferFieldType_get_TradeCode,
    .set = PyCThostFtdcReqTransferFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqTransferFieldType_get_BankID,
    .set = PyCThostFtdcReqTransferFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqTransferFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqTransferFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqTransferFieldType_get_BrokerID,
    .set = PyCThostFtdcReqTransferFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqTransferFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqTransferFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqTransferFieldType_get_TradeDate,
    .set = PyCThostFtdcReqTransferFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqTransferFieldType_get_TradeTime,
    .set = PyCThostFtdcReqTransferFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqTransferFieldType_get_BankSerial,
    .set = PyCThostFtdcReqTransferFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqTransferFieldType_get_TradingDay,
    .set = PyCThostFtdcReqTransferFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqTransferFieldType_get_LastFragment,
    .set = PyCThostFtdcReqTransferFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReqTransferFieldType_get_CustomerName,
    .set = PyCThostFtdcReqTransferFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReqTransferFieldType_get_IdCardType,
    .set = PyCThostFtdcReqTransferFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReqTransferFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReqTransferFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReqTransferFieldType_get_CustType,
    .set = PyCThostFtdcReqTransferFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReqTransferFieldType_get_BankAccount,
    .set = PyCThostFtdcReqTransferFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReqTransferFieldType_get_BankPassWord,
    .set = PyCThostFtdcReqTransferFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcReqTransferFieldType_get_AccountID,
    .set = PyCThostFtdcReqTransferFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqTransferFieldType_get_Password,
    .set = PyCThostFtdcReqTransferFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqTransferFieldType_get_UserID,
    .set = PyCThostFtdcReqTransferFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcReqTransferFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcReqTransferFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReqTransferFieldType_get_CurrencyID,
    .set = PyCThostFtdcReqTransferFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    {
    .name = "FeePayFlag",
    .get = PyCThostFtdcReqTransferFieldType_get_FeePayFlag,
    .set = PyCThostFtdcReqTransferFieldType_set_FeePayFlag,
    .doc = PyDoc_STR("费用支付标志"),
    },
    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    {
    .name = "Message",
    .get = PyCThostFtdcReqTransferFieldType_get_Message,
    .set = PyCThostFtdcReqTransferFieldType_set_Message,
    .doc = PyDoc_STR("发送方给接收方的消息"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqTransferFieldType_get_Digest,
    .set = PyCThostFtdcReqTransferFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcReqTransferFieldType_get_BankAccType,
    .set = PyCThostFtdcReqTransferFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcReqTransferFieldType_get_DeviceID,
    .set = PyCThostFtdcReqTransferFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcReqTransferFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcReqTransferFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReqTransferFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReqTransferFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcReqTransferFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcReqTransferFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcReqTransferFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcReqTransferFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcReqTransferFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcReqTransferFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcReqTransferFieldType_get_OperNo,
    .set = PyCThostFtdcReqTransferFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    {
    .name = "TransferStatus",
    .get = PyCThostFtdcReqTransferFieldType_get_TransferStatus,
    .set = PyCThostFtdcReqTransferFieldType_set_TransferStatus,
    .doc = PyDoc_STR("转账交易状态"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcReqTransferFieldType_get_LongCustomerName,
    .set = PyCThostFtdcReqTransferFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqTransferFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqTransferField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("转账请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqTransferFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqTransferFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqTransferFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqTransferFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqTransferFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqTransferFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("转账请求")},
    {Py_tp_members, PyCThostFtdcReqTransferFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqTransferFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqTransferFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqTransferFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqTransferFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqTransferField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqTransferFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqTransferFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqTransferFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqTransferFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqTransferFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqTransferFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqTransferFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqTransferFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqTransferField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqTransferField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}