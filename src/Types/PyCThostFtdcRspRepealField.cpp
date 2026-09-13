
#include "PyCThostFtdcRspRepealField.h"

///冲正响应

static int PyCThostFtdcRspRepealFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "RepealTimeInterval", "RepealedTimes", "BankRepealFlag", "BrokerRepealFlag", "PlateRepealSerial", "BankRepealSerial", "FutureRepealSerial", "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "ErrorID", "ErrorMsg", "LongCustomerName", NULL };


    /// 冲正时间间隔
    /// typedef int TThostFtdcRepealTimeIntervalType
    int CThostFtdcRspRepealField_RepealTimeInterval = 0;

    /// 已经冲正次数
    /// typedef int TThostFtdcRepealedTimesType
    int CThostFtdcRspRepealField_RepealedTimes = 0;

    /// 银行冲正标志
    /// typedef char TThostFtdcBankRepealFlagType
    char CThostFtdcRspRepealField_BankRepealFlag = 0;

    /// 期商冲正标志
    /// typedef char TThostFtdcBrokerRepealFlagType
    char CThostFtdcRspRepealField_BrokerRepealFlag = 0;

    /// 被冲正平台流水号
    /// typedef int TThostFtdcPlateSerialType
    int CThostFtdcRspRepealField_PlateRepealSerial = 0;

    /// 被冲正银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspRepealField_BankRepealSerial = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BankRepealSerial_length = 0;

    /// 被冲正期货流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcRspRepealField_FutureRepealSerial = 0;

    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcRspRepealField_TradeCode = NULL;
    Py_ssize_t CThostFtdcRspRepealField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcRspRepealField_BankID = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcRspRepealField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspRepealField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcRspRepealField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspRepealField_TradeDate = NULL;
    Py_ssize_t CThostFtdcRspRepealField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcRspRepealField_TradeTime = NULL;
    Py_ssize_t CThostFtdcRspRepealField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspRepealField_BankSerial = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspRepealField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspRepealField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspRepealField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcRspRepealField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspRepealField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcRspRepealField_CustomerName = NULL;
    Py_ssize_t CThostFtdcRspRepealField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcRspRepealField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcRspRepealField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcRspRepealField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcRspRepealField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspRepealField_BankAccount = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspRepealField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcRspRepealField_AccountID = NULL;
    Py_ssize_t CThostFtdcRspRepealField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspRepealField_Password = NULL;
    Py_ssize_t CThostFtdcRspRepealField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcRspRepealField_InstallID = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcRspRepealField_FutureSerial = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspRepealField_UserID = NULL;
    Py_ssize_t CThostFtdcRspRepealField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcRspRepealField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcRspRepealField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcRspRepealField_CurrencyID_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspRepealField_TradeAmount = 0.0;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspRepealField_FutureFetchAmount = 0.0;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    char CThostFtdcRspRepealField_FeePayFlag = 0;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    double CThostFtdcRspRepealField_CustFee = 0.0;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    double CThostFtdcRspRepealField_BrokerFee = 0.0;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    char *CThostFtdcRspRepealField_Message = NULL;
    Py_ssize_t CThostFtdcRspRepealField_Message_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcRspRepealField_Digest = NULL;
    Py_ssize_t CThostFtdcRspRepealField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcRspRepealField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcRspRepealField_DeviceID = NULL;
    Py_ssize_t CThostFtdcRspRepealField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcRspRepealField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcRspRepealField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspRepealField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcRspRepealField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcRspRepealField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcRspRepealField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcRspRepealField_OperNo = NULL;
    Py_ssize_t CThostFtdcRspRepealField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcRspRepealField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcRspRepealField_TID = 0;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    char CThostFtdcRspRepealField_TransferStatus = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcRspRepealField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcRspRepealField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcRspRepealField_ErrorMsg_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcRspRepealField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcRspRepealField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iicciy#iy#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iiciy#y#", (char **)kwlist
        , &CThostFtdcRspRepealField_RepealTimeInterval
        , &CThostFtdcRspRepealField_RepealedTimes
        , &CThostFtdcRspRepealField_BankRepealFlag
        , &CThostFtdcRspRepealField_BrokerRepealFlag
        , &CThostFtdcRspRepealField_PlateRepealSerial
        , &CThostFtdcRspRepealField_BankRepealSerial, &CThostFtdcRspRepealField_BankRepealSerial_length
        , &CThostFtdcRspRepealField_FutureRepealSerial
        , &CThostFtdcRspRepealField_TradeCode, &CThostFtdcRspRepealField_TradeCode_length
        , &CThostFtdcRspRepealField_BankID, &CThostFtdcRspRepealField_BankID_length
        , &CThostFtdcRspRepealField_BankBranchID, &CThostFtdcRspRepealField_BankBranchID_length
        , &CThostFtdcRspRepealField_BrokerID, &CThostFtdcRspRepealField_BrokerID_length
        , &CThostFtdcRspRepealField_BrokerBranchID, &CThostFtdcRspRepealField_BrokerBranchID_length
        , &CThostFtdcRspRepealField_TradeDate, &CThostFtdcRspRepealField_TradeDate_length
        , &CThostFtdcRspRepealField_TradeTime, &CThostFtdcRspRepealField_TradeTime_length
        , &CThostFtdcRspRepealField_BankSerial, &CThostFtdcRspRepealField_BankSerial_length
        , &CThostFtdcRspRepealField_TradingDay, &CThostFtdcRspRepealField_TradingDay_length
        , &CThostFtdcRspRepealField_PlateSerial
        , &CThostFtdcRspRepealField_LastFragment
        , &CThostFtdcRspRepealField_SessionID
        , &CThostFtdcRspRepealField_CustomerName, &CThostFtdcRspRepealField_CustomerName_length
        , &CThostFtdcRspRepealField_IdCardType
        , &CThostFtdcRspRepealField_IdentifiedCardNo, &CThostFtdcRspRepealField_IdentifiedCardNo_length
        , &CThostFtdcRspRepealField_CustType
        , &CThostFtdcRspRepealField_BankAccount, &CThostFtdcRspRepealField_BankAccount_length
        , &CThostFtdcRspRepealField_BankPassWord, &CThostFtdcRspRepealField_BankPassWord_length
        , &CThostFtdcRspRepealField_AccountID, &CThostFtdcRspRepealField_AccountID_length
        , &CThostFtdcRspRepealField_Password, &CThostFtdcRspRepealField_Password_length
        , &CThostFtdcRspRepealField_InstallID
        , &CThostFtdcRspRepealField_FutureSerial
        , &CThostFtdcRspRepealField_UserID, &CThostFtdcRspRepealField_UserID_length
        , &CThostFtdcRspRepealField_VerifyCertNoFlag
        , &CThostFtdcRspRepealField_CurrencyID, &CThostFtdcRspRepealField_CurrencyID_length
        , &CThostFtdcRspRepealField_TradeAmount
        , &CThostFtdcRspRepealField_FutureFetchAmount
        , &CThostFtdcRspRepealField_FeePayFlag
        , &CThostFtdcRspRepealField_CustFee
        , &CThostFtdcRspRepealField_BrokerFee
        , &CThostFtdcRspRepealField_Message, &CThostFtdcRspRepealField_Message_length
        , &CThostFtdcRspRepealField_Digest, &CThostFtdcRspRepealField_Digest_length
        , &CThostFtdcRspRepealField_BankAccType
        , &CThostFtdcRspRepealField_DeviceID, &CThostFtdcRspRepealField_DeviceID_length
        , &CThostFtdcRspRepealField_BankSecuAccType
        , &CThostFtdcRspRepealField_BrokerIDByBank, &CThostFtdcRspRepealField_BrokerIDByBank_length
        , &CThostFtdcRspRepealField_BankSecuAcc, &CThostFtdcRspRepealField_BankSecuAcc_length
        , &CThostFtdcRspRepealField_BankPwdFlag
        , &CThostFtdcRspRepealField_SecuPwdFlag
        , &CThostFtdcRspRepealField_OperNo, &CThostFtdcRspRepealField_OperNo_length
        , &CThostFtdcRspRepealField_RequestID
        , &CThostFtdcRspRepealField_TID
        , &CThostFtdcRspRepealField_TransferStatus
        , &CThostFtdcRspRepealField_ErrorID
        , &CThostFtdcRspRepealField_ErrorMsg, &CThostFtdcRspRepealField_ErrorMsg_length
        , &CThostFtdcRspRepealField_LongCustomerName, &CThostFtdcRspRepealField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);


    /// 冲正时间间隔
    /// typedef int TThostFtdcRepealTimeIntervalType
    data->RepealTimeInterval = CThostFtdcRspRepealField_RepealTimeInterval;

    /// 已经冲正次数
    /// typedef int TThostFtdcRepealedTimesType
    data->RepealedTimes = CThostFtdcRspRepealField_RepealedTimes;

    /// 银行冲正标志
    /// typedef char TThostFtdcBankRepealFlagType
    data->BankRepealFlag = CThostFtdcRspRepealField_BankRepealFlag;

    /// 期商冲正标志
    /// typedef char TThostFtdcBrokerRepealFlagType
    data->BrokerRepealFlag = CThostFtdcRspRepealField_BrokerRepealFlag;

    /// 被冲正平台流水号
    /// typedef int TThostFtdcPlateSerialType
    data->PlateRepealSerial = CThostFtdcRspRepealField_PlateRepealSerial;

    /// 被冲正银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspRepealField_BankRepealSerial != NULL ) {
        if(CThostFtdcRspRepealField_BankRepealSerial_length >= (Py_ssize_t)sizeof(data->BankRepealSerial)) {
            PyErr_Format(PyExc_ValueError, "BankRepealSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspRepealField_BankRepealSerial_length);
            return -1;
        }
        // memset(data->BankRepealSerial, 0, sizeof(data->BankRepealSerial));
        // memcpy(data->BankRepealSerial, CThostFtdcRspRepealField_BankRepealSerial, CThostFtdcRspRepealField_BankRepealSerial_length);
        strncpy(data->BankRepealSerial, CThostFtdcRspRepealField_BankRepealSerial, sizeof(data->BankRepealSerial));
        CThostFtdcRspRepealField_BankRepealSerial = NULL;
    }

    /// 被冲正期货流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureRepealSerial = CThostFtdcRspRepealField_FutureRepealSerial;

    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcRspRepealField_TradeCode != NULL ) {
        if(CThostFtdcRspRepealField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcRspRepealField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcRspRepealField_TradeCode, CThostFtdcRspRepealField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcRspRepealField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcRspRepealField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcRspRepealField_BankID != NULL ) {
        if(CThostFtdcRspRepealField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcRspRepealField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcRspRepealField_BankID, CThostFtdcRspRepealField_BankID_length);
        strncpy(data->BankID, CThostFtdcRspRepealField_BankID, sizeof(data->BankID));
        CThostFtdcRspRepealField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcRspRepealField_BankBranchID != NULL ) {
        if(CThostFtdcRspRepealField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcRspRepealField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcRspRepealField_BankBranchID, CThostFtdcRspRepealField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcRspRepealField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcRspRepealField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspRepealField_BrokerID != NULL ) {
        if(CThostFtdcRspRepealField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspRepealField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspRepealField_BrokerID, CThostFtdcRspRepealField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspRepealField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspRepealField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcRspRepealField_BrokerBranchID != NULL ) {
        if(CThostFtdcRspRepealField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcRspRepealField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcRspRepealField_BrokerBranchID, CThostFtdcRspRepealField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcRspRepealField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcRspRepealField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspRepealField_TradeDate != NULL ) {
        if(CThostFtdcRspRepealField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcRspRepealField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcRspRepealField_TradeDate, CThostFtdcRspRepealField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcRspRepealField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcRspRepealField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcRspRepealField_TradeTime != NULL ) {
        if(CThostFtdcRspRepealField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcRspRepealField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcRspRepealField_TradeTime, CThostFtdcRspRepealField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcRspRepealField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcRspRepealField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspRepealField_BankSerial != NULL ) {
        if(CThostFtdcRspRepealField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspRepealField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcRspRepealField_BankSerial, CThostFtdcRspRepealField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcRspRepealField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcRspRepealField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspRepealField_TradingDay != NULL ) {
        if(CThostFtdcRspRepealField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspRepealField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspRepealField_TradingDay, CThostFtdcRspRepealField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspRepealField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspRepealField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcRspRepealField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcRspRepealField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspRepealField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcRspRepealField_CustomerName != NULL ) {
        if(CThostFtdcRspRepealField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcRspRepealField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcRspRepealField_CustomerName, CThostFtdcRspRepealField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcRspRepealField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcRspRepealField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcRspRepealField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcRspRepealField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcRspRepealField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcRspRepealField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcRspRepealField_IdentifiedCardNo, CThostFtdcRspRepealField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcRspRepealField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcRspRepealField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcRspRepealField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspRepealField_BankAccount != NULL ) {
        if(CThostFtdcRspRepealField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcRspRepealField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcRspRepealField_BankAccount, CThostFtdcRspRepealField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcRspRepealField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcRspRepealField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspRepealField_BankPassWord != NULL ) {
        if(CThostFtdcRspRepealField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcRspRepealField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcRspRepealField_BankPassWord, CThostFtdcRspRepealField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcRspRepealField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcRspRepealField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcRspRepealField_AccountID != NULL ) {
        if(CThostFtdcRspRepealField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcRspRepealField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcRspRepealField_AccountID, CThostFtdcRspRepealField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcRspRepealField_AccountID, sizeof(data->AccountID));
        CThostFtdcRspRepealField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspRepealField_Password != NULL ) {
        if(CThostFtdcRspRepealField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcRspRepealField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcRspRepealField_Password, CThostFtdcRspRepealField_Password_length);
        strncpy(data->Password, CThostFtdcRspRepealField_Password, sizeof(data->Password));
        CThostFtdcRspRepealField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcRspRepealField_InstallID;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcRspRepealField_FutureSerial;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspRepealField_UserID != NULL ) {
        if(CThostFtdcRspRepealField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspRepealField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspRepealField_UserID, CThostFtdcRspRepealField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspRepealField_UserID, sizeof(data->UserID));
        CThostFtdcRspRepealField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcRspRepealField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcRspRepealField_CurrencyID != NULL ) {
        if(CThostFtdcRspRepealField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcRspRepealField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcRspRepealField_CurrencyID, CThostFtdcRspRepealField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcRspRepealField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcRspRepealField_CurrencyID = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    data->TradeAmount = CThostFtdcRspRepealField_TradeAmount;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->FutureFetchAmount = CThostFtdcRspRepealField_FutureFetchAmount;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    data->FeePayFlag = CThostFtdcRspRepealField_FeePayFlag;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    data->CustFee = CThostFtdcRspRepealField_CustFee;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    data->BrokerFee = CThostFtdcRspRepealField_BrokerFee;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    if( CThostFtdcRspRepealField_Message != NULL ) {
        if(CThostFtdcRspRepealField_Message_length >= (Py_ssize_t)sizeof(data->Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is 128)", CThostFtdcRspRepealField_Message_length);
            return -1;
        }
        // memset(data->Message, 0, sizeof(data->Message));
        // memcpy(data->Message, CThostFtdcRspRepealField_Message, CThostFtdcRspRepealField_Message_length);
        strncpy(data->Message, CThostFtdcRspRepealField_Message, sizeof(data->Message));
        CThostFtdcRspRepealField_Message = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcRspRepealField_Digest != NULL ) {
        if(CThostFtdcRspRepealField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcRspRepealField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcRspRepealField_Digest, CThostFtdcRspRepealField_Digest_length);
        strncpy(data->Digest, CThostFtdcRspRepealField_Digest, sizeof(data->Digest));
        CThostFtdcRspRepealField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcRspRepealField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcRspRepealField_DeviceID != NULL ) {
        if(CThostFtdcRspRepealField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcRspRepealField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcRspRepealField_DeviceID, CThostFtdcRspRepealField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcRspRepealField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcRspRepealField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcRspRepealField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcRspRepealField_BrokerIDByBank != NULL ) {
        if(CThostFtdcRspRepealField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcRspRepealField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcRspRepealField_BrokerIDByBank, CThostFtdcRspRepealField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcRspRepealField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcRspRepealField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspRepealField_BankSecuAcc != NULL ) {
        if(CThostFtdcRspRepealField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcRspRepealField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcRspRepealField_BankSecuAcc, CThostFtdcRspRepealField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcRspRepealField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcRspRepealField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcRspRepealField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcRspRepealField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcRspRepealField_OperNo != NULL ) {
        if(CThostFtdcRspRepealField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcRspRepealField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcRspRepealField_OperNo, CThostFtdcRspRepealField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcRspRepealField_OperNo, sizeof(data->OperNo));
        CThostFtdcRspRepealField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcRspRepealField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcRspRepealField_TID;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    data->TransferStatus = CThostFtdcRspRepealField_TransferStatus;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcRspRepealField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcRspRepealField_ErrorMsg != NULL ) {
        if(CThostFtdcRspRepealField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcRspRepealField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcRspRepealField_ErrorMsg, CThostFtdcRspRepealField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcRspRepealField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcRspRepealField_ErrorMsg = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcRspRepealField_LongCustomerName != NULL ) {
        if(CThostFtdcRspRepealField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcRspRepealField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcRspRepealField_LongCustomerName, CThostFtdcRspRepealField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcRspRepealField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcRspRepealField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspRepealFieldType_repr(PyObject *self) {

    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:i,s:y,s:y}"
        , "RepealTimeInterval", data->RepealTimeInterval
        , "RepealedTimes", data->RepealedTimes
        , "BankRepealFlag", data->BankRepealFlag
        , "BrokerRepealFlag", data->BrokerRepealFlag
        , "PlateRepealSerial", data->PlateRepealSerial
        , "BankRepealSerial", data->BankRepealSerial//, (Py_ssize_t)sizeof(data->BankRepealSerial)
        , "FutureRepealSerial", data->FutureRepealSerial
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspRepealField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspRepealField repr");
        return NULL;
    }

    return repr;
}


/// 银行冲正标志
/// typedef char TThostFtdcBankRepealFlagType
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankRepealFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankRepealFlag), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_BankRepealFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankRepealFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankRepealFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankRepealFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->BankRepealFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商冲正标志
/// typedef char TThostFtdcBrokerRepealFlagType
static PyObject *PyCThostFtdcRspRepealFieldType_get_BrokerRepealFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BrokerRepealFlag), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_BrokerRepealFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerRepealFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BrokerRepealFlag)) {
        PyErr_SetString(PyExc_ValueError, "BrokerRepealFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->BrokerRepealFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 被冲正银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankRepealSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankRepealSerial, (Py_ssize_t)sizeof(data->BankRepealSerial));
    return PyBytes_FromString(data->BankRepealSerial);
}

static int PyCThostFtdcRspRepealFieldType_set_BankRepealSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankRepealSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankRepealSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankRepealSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BankRepealSerial, 0, sizeof(data->BankRepealSerial));
    // memcpy(data->BankRepealSerial, buf, len);
    strncpy(data->BankRepealSerial, buf, sizeof(data->BankRepealSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcRspRepealFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcRspRepealFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcRspRepealFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcRspRepealFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspRepealFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcRspRepealFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspRepealFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcRspRepealFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcRspRepealFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcRspRepealFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcRspRepealFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspRepealFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspRepealFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcRspRepealFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcRspRepealFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcRspRepealFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcRspRepealFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcRspRepealFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcRspRepealFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcRspRepealFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcRspRepealFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcRspRepealFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcRspRepealFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcRspRepealFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspRepealFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcRspRepealFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspRepealFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspRepealFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcRspRepealFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcRspRepealFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcRspRepealFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 费用支付标志
/// typedef char TThostFtdcFeePayFlagType
static PyObject *PyCThostFtdcRspRepealFieldType_get_FeePayFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FeePayFlag), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_FeePayFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FeePayFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::FeePayFlag)) {
        PyErr_SetString(PyExc_ValueError, "FeePayFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->FeePayFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发送方给接收方的消息
/// typedef char TThostFtdcAddInfoType[129]
static PyObject *PyCThostFtdcRspRepealFieldType_get_Message(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Message, (Py_ssize_t)sizeof(data->Message));
    return PyBytes_FromString(data->Message);
}

static int PyCThostFtdcRspRepealFieldType_set_Message(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->Message, 0, sizeof(data->Message));
    // memcpy(data->Message, buf, len);
    strncpy(data->Message, buf, sizeof(data->Message));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcRspRepealFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcRspRepealFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcRspRepealFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcRspRepealFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcRspRepealFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcRspRepealFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcRspRepealFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcRspRepealFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcRspRepealFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcRspRepealFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 转账交易状态
/// typedef char TThostFtdcTransferStatusType
static PyObject *PyCThostFtdcRspRepealFieldType_get_TransferStatus(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TransferStatus), 1);
}

static int PyCThostFtdcRspRepealFieldType_set_TransferStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TransferStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspRepealField::TransferStatus)) {
        PyErr_SetString(PyExc_ValueError, "TransferStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    data->TransferStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcRspRepealFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcRspRepealFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcRspRepealFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcRspRepealFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspRepealField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(self);
    CThostFtdcRspRepealField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspRepealFieldType_members[] = {
    /// 冲正时间间隔
    /// typedef int TThostFtdcRepealTimeIntervalType
    {
        .name = "RepealTimeInterval",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.RepealTimeInterval),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冲正时间间隔")
    },
    /// 已经冲正次数
    /// typedef int TThostFtdcRepealedTimesType
    {
        .name = "RepealedTimes",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.RepealedTimes),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("已经冲正次数")
    },
    /// 被冲正平台流水号
    /// typedef int TThostFtdcPlateSerialType
    {
        .name = "PlateRepealSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.PlateRepealSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("被冲正平台流水号")
    },
    /// 被冲正期货流水号
    /// typedef int TThostFtdcFutureSerialType
    {
        .name = "FutureRepealSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.FutureRepealSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("被冲正期货流水号")
    },
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.TradeAmount),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.FutureFetchAmount),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.CustFee),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.BrokerFee),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcRspRepealFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspRepealFieldType_getsets[] = {
    /// 银行冲正标志
    /// typedef char TThostFtdcBankRepealFlagType
    {
    .name = "BankRepealFlag",
    .get = PyCThostFtdcRspRepealFieldType_get_BankRepealFlag,
    .set = PyCThostFtdcRspRepealFieldType_set_BankRepealFlag,
    .doc = PyDoc_STR("银行冲正标志"),
    },
    /// 期商冲正标志
    /// typedef char TThostFtdcBrokerRepealFlagType
    {
    .name = "BrokerRepealFlag",
    .get = PyCThostFtdcRspRepealFieldType_get_BrokerRepealFlag,
    .set = PyCThostFtdcRspRepealFieldType_set_BrokerRepealFlag,
    .doc = PyDoc_STR("期商冲正标志"),
    },
    /// 被冲正银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankRepealSerial",
    .get = PyCThostFtdcRspRepealFieldType_get_BankRepealSerial,
    .set = PyCThostFtdcRspRepealFieldType_set_BankRepealSerial,
    .doc = PyDoc_STR("被冲正银行流水号"),
    },
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcRspRepealFieldType_get_TradeCode,
    .set = PyCThostFtdcRspRepealFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcRspRepealFieldType_get_BankID,
    .set = PyCThostFtdcRspRepealFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcRspRepealFieldType_get_BankBranchID,
    .set = PyCThostFtdcRspRepealFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspRepealFieldType_get_BrokerID,
    .set = PyCThostFtdcRspRepealFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcRspRepealFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcRspRepealFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcRspRepealFieldType_get_TradeDate,
    .set = PyCThostFtdcRspRepealFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcRspRepealFieldType_get_TradeTime,
    .set = PyCThostFtdcRspRepealFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcRspRepealFieldType_get_BankSerial,
    .set = PyCThostFtdcRspRepealFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspRepealFieldType_get_TradingDay,
    .set = PyCThostFtdcRspRepealFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcRspRepealFieldType_get_LastFragment,
    .set = PyCThostFtdcRspRepealFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcRspRepealFieldType_get_CustomerName,
    .set = PyCThostFtdcRspRepealFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcRspRepealFieldType_get_IdCardType,
    .set = PyCThostFtdcRspRepealFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcRspRepealFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcRspRepealFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcRspRepealFieldType_get_CustType,
    .set = PyCThostFtdcRspRepealFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcRspRepealFieldType_get_BankAccount,
    .set = PyCThostFtdcRspRepealFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcRspRepealFieldType_get_BankPassWord,
    .set = PyCThostFtdcRspRepealFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcRspRepealFieldType_get_AccountID,
    .set = PyCThostFtdcRspRepealFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcRspRepealFieldType_get_Password,
    .set = PyCThostFtdcRspRepealFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspRepealFieldType_get_UserID,
    .set = PyCThostFtdcRspRepealFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcRspRepealFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcRspRepealFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcRspRepealFieldType_get_CurrencyID,
    .set = PyCThostFtdcRspRepealFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    {
    .name = "FeePayFlag",
    .get = PyCThostFtdcRspRepealFieldType_get_FeePayFlag,
    .set = PyCThostFtdcRspRepealFieldType_set_FeePayFlag,
    .doc = PyDoc_STR("费用支付标志"),
    },
    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    {
    .name = "Message",
    .get = PyCThostFtdcRspRepealFieldType_get_Message,
    .set = PyCThostFtdcRspRepealFieldType_set_Message,
    .doc = PyDoc_STR("发送方给接收方的消息"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcRspRepealFieldType_get_Digest,
    .set = PyCThostFtdcRspRepealFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcRspRepealFieldType_get_BankAccType,
    .set = PyCThostFtdcRspRepealFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcRspRepealFieldType_get_DeviceID,
    .set = PyCThostFtdcRspRepealFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcRspRepealFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcRspRepealFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcRspRepealFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcRspRepealFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcRspRepealFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcRspRepealFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcRspRepealFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcRspRepealFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcRspRepealFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcRspRepealFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcRspRepealFieldType_get_OperNo,
    .set = PyCThostFtdcRspRepealFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    {
    .name = "TransferStatus",
    .get = PyCThostFtdcRspRepealFieldType_get_TransferStatus,
    .set = PyCThostFtdcRspRepealFieldType_set_TransferStatus,
    .doc = PyDoc_STR("转账交易状态"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcRspRepealFieldType_get_ErrorMsg,
    .set = PyCThostFtdcRspRepealFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcRspRepealFieldType_get_LongCustomerName,
    .set = PyCThostFtdcRspRepealFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspRepealFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspRepealField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("冲正响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspRepealFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspRepealFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspRepealFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspRepealFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspRepealFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspRepealFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("冲正响应")},
    {Py_tp_members, PyCThostFtdcRspRepealFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspRepealFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspRepealFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspRepealFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspRepealFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspRepealField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspRepealFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspRepealFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspRepealFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspRepealFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspRepealFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspRepealFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspRepealFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspRepealFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspRepealField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspRepealField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}