
#include "PyCThostFtdcReqRepealField.h"

///冲正请求

static int PyCThostFtdcReqRepealFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "RepealTimeInterval", "RepealedTimes", "BankRepealFlag", "BrokerRepealFlag", "PlateRepealSerial", "BankRepealSerial", "FutureRepealSerial", "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "LongCustomerName", NULL };


    /// 冲正时间间隔
    /// typedef int TThostFtdcRepealTimeIntervalType
    int CThostFtdcReqRepealField_RepealTimeInterval = 0;

    /// 已经冲正次数
    /// typedef int TThostFtdcRepealedTimesType
    int CThostFtdcReqRepealField_RepealedTimes = 0;

    /// 银行冲正标志
    /// typedef char TThostFtdcBankRepealFlagType
    char CThostFtdcReqRepealField_BankRepealFlag = 0;

    /// 期商冲正标志
    /// typedef char TThostFtdcBrokerRepealFlagType
    char CThostFtdcReqRepealField_BrokerRepealFlag = 0;

    /// 被冲正平台流水号
    /// typedef int TThostFtdcPlateSerialType
    int CThostFtdcReqRepealField_PlateRepealSerial = 0;

    /// 被冲正银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqRepealField_BankRepealSerial = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BankRepealSerial_length = 0;

    /// 被冲正期货流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcReqRepealField_FutureRepealSerial = 0;

    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqRepealField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqRepealField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqRepealField_BankID = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqRepealField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqRepealField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqRepealField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqRepealField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqRepealField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqRepealField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqRepealField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqRepealField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqRepealField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqRepealField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqRepealField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqRepealField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqRepealField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcReqRepealField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReqRepealField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReqRepealField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReqRepealField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReqRepealField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReqRepealField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqRepealField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqRepealField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcReqRepealField_AccountID = NULL;
    Py_ssize_t CThostFtdcReqRepealField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqRepealField_Password = NULL;
    Py_ssize_t CThostFtdcReqRepealField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReqRepealField_InstallID = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcReqRepealField_FutureSerial = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqRepealField_UserID = NULL;
    Py_ssize_t CThostFtdcReqRepealField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcReqRepealField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReqRepealField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReqRepealField_CurrencyID_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcReqRepealField_TradeAmount = 0.0;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcReqRepealField_FutureFetchAmount = 0.0;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    char CThostFtdcReqRepealField_FeePayFlag = 0;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    double CThostFtdcReqRepealField_CustFee = 0.0;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    double CThostFtdcReqRepealField_BrokerFee = 0.0;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    char *CThostFtdcReqRepealField_Message = NULL;
    Py_ssize_t CThostFtdcReqRepealField_Message_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqRepealField_Digest = NULL;
    Py_ssize_t CThostFtdcReqRepealField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqRepealField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcReqRepealField_DeviceID = NULL;
    Py_ssize_t CThostFtdcReqRepealField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqRepealField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReqRepealField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqRepealField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcReqRepealField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqRepealField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqRepealField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcReqRepealField_OperNo = NULL;
    Py_ssize_t CThostFtdcReqRepealField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcReqRepealField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReqRepealField_TID = 0;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    char CThostFtdcReqRepealField_TransferStatus = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReqRepealField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcReqRepealField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iicciy#iy#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iicy#", (char **)kwlist
        , &CThostFtdcReqRepealField_RepealTimeInterval
        , &CThostFtdcReqRepealField_RepealedTimes
        , &CThostFtdcReqRepealField_BankRepealFlag
        , &CThostFtdcReqRepealField_BrokerRepealFlag
        , &CThostFtdcReqRepealField_PlateRepealSerial
        , &CThostFtdcReqRepealField_BankRepealSerial, &CThostFtdcReqRepealField_BankRepealSerial_length
        , &CThostFtdcReqRepealField_FutureRepealSerial
        , &CThostFtdcReqRepealField_TradeCode, &CThostFtdcReqRepealField_TradeCode_length
        , &CThostFtdcReqRepealField_BankID, &CThostFtdcReqRepealField_BankID_length
        , &CThostFtdcReqRepealField_BankBranchID, &CThostFtdcReqRepealField_BankBranchID_length
        , &CThostFtdcReqRepealField_BrokerID, &CThostFtdcReqRepealField_BrokerID_length
        , &CThostFtdcReqRepealField_BrokerBranchID, &CThostFtdcReqRepealField_BrokerBranchID_length
        , &CThostFtdcReqRepealField_TradeDate, &CThostFtdcReqRepealField_TradeDate_length
        , &CThostFtdcReqRepealField_TradeTime, &CThostFtdcReqRepealField_TradeTime_length
        , &CThostFtdcReqRepealField_BankSerial, &CThostFtdcReqRepealField_BankSerial_length
        , &CThostFtdcReqRepealField_TradingDay, &CThostFtdcReqRepealField_TradingDay_length
        , &CThostFtdcReqRepealField_PlateSerial
        , &CThostFtdcReqRepealField_LastFragment
        , &CThostFtdcReqRepealField_SessionID
        , &CThostFtdcReqRepealField_CustomerName, &CThostFtdcReqRepealField_CustomerName_length
        , &CThostFtdcReqRepealField_IdCardType
        , &CThostFtdcReqRepealField_IdentifiedCardNo, &CThostFtdcReqRepealField_IdentifiedCardNo_length
        , &CThostFtdcReqRepealField_CustType
        , &CThostFtdcReqRepealField_BankAccount, &CThostFtdcReqRepealField_BankAccount_length
        , &CThostFtdcReqRepealField_BankPassWord, &CThostFtdcReqRepealField_BankPassWord_length
        , &CThostFtdcReqRepealField_AccountID, &CThostFtdcReqRepealField_AccountID_length
        , &CThostFtdcReqRepealField_Password, &CThostFtdcReqRepealField_Password_length
        , &CThostFtdcReqRepealField_InstallID
        , &CThostFtdcReqRepealField_FutureSerial
        , &CThostFtdcReqRepealField_UserID, &CThostFtdcReqRepealField_UserID_length
        , &CThostFtdcReqRepealField_VerifyCertNoFlag
        , &CThostFtdcReqRepealField_CurrencyID, &CThostFtdcReqRepealField_CurrencyID_length
        , &CThostFtdcReqRepealField_TradeAmount
        , &CThostFtdcReqRepealField_FutureFetchAmount
        , &CThostFtdcReqRepealField_FeePayFlag
        , &CThostFtdcReqRepealField_CustFee
        , &CThostFtdcReqRepealField_BrokerFee
        , &CThostFtdcReqRepealField_Message, &CThostFtdcReqRepealField_Message_length
        , &CThostFtdcReqRepealField_Digest, &CThostFtdcReqRepealField_Digest_length
        , &CThostFtdcReqRepealField_BankAccType
        , &CThostFtdcReqRepealField_DeviceID, &CThostFtdcReqRepealField_DeviceID_length
        , &CThostFtdcReqRepealField_BankSecuAccType
        , &CThostFtdcReqRepealField_BrokerIDByBank, &CThostFtdcReqRepealField_BrokerIDByBank_length
        , &CThostFtdcReqRepealField_BankSecuAcc, &CThostFtdcReqRepealField_BankSecuAcc_length
        , &CThostFtdcReqRepealField_BankPwdFlag
        , &CThostFtdcReqRepealField_SecuPwdFlag
        , &CThostFtdcReqRepealField_OperNo, &CThostFtdcReqRepealField_OperNo_length
        , &CThostFtdcReqRepealField_RequestID
        , &CThostFtdcReqRepealField_TID
        , &CThostFtdcReqRepealField_TransferStatus
        , &CThostFtdcReqRepealField_LongCustomerName, &CThostFtdcReqRepealField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);


    /// 冲正时间间隔
    /// typedef int TThostFtdcRepealTimeIntervalType
    data->RepealTimeInterval = CThostFtdcReqRepealField_RepealTimeInterval;

    /// 已经冲正次数
    /// typedef int TThostFtdcRepealedTimesType
    data->RepealedTimes = CThostFtdcReqRepealField_RepealedTimes;

    /// 银行冲正标志
    /// typedef char TThostFtdcBankRepealFlagType
    data->BankRepealFlag = CThostFtdcReqRepealField_BankRepealFlag;

    /// 期商冲正标志
    /// typedef char TThostFtdcBrokerRepealFlagType
    data->BrokerRepealFlag = CThostFtdcReqRepealField_BrokerRepealFlag;

    /// 被冲正平台流水号
    /// typedef int TThostFtdcPlateSerialType
    data->PlateRepealSerial = CThostFtdcReqRepealField_PlateRepealSerial;

    /// 被冲正银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqRepealField_BankRepealSerial != NULL ) {
        if(CThostFtdcReqRepealField_BankRepealSerial_length >= (Py_ssize_t)sizeof(data->BankRepealSerial)) {
            PyErr_Format(PyExc_ValueError, "BankRepealSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqRepealField_BankRepealSerial_length);
            return -1;
        }
        // memset(data->BankRepealSerial, 0, sizeof(data->BankRepealSerial));
        // memcpy(data->BankRepealSerial, CThostFtdcReqRepealField_BankRepealSerial, CThostFtdcReqRepealField_BankRepealSerial_length);
        strncpy(data->BankRepealSerial, CThostFtdcReqRepealField_BankRepealSerial, sizeof(data->BankRepealSerial));
        CThostFtdcReqRepealField_BankRepealSerial = NULL;
    }

    /// 被冲正期货流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureRepealSerial = CThostFtdcReqRepealField_FutureRepealSerial;

    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqRepealField_TradeCode != NULL ) {
        if(CThostFtdcReqRepealField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqRepealField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqRepealField_TradeCode, CThostFtdcReqRepealField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqRepealField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqRepealField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqRepealField_BankID != NULL ) {
        if(CThostFtdcReqRepealField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqRepealField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqRepealField_BankID, CThostFtdcReqRepealField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqRepealField_BankID, sizeof(data->BankID));
        CThostFtdcReqRepealField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqRepealField_BankBranchID != NULL ) {
        if(CThostFtdcReqRepealField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqRepealField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqRepealField_BankBranchID, CThostFtdcReqRepealField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqRepealField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqRepealField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqRepealField_BrokerID != NULL ) {
        if(CThostFtdcReqRepealField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqRepealField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqRepealField_BrokerID, CThostFtdcReqRepealField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqRepealField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqRepealField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqRepealField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqRepealField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqRepealField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqRepealField_BrokerBranchID, CThostFtdcReqRepealField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqRepealField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqRepealField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqRepealField_TradeDate != NULL ) {
        if(CThostFtdcReqRepealField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqRepealField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqRepealField_TradeDate, CThostFtdcReqRepealField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqRepealField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqRepealField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqRepealField_TradeTime != NULL ) {
        if(CThostFtdcReqRepealField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqRepealField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqRepealField_TradeTime, CThostFtdcReqRepealField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqRepealField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqRepealField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqRepealField_BankSerial != NULL ) {
        if(CThostFtdcReqRepealField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqRepealField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqRepealField_BankSerial, CThostFtdcReqRepealField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqRepealField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqRepealField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqRepealField_TradingDay != NULL ) {
        if(CThostFtdcReqRepealField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqRepealField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqRepealField_TradingDay, CThostFtdcReqRepealField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqRepealField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqRepealField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqRepealField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqRepealField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqRepealField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcReqRepealField_CustomerName != NULL ) {
        if(CThostFtdcReqRepealField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcReqRepealField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReqRepealField_CustomerName, CThostFtdcReqRepealField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReqRepealField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReqRepealField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReqRepealField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReqRepealField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReqRepealField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReqRepealField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReqRepealField_IdentifiedCardNo, CThostFtdcReqRepealField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReqRepealField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReqRepealField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReqRepealField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqRepealField_BankAccount != NULL ) {
        if(CThostFtdcReqRepealField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReqRepealField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReqRepealField_BankAccount, CThostFtdcReqRepealField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReqRepealField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReqRepealField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqRepealField_BankPassWord != NULL ) {
        if(CThostFtdcReqRepealField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReqRepealField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReqRepealField_BankPassWord, CThostFtdcReqRepealField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReqRepealField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReqRepealField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcReqRepealField_AccountID != NULL ) {
        if(CThostFtdcReqRepealField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcReqRepealField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcReqRepealField_AccountID, CThostFtdcReqRepealField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcReqRepealField_AccountID, sizeof(data->AccountID));
        CThostFtdcReqRepealField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqRepealField_Password != NULL ) {
        if(CThostFtdcReqRepealField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqRepealField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqRepealField_Password, CThostFtdcReqRepealField_Password_length);
        strncpy(data->Password, CThostFtdcReqRepealField_Password, sizeof(data->Password));
        CThostFtdcReqRepealField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReqRepealField_InstallID;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcReqRepealField_FutureSerial;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqRepealField_UserID != NULL ) {
        if(CThostFtdcReqRepealField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqRepealField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqRepealField_UserID, CThostFtdcReqRepealField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqRepealField_UserID, sizeof(data->UserID));
        CThostFtdcReqRepealField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcReqRepealField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReqRepealField_CurrencyID != NULL ) {
        if(CThostFtdcReqRepealField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReqRepealField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReqRepealField_CurrencyID, CThostFtdcReqRepealField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReqRepealField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReqRepealField_CurrencyID = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    data->TradeAmount = CThostFtdcReqRepealField_TradeAmount;

    /// 期货可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->FutureFetchAmount = CThostFtdcReqRepealField_FutureFetchAmount;

    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    data->FeePayFlag = CThostFtdcReqRepealField_FeePayFlag;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    data->CustFee = CThostFtdcReqRepealField_CustFee;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    data->BrokerFee = CThostFtdcReqRepealField_BrokerFee;

    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    if( CThostFtdcReqRepealField_Message != NULL ) {
        if(CThostFtdcReqRepealField_Message_length >= (Py_ssize_t)sizeof(data->Message)) {
            PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is 128)", CThostFtdcReqRepealField_Message_length);
            return -1;
        }
        // memset(data->Message, 0, sizeof(data->Message));
        // memcpy(data->Message, CThostFtdcReqRepealField_Message, CThostFtdcReqRepealField_Message_length);
        strncpy(data->Message, CThostFtdcReqRepealField_Message, sizeof(data->Message));
        CThostFtdcReqRepealField_Message = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqRepealField_Digest != NULL ) {
        if(CThostFtdcReqRepealField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqRepealField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqRepealField_Digest, CThostFtdcReqRepealField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqRepealField_Digest, sizeof(data->Digest));
        CThostFtdcReqRepealField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcReqRepealField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcReqRepealField_DeviceID != NULL ) {
        if(CThostFtdcReqRepealField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcReqRepealField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcReqRepealField_DeviceID, CThostFtdcReqRepealField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcReqRepealField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcReqRepealField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcReqRepealField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReqRepealField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReqRepealField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReqRepealField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReqRepealField_BrokerIDByBank, CThostFtdcReqRepealField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReqRepealField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReqRepealField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqRepealField_BankSecuAcc != NULL ) {
        if(CThostFtdcReqRepealField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcReqRepealField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcReqRepealField_BankSecuAcc, CThostFtdcReqRepealField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcReqRepealField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcReqRepealField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcReqRepealField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcReqRepealField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcReqRepealField_OperNo != NULL ) {
        if(CThostFtdcReqRepealField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcReqRepealField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcReqRepealField_OperNo, CThostFtdcReqRepealField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcReqRepealField_OperNo, sizeof(data->OperNo));
        CThostFtdcReqRepealField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcReqRepealField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReqRepealField_TID;

    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    data->TransferStatus = CThostFtdcReqRepealField_TransferStatus;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReqRepealField_LongCustomerName != NULL ) {
        if(CThostFtdcReqRepealField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReqRepealField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcReqRepealField_LongCustomerName, CThostFtdcReqRepealField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcReqRepealField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcReqRepealField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqRepealFieldType_repr(PyObject *self) {

    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:y}"
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
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqRepealField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqRepealField repr");
        return NULL;
    }

    return repr;
}


/// 银行冲正标志
/// typedef char TThostFtdcBankRepealFlagType
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankRepealFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankRepealFlag), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_BankRepealFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankRepealFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankRepealFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankRepealFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->BankRepealFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商冲正标志
/// typedef char TThostFtdcBrokerRepealFlagType
static PyObject *PyCThostFtdcReqRepealFieldType_get_BrokerRepealFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BrokerRepealFlag), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_BrokerRepealFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerRepealFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BrokerRepealFlag)) {
        PyErr_SetString(PyExc_ValueError, "BrokerRepealFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->BrokerRepealFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 被冲正银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankRepealSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankRepealSerial, (Py_ssize_t)sizeof(data->BankRepealSerial));
    return PyBytes_FromString(data->BankRepealSerial);
}

static int PyCThostFtdcReqRepealFieldType_set_BankRepealSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankRepealSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankRepealSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankRepealSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BankRepealSerial, 0, sizeof(data->BankRepealSerial));
    // memcpy(data->BankRepealSerial, buf, len);
    strncpy(data->BankRepealSerial, buf, sizeof(data->BankRepealSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqRepealFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqRepealFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqRepealFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqRepealFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqRepealFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqRepealFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqRepealFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqRepealFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqRepealFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqRepealFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqRepealFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqRepealFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqRepealFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqRepealFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcReqRepealFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReqRepealFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReqRepealFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReqRepealFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReqRepealFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReqRepealFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReqRepealFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReqRepealFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcReqRepealFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcReqRepealFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqRepealFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqRepealFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqRepealFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqRepealFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcReqRepealFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReqRepealFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReqRepealFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 费用支付标志
/// typedef char TThostFtdcFeePayFlagType
static PyObject *PyCThostFtdcReqRepealFieldType_get_FeePayFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FeePayFlag), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_FeePayFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FeePayFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::FeePayFlag)) {
        PyErr_SetString(PyExc_ValueError, "FeePayFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->FeePayFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发送方给接收方的消息
/// typedef char TThostFtdcAddInfoType[129]
static PyObject *PyCThostFtdcReqRepealFieldType_get_Message(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Message, (Py_ssize_t)sizeof(data->Message));
    return PyBytes_FromString(data->Message);
}

static int PyCThostFtdcReqRepealFieldType_set_Message(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::Message)) {
        PyErr_SetString(PyExc_ValueError, "Message must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->Message, 0, sizeof(data->Message));
    // memcpy(data->Message, buf, len);
    strncpy(data->Message, buf, sizeof(data->Message));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqRepealFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqRepealFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcReqRepealFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcReqRepealFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReqRepealFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcReqRepealFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqRepealFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqRepealFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcReqRepealFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcReqRepealFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 转账交易状态
/// typedef char TThostFtdcTransferStatusType
static PyObject *PyCThostFtdcReqRepealFieldType_get_TransferStatus(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TransferStatus), 1);
}

static int PyCThostFtdcReqRepealFieldType_set_TransferStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TransferStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqRepealField::TransferStatus)) {
        PyErr_SetString(PyExc_ValueError, "TransferStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    data->TransferStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReqRepealFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcReqRepealFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqRepealField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqRepealFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(self);
    CThostFtdcReqRepealField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqRepealFieldType_members[] = {
    /// 冲正时间间隔
    /// typedef int TThostFtdcRepealTimeIntervalType
    {
        .name = "RepealTimeInterval",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.RepealTimeInterval),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.RepealedTimes),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.PlateRepealSerial),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.FutureRepealSerial),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.TradeAmount),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.FutureFetchAmount),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.CustFee),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.BrokerFee),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcReqRepealFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqRepealFieldType_getsets[] = {
    /// 银行冲正标志
    /// typedef char TThostFtdcBankRepealFlagType
    {
    .name = "BankRepealFlag",
    .get = PyCThostFtdcReqRepealFieldType_get_BankRepealFlag,
    .set = PyCThostFtdcReqRepealFieldType_set_BankRepealFlag,
    .doc = PyDoc_STR("银行冲正标志"),
    },
    /// 期商冲正标志
    /// typedef char TThostFtdcBrokerRepealFlagType
    {
    .name = "BrokerRepealFlag",
    .get = PyCThostFtdcReqRepealFieldType_get_BrokerRepealFlag,
    .set = PyCThostFtdcReqRepealFieldType_set_BrokerRepealFlag,
    .doc = PyDoc_STR("期商冲正标志"),
    },
    /// 被冲正银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankRepealSerial",
    .get = PyCThostFtdcReqRepealFieldType_get_BankRepealSerial,
    .set = PyCThostFtdcReqRepealFieldType_set_BankRepealSerial,
    .doc = PyDoc_STR("被冲正银行流水号"),
    },
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqRepealFieldType_get_TradeCode,
    .set = PyCThostFtdcReqRepealFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqRepealFieldType_get_BankID,
    .set = PyCThostFtdcReqRepealFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqRepealFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqRepealFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqRepealFieldType_get_BrokerID,
    .set = PyCThostFtdcReqRepealFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqRepealFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqRepealFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqRepealFieldType_get_TradeDate,
    .set = PyCThostFtdcReqRepealFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqRepealFieldType_get_TradeTime,
    .set = PyCThostFtdcReqRepealFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqRepealFieldType_get_BankSerial,
    .set = PyCThostFtdcReqRepealFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqRepealFieldType_get_TradingDay,
    .set = PyCThostFtdcReqRepealFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqRepealFieldType_get_LastFragment,
    .set = PyCThostFtdcReqRepealFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReqRepealFieldType_get_CustomerName,
    .set = PyCThostFtdcReqRepealFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReqRepealFieldType_get_IdCardType,
    .set = PyCThostFtdcReqRepealFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReqRepealFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReqRepealFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReqRepealFieldType_get_CustType,
    .set = PyCThostFtdcReqRepealFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReqRepealFieldType_get_BankAccount,
    .set = PyCThostFtdcReqRepealFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReqRepealFieldType_get_BankPassWord,
    .set = PyCThostFtdcReqRepealFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcReqRepealFieldType_get_AccountID,
    .set = PyCThostFtdcReqRepealFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqRepealFieldType_get_Password,
    .set = PyCThostFtdcReqRepealFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqRepealFieldType_get_UserID,
    .set = PyCThostFtdcReqRepealFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcReqRepealFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcReqRepealFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReqRepealFieldType_get_CurrencyID,
    .set = PyCThostFtdcReqRepealFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 费用支付标志
    /// typedef char TThostFtdcFeePayFlagType
    {
    .name = "FeePayFlag",
    .get = PyCThostFtdcReqRepealFieldType_get_FeePayFlag,
    .set = PyCThostFtdcReqRepealFieldType_set_FeePayFlag,
    .doc = PyDoc_STR("费用支付标志"),
    },
    /// 发送方给接收方的消息
    /// typedef char TThostFtdcAddInfoType[129]
    {
    .name = "Message",
    .get = PyCThostFtdcReqRepealFieldType_get_Message,
    .set = PyCThostFtdcReqRepealFieldType_set_Message,
    .doc = PyDoc_STR("发送方给接收方的消息"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqRepealFieldType_get_Digest,
    .set = PyCThostFtdcReqRepealFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcReqRepealFieldType_get_BankAccType,
    .set = PyCThostFtdcReqRepealFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcReqRepealFieldType_get_DeviceID,
    .set = PyCThostFtdcReqRepealFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcReqRepealFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcReqRepealFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReqRepealFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReqRepealFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcReqRepealFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcReqRepealFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcReqRepealFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcReqRepealFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcReqRepealFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcReqRepealFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcReqRepealFieldType_get_OperNo,
    .set = PyCThostFtdcReqRepealFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 转账交易状态
    /// typedef char TThostFtdcTransferStatusType
    {
    .name = "TransferStatus",
    .get = PyCThostFtdcReqRepealFieldType_get_TransferStatus,
    .set = PyCThostFtdcReqRepealFieldType_set_TransferStatus,
    .doc = PyDoc_STR("转账交易状态"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcReqRepealFieldType_get_LongCustomerName,
    .set = PyCThostFtdcReqRepealFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqRepealFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqRepealField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("冲正请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqRepealFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqRepealFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqRepealFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqRepealFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqRepealFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqRepealFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("冲正请求")},
    {Py_tp_members, PyCThostFtdcReqRepealFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqRepealFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqRepealFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqRepealFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqRepealFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqRepealField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqRepealFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqRepealFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqRepealFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqRepealFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqRepealFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqRepealFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqRepealFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqRepealFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqRepealField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqRepealField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}