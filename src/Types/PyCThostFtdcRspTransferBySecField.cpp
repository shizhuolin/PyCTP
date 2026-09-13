
#include "PyCThostFtdcRspTransferBySecField.h"

///次中心发起的转帐交易回报

static int PyCThostFtdcRspTransferBySecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "ErrorID", "ErrorMsg", "LongCustomerName", "DRIdentityID", "SecFutureSerial", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcRspTransferBySecField_TradeCode = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcRspTransferBySecField_BankID = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcRspTransferBySecField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspTransferBySecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcRspTransferBySecField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspTransferBySecField_TradeDate = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcRspTransferBySecField_TradeTime = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspTransferBySecField_BankSerial = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspTransferBySecField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspTransferBySecField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcRspTransferBySecField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspTransferBySecField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcRspTransferBySecField_CustomerName = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcRspTransferBySecField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcRspTransferBySecField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcRspTransferBySecField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspTransferBySecField_BankAccount = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspTransferBySecField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcRspTransferBySecField_AccountID = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspTransferBySecField_Password = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcRspTransferBySecField_InstallID = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcRspTransferBySecField_FutureSerial = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspTransferBySecField_UserID = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcRspTransferBySecField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcRspTransferBySecField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_CurrencyID_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspTransferBySecField_TradeAmount = 0.0;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspTransferBySecField_FutureFetchAmount = 0.0;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    char CThostFtdcRspTransferBySecField_FeePayFlag = 0;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    double CThostFtdcRspTransferBySecField_CustFee = 0.0;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    double CThostFtdcRspTransferBySecField_BrokerFee = 0.0;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    char *CThostFtdcRspTransferBySecField_Message = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_Message_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcRspTransferBySecField_Digest = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcRspTransferBySecField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcRspTransferBySecField_DeviceID = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcRspTransferBySecField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcRspTransferBySecField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspTransferBySecField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcRspTransferBySecField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcRspTransferBySecField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcRspTransferBySecField_OperNo = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcRspTransferBySecField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcRspTransferBySecField_TID = 0;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    char CThostFtdcRspTransferBySecField_TransferStatus = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcRspTransferBySecField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcRspTransferBySecField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_ErrorMsg_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcRspTransferBySecField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcRspTransferBySecField_LongCustomerName_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcRspTransferBySecField_DRIdentityID = 0;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcRspTransferBySecField_SecFutureSerial = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iiciy#y#ii", (char **)kwlist
        , &CThostFtdcRspTransferBySecField_TradeCode, &CThostFtdcRspTransferBySecField_TradeCode_length
        , &CThostFtdcRspTransferBySecField_BankID, &CThostFtdcRspTransferBySecField_BankID_length
        , &CThostFtdcRspTransferBySecField_BankBranchID, &CThostFtdcRspTransferBySecField_BankBranchID_length
        , &CThostFtdcRspTransferBySecField_BrokerID, &CThostFtdcRspTransferBySecField_BrokerID_length
        , &CThostFtdcRspTransferBySecField_BrokerBranchID, &CThostFtdcRspTransferBySecField_BrokerBranchID_length
        , &CThostFtdcRspTransferBySecField_TradeDate, &CThostFtdcRspTransferBySecField_TradeDate_length
        , &CThostFtdcRspTransferBySecField_TradeTime, &CThostFtdcRspTransferBySecField_TradeTime_length
        , &CThostFtdcRspTransferBySecField_BankSerial, &CThostFtdcRspTransferBySecField_BankSerial_length
        , &CThostFtdcRspTransferBySecField_TradingDay, &CThostFtdcRspTransferBySecField_TradingDay_length
        , &CThostFtdcRspTransferBySecField_PlateSerial
        , &CThostFtdcRspTransferBySecField_LastFragment
        , &CThostFtdcRspTransferBySecField_SessionID
        , &CThostFtdcRspTransferBySecField_CustomerName, &CThostFtdcRspTransferBySecField_CustomerName_length
        , &CThostFtdcRspTransferBySecField_IdCardType
        , &CThostFtdcRspTransferBySecField_IdentifiedCardNo, &CThostFtdcRspTransferBySecField_IdentifiedCardNo_length
        , &CThostFtdcRspTransferBySecField_CustType
        , &CThostFtdcRspTransferBySecField_BankAccount, &CThostFtdcRspTransferBySecField_BankAccount_length
        , &CThostFtdcRspTransferBySecField_BankPassWord, &CThostFtdcRspTransferBySecField_BankPassWord_length
        , &CThostFtdcRspTransferBySecField_AccountID, &CThostFtdcRspTransferBySecField_AccountID_length
        , &CThostFtdcRspTransferBySecField_Password, &CThostFtdcRspTransferBySecField_Password_length
        , &CThostFtdcRspTransferBySecField_InstallID
        , &CThostFtdcRspTransferBySecField_FutureSerial
        , &CThostFtdcRspTransferBySecField_UserID, &CThostFtdcRspTransferBySecField_UserID_length
        , &CThostFtdcRspTransferBySecField_VerifyCertNoFlag
        , &CThostFtdcRspTransferBySecField_CurrencyID, &CThostFtdcRspTransferBySecField_CurrencyID_length
        , &CThostFtdcRspTransferBySecField_TradeAmount
        , &CThostFtdcRspTransferBySecField_FutureFetchAmount
        , &CThostFtdcRspTransferBySecField_FeePayFlag
        , &CThostFtdcRspTransferBySecField_CustFee
        , &CThostFtdcRspTransferBySecField_BrokerFee
        , &CThostFtdcRspTransferBySecField_Message, &CThostFtdcRspTransferBySecField_Message_length
        , &CThostFtdcRspTransferBySecField_Digest, &CThostFtdcRspTransferBySecField_Digest_length
        , &CThostFtdcRspTransferBySecField_BankAccType
        , &CThostFtdcRspTransferBySecField_DeviceID, &CThostFtdcRspTransferBySecField_DeviceID_length
        , &CThostFtdcRspTransferBySecField_BankSecuAccType
        , &CThostFtdcRspTransferBySecField_BrokerIDByBank, &CThostFtdcRspTransferBySecField_BrokerIDByBank_length
        , &CThostFtdcRspTransferBySecField_BankSecuAcc, &CThostFtdcRspTransferBySecField_BankSecuAcc_length
        , &CThostFtdcRspTransferBySecField_BankPwdFlag
        , &CThostFtdcRspTransferBySecField_SecuPwdFlag
        , &CThostFtdcRspTransferBySecField_OperNo, &CThostFtdcRspTransferBySecField_OperNo_length
        , &CThostFtdcRspTransferBySecField_RequestID
        , &CThostFtdcRspTransferBySecField_TID
        , &CThostFtdcRspTransferBySecField_TransferStatus
        , &CThostFtdcRspTransferBySecField_ErrorID
        , &CThostFtdcRspTransferBySecField_ErrorMsg, &CThostFtdcRspTransferBySecField_ErrorMsg_length
        , &CThostFtdcRspTransferBySecField_LongCustomerName, &CThostFtdcRspTransferBySecField_LongCustomerName_length
        , &CThostFtdcRspTransferBySecField_DRIdentityID
        , &CThostFtdcRspTransferBySecField_SecFutureSerial
    )) {
        return -1;
    }

    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcRspTransferBySecField_TradeCode != NULL ) {
        if(CThostFtdcRspTransferBySecField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcRspTransferBySecField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcRspTransferBySecField_TradeCode, CThostFtdcRspTransferBySecField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcRspTransferBySecField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcRspTransferBySecField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcRspTransferBySecField_BankID != NULL ) {
        if(CThostFtdcRspTransferBySecField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcRspTransferBySecField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcRspTransferBySecField_BankID, CThostFtdcRspTransferBySecField_BankID_length);
        strncpy(data->BankID, CThostFtdcRspTransferBySecField_BankID, sizeof(data->BankID));
        CThostFtdcRspTransferBySecField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcRspTransferBySecField_BankBranchID != NULL ) {
        if(CThostFtdcRspTransferBySecField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcRspTransferBySecField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcRspTransferBySecField_BankBranchID, CThostFtdcRspTransferBySecField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcRspTransferBySecField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcRspTransferBySecField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspTransferBySecField_BrokerID != NULL ) {
        if(CThostFtdcRspTransferBySecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspTransferBySecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspTransferBySecField_BrokerID, CThostFtdcRspTransferBySecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspTransferBySecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspTransferBySecField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcRspTransferBySecField_BrokerBranchID != NULL ) {
        if(CThostFtdcRspTransferBySecField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcRspTransferBySecField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcRspTransferBySecField_BrokerBranchID, CThostFtdcRspTransferBySecField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcRspTransferBySecField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcRspTransferBySecField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspTransferBySecField_TradeDate != NULL ) {
        if(CThostFtdcRspTransferBySecField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcRspTransferBySecField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcRspTransferBySecField_TradeDate, CThostFtdcRspTransferBySecField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcRspTransferBySecField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcRspTransferBySecField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcRspTransferBySecField_TradeTime != NULL ) {
        if(CThostFtdcRspTransferBySecField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcRspTransferBySecField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcRspTransferBySecField_TradeTime, CThostFtdcRspTransferBySecField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcRspTransferBySecField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcRspTransferBySecField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspTransferBySecField_BankSerial != NULL ) {
        if(CThostFtdcRspTransferBySecField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspTransferBySecField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcRspTransferBySecField_BankSerial, CThostFtdcRspTransferBySecField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcRspTransferBySecField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcRspTransferBySecField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspTransferBySecField_TradingDay != NULL ) {
        if(CThostFtdcRspTransferBySecField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspTransferBySecField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspTransferBySecField_TradingDay, CThostFtdcRspTransferBySecField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspTransferBySecField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspTransferBySecField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcRspTransferBySecField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcRspTransferBySecField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspTransferBySecField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcRspTransferBySecField_CustomerName != NULL ) {
        if(CThostFtdcRspTransferBySecField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcRspTransferBySecField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcRspTransferBySecField_CustomerName, CThostFtdcRspTransferBySecField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcRspTransferBySecField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcRspTransferBySecField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcRspTransferBySecField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcRspTransferBySecField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcRspTransferBySecField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcRspTransferBySecField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcRspTransferBySecField_IdentifiedCardNo, CThostFtdcRspTransferBySecField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcRspTransferBySecField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcRspTransferBySecField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcRspTransferBySecField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspTransferBySecField_BankAccount != NULL ) {
        if(CThostFtdcRspTransferBySecField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcRspTransferBySecField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcRspTransferBySecField_BankAccount, CThostFtdcRspTransferBySecField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcRspTransferBySecField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcRspTransferBySecField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspTransferBySecField_BankPassWord != NULL ) {
        if(CThostFtdcRspTransferBySecField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcRspTransferBySecField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcRspTransferBySecField_BankPassWord, CThostFtdcRspTransferBySecField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcRspTransferBySecField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcRspTransferBySecField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcRspTransferBySecField_AccountID != NULL ) {
        if(CThostFtdcRspTransferBySecField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcRspTransferBySecField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcRspTransferBySecField_AccountID, CThostFtdcRspTransferBySecField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcRspTransferBySecField_AccountID, sizeof(data->AccountID));
        CThostFtdcRspTransferBySecField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspTransferBySecField_Password != NULL ) {
        if(CThostFtdcRspTransferBySecField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcRspTransferBySecField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcRspTransferBySecField_Password, CThostFtdcRspTransferBySecField_Password_length);
        strncpy(data->Password, CThostFtdcRspTransferBySecField_Password, sizeof(data->Password));
        CThostFtdcRspTransferBySecField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcRspTransferBySecField_InstallID;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcRspTransferBySecField_FutureSerial;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspTransferBySecField_UserID != NULL ) {
        if(CThostFtdcRspTransferBySecField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspTransferBySecField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspTransferBySecField_UserID, CThostFtdcRspTransferBySecField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspTransferBySecField_UserID, sizeof(data->UserID));
        CThostFtdcRspTransferBySecField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcRspTransferBySecField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcRspTransferBySecField_CurrencyID != NULL ) {
        if(CThostFtdcRspTransferBySecField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcRspTransferBySecField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcRspTransferBySecField_CurrencyID, CThostFtdcRspTransferBySecField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcRspTransferBySecField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcRspTransferBySecField_CurrencyID = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    data->TradeAmount = CThostFtdcRspTransferBySecField_TradeAmount;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->FutureFetchAmount = CThostFtdcRspTransferBySecField_FutureFetchAmount;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    data->FeePayFlag = CThostFtdcRspTransferBySecField_FeePayFlag;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    data->CustFee = CThostFtdcRspTransferBySecField_CustFee;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    data->BrokerFee = CThostFtdcRspTransferBySecField_BrokerFee;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    if( CThostFtdcRspTransferBySecField_Message != NULL ) {
        if(CThostFtdcRspTransferBySecField_Message_length >= (Py_ssize_t)sizeof(data->Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is 128)", CThostFtdcRspTransferBySecField_Message_length);
            return -1;
        }
        // memset(data->Message, 0, sizeof(data->Message));
        // memcpy(data->Message, CThostFtdcRspTransferBySecField_Message, CThostFtdcRspTransferBySecField_Message_length);
        strncpy(data->Message, CThostFtdcRspTransferBySecField_Message, sizeof(data->Message));
        CThostFtdcRspTransferBySecField_Message = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcRspTransferBySecField_Digest != NULL ) {
        if(CThostFtdcRspTransferBySecField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcRspTransferBySecField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcRspTransferBySecField_Digest, CThostFtdcRspTransferBySecField_Digest_length);
        strncpy(data->Digest, CThostFtdcRspTransferBySecField_Digest, sizeof(data->Digest));
        CThostFtdcRspTransferBySecField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcRspTransferBySecField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcRspTransferBySecField_DeviceID != NULL ) {
        if(CThostFtdcRspTransferBySecField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcRspTransferBySecField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcRspTransferBySecField_DeviceID, CThostFtdcRspTransferBySecField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcRspTransferBySecField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcRspTransferBySecField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcRspTransferBySecField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcRspTransferBySecField_BrokerIDByBank != NULL ) {
        if(CThostFtdcRspTransferBySecField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcRspTransferBySecField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcRspTransferBySecField_BrokerIDByBank, CThostFtdcRspTransferBySecField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcRspTransferBySecField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcRspTransferBySecField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspTransferBySecField_BankSecuAcc != NULL ) {
        if(CThostFtdcRspTransferBySecField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcRspTransferBySecField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcRspTransferBySecField_BankSecuAcc, CThostFtdcRspTransferBySecField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcRspTransferBySecField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcRspTransferBySecField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcRspTransferBySecField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcRspTransferBySecField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcRspTransferBySecField_OperNo != NULL ) {
        if(CThostFtdcRspTransferBySecField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcRspTransferBySecField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcRspTransferBySecField_OperNo, CThostFtdcRspTransferBySecField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcRspTransferBySecField_OperNo, sizeof(data->OperNo));
        CThostFtdcRspTransferBySecField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcRspTransferBySecField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcRspTransferBySecField_TID;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    data->TransferStatus = CThostFtdcRspTransferBySecField_TransferStatus;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcRspTransferBySecField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcRspTransferBySecField_ErrorMsg != NULL ) {
        if(CThostFtdcRspTransferBySecField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcRspTransferBySecField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcRspTransferBySecField_ErrorMsg, CThostFtdcRspTransferBySecField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcRspTransferBySecField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcRspTransferBySecField_ErrorMsg = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcRspTransferBySecField_LongCustomerName != NULL ) {
        if(CThostFtdcRspTransferBySecField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcRspTransferBySecField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcRspTransferBySecField_LongCustomerName, CThostFtdcRspTransferBySecField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcRspTransferBySecField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcRspTransferBySecField_LongCustomerName = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcRspTransferBySecField_DRIdentityID;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->SecFutureSerial = CThostFtdcRspTransferBySecField_SecFutureSerial;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspTransferBySecFieldType_repr(PyObject *self) {

    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:i,s:y,s:y,s:i,s:i}"
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
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
        , "DRIdentityID", data->DRIdentityID
        , "SecFutureSerial", data->SecFutureSerial
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspTransferBySecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspTransferBySecField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 费用支付标志
/// typedef char TThostFtdcFeePayFlagType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_FeePayFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FeePayFlag), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_FeePayFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FeePayFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::FeePayFlag)) {
        PyErr_SetString(PyExc_ValueError, "FeePayFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->FeePayFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发送方给接收方的消息
/// typedef char TThostFtdcAddInfoType[129]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_Message(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Message, (Py_ssize_t)sizeof(data->Message));
    return PyBytes_FromString(data->Message);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_Message(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->Message, 0, sizeof(data->Message));
    // memcpy(data->Message, buf, len);
    strncpy(data->Message, buf, sizeof(data->Message));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 转账交易状态
/// typedef char TThostFtdcTransferStatusType
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_TransferStatus(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TransferStatus), 1);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_TransferStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TransferStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::TransferStatus)) {
        PyErr_SetString(PyExc_ValueError, "TransferStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    data->TransferStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcRspTransferBySecFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcRspTransferBySecFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspTransferBySecField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspTransferBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspTransferBySecFieldData>(self);
    CThostFtdcRspTransferBySecField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspTransferBySecFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.TradeAmount),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.FutureFetchAmount),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.CustFee),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.BrokerFee),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.ErrorID),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.DRIdentityID),
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
        .offset = offsetof(PyCThostFtdcRspTransferBySecFieldData, data.SecFutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次中心发起转账期货公司流水号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspTransferBySecFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_TradeCode,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankID,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankBranchID,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BrokerID,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_TradeDate,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_TradeTime,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankSerial,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_TradingDay,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_LastFragment,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_CustomerName,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_IdCardType,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_CustType,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankAccount,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankPassWord,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_AccountID,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_Password,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_UserID,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_CurrencyID,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    {
    .name = "FeePayFlag",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_FeePayFlag,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_FeePayFlag,
    .doc = PyDoc_STR("费用支付标志"),
    },
    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    {
    .name = "Message",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_Message,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_Message,
    .doc = PyDoc_STR("发送方给接收方的消息"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_Digest,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankAccType,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_DeviceID,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_OperNo,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    {
    .name = "TransferStatus",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_TransferStatus,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_TransferStatus,
    .doc = PyDoc_STR("转账交易状态"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_ErrorMsg,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcRspTransferBySecFieldType_get_LongCustomerName,
    .set = PyCThostFtdcRspTransferBySecFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspTransferBySecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspTransferBySecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("次中心发起的转帐交易回报")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspTransferBySecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspTransferBySecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspTransferBySecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspTransferBySecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspTransferBySecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspTransferBySecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("次中心发起的转帐交易回报")},
    {Py_tp_members, PyCThostFtdcRspTransferBySecFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspTransferBySecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspTransferBySecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspTransferBySecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspTransferBySecFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspTransferBySecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspTransferBySecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspTransferBySecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspTransferBySecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspTransferBySecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspTransferBySecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspTransferBySecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspTransferBySecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspTransferBySecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspTransferBySecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspTransferBySecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}