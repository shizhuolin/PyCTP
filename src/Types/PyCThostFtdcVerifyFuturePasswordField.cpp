
#include "PyCThostFtdcVerifyFuturePasswordField.h"

///验证期货资金密码

static int PyCThostFtdcVerifyFuturePasswordFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "AccountID", "Password", "BankAccount", "BankPassWord", "InstallID", "TID", "CurrencyID", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcVerifyFuturePasswordField_TradeCode = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcVerifyFuturePasswordField_BankID = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcVerifyFuturePasswordField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcVerifyFuturePasswordField_BrokerID = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcVerifyFuturePasswordField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcVerifyFuturePasswordField_TradeDate = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcVerifyFuturePasswordField_TradeTime = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcVerifyFuturePasswordField_BankSerial = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcVerifyFuturePasswordField_TradingDay = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcVerifyFuturePasswordField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcVerifyFuturePasswordField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcVerifyFuturePasswordField_SessionID = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcVerifyFuturePasswordField_AccountID = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcVerifyFuturePasswordField_Password = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_Password_length = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcVerifyFuturePasswordField_BankAccount = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcVerifyFuturePasswordField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_BankPassWord_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcVerifyFuturePasswordField_InstallID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcVerifyFuturePasswordField_TID = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcVerifyFuturePasswordField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#y#y#y#iiy#", (char **)kwlist
        , &CThostFtdcVerifyFuturePasswordField_TradeCode, &CThostFtdcVerifyFuturePasswordField_TradeCode_length
        , &CThostFtdcVerifyFuturePasswordField_BankID, &CThostFtdcVerifyFuturePasswordField_BankID_length
        , &CThostFtdcVerifyFuturePasswordField_BankBranchID, &CThostFtdcVerifyFuturePasswordField_BankBranchID_length
        , &CThostFtdcVerifyFuturePasswordField_BrokerID, &CThostFtdcVerifyFuturePasswordField_BrokerID_length
        , &CThostFtdcVerifyFuturePasswordField_BrokerBranchID, &CThostFtdcVerifyFuturePasswordField_BrokerBranchID_length
        , &CThostFtdcVerifyFuturePasswordField_TradeDate, &CThostFtdcVerifyFuturePasswordField_TradeDate_length
        , &CThostFtdcVerifyFuturePasswordField_TradeTime, &CThostFtdcVerifyFuturePasswordField_TradeTime_length
        , &CThostFtdcVerifyFuturePasswordField_BankSerial, &CThostFtdcVerifyFuturePasswordField_BankSerial_length
        , &CThostFtdcVerifyFuturePasswordField_TradingDay, &CThostFtdcVerifyFuturePasswordField_TradingDay_length
        , &CThostFtdcVerifyFuturePasswordField_PlateSerial
        , &CThostFtdcVerifyFuturePasswordField_LastFragment
        , &CThostFtdcVerifyFuturePasswordField_SessionID
        , &CThostFtdcVerifyFuturePasswordField_AccountID, &CThostFtdcVerifyFuturePasswordField_AccountID_length
        , &CThostFtdcVerifyFuturePasswordField_Password, &CThostFtdcVerifyFuturePasswordField_Password_length
        , &CThostFtdcVerifyFuturePasswordField_BankAccount, &CThostFtdcVerifyFuturePasswordField_BankAccount_length
        , &CThostFtdcVerifyFuturePasswordField_BankPassWord, &CThostFtdcVerifyFuturePasswordField_BankPassWord_length
        , &CThostFtdcVerifyFuturePasswordField_InstallID
        , &CThostFtdcVerifyFuturePasswordField_TID
        , &CThostFtdcVerifyFuturePasswordField_CurrencyID, &CThostFtdcVerifyFuturePasswordField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcVerifyFuturePasswordField_TradeCode != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcVerifyFuturePasswordField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcVerifyFuturePasswordField_TradeCode, CThostFtdcVerifyFuturePasswordField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcVerifyFuturePasswordField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcVerifyFuturePasswordField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcVerifyFuturePasswordField_BankID != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcVerifyFuturePasswordField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcVerifyFuturePasswordField_BankID, CThostFtdcVerifyFuturePasswordField_BankID_length);
        strncpy(data->BankID, CThostFtdcVerifyFuturePasswordField_BankID, sizeof(data->BankID));
        CThostFtdcVerifyFuturePasswordField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcVerifyFuturePasswordField_BankBranchID != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcVerifyFuturePasswordField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcVerifyFuturePasswordField_BankBranchID, CThostFtdcVerifyFuturePasswordField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcVerifyFuturePasswordField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcVerifyFuturePasswordField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcVerifyFuturePasswordField_BrokerID != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcVerifyFuturePasswordField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcVerifyFuturePasswordField_BrokerID, CThostFtdcVerifyFuturePasswordField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcVerifyFuturePasswordField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcVerifyFuturePasswordField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcVerifyFuturePasswordField_BrokerBranchID != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcVerifyFuturePasswordField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcVerifyFuturePasswordField_BrokerBranchID, CThostFtdcVerifyFuturePasswordField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcVerifyFuturePasswordField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcVerifyFuturePasswordField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcVerifyFuturePasswordField_TradeDate != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcVerifyFuturePasswordField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcVerifyFuturePasswordField_TradeDate, CThostFtdcVerifyFuturePasswordField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcVerifyFuturePasswordField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcVerifyFuturePasswordField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcVerifyFuturePasswordField_TradeTime != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcVerifyFuturePasswordField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcVerifyFuturePasswordField_TradeTime, CThostFtdcVerifyFuturePasswordField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcVerifyFuturePasswordField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcVerifyFuturePasswordField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcVerifyFuturePasswordField_BankSerial != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcVerifyFuturePasswordField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcVerifyFuturePasswordField_BankSerial, CThostFtdcVerifyFuturePasswordField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcVerifyFuturePasswordField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcVerifyFuturePasswordField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcVerifyFuturePasswordField_TradingDay != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcVerifyFuturePasswordField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcVerifyFuturePasswordField_TradingDay, CThostFtdcVerifyFuturePasswordField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcVerifyFuturePasswordField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcVerifyFuturePasswordField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcVerifyFuturePasswordField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcVerifyFuturePasswordField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcVerifyFuturePasswordField_SessionID;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcVerifyFuturePasswordField_AccountID != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcVerifyFuturePasswordField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcVerifyFuturePasswordField_AccountID, CThostFtdcVerifyFuturePasswordField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcVerifyFuturePasswordField_AccountID, sizeof(data->AccountID));
        CThostFtdcVerifyFuturePasswordField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcVerifyFuturePasswordField_Password != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcVerifyFuturePasswordField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcVerifyFuturePasswordField_Password, CThostFtdcVerifyFuturePasswordField_Password_length);
        strncpy(data->Password, CThostFtdcVerifyFuturePasswordField_Password, sizeof(data->Password));
        CThostFtdcVerifyFuturePasswordField_Password = NULL;
    }

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcVerifyFuturePasswordField_BankAccount != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcVerifyFuturePasswordField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcVerifyFuturePasswordField_BankAccount, CThostFtdcVerifyFuturePasswordField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcVerifyFuturePasswordField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcVerifyFuturePasswordField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcVerifyFuturePasswordField_BankPassWord != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcVerifyFuturePasswordField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcVerifyFuturePasswordField_BankPassWord, CThostFtdcVerifyFuturePasswordField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcVerifyFuturePasswordField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcVerifyFuturePasswordField_BankPassWord = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcVerifyFuturePasswordField_InstallID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcVerifyFuturePasswordField_TID;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcVerifyFuturePasswordField_CurrencyID != NULL ) {
        if(CThostFtdcVerifyFuturePasswordField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcVerifyFuturePasswordField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcVerifyFuturePasswordField_CurrencyID, CThostFtdcVerifyFuturePasswordField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcVerifyFuturePasswordField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcVerifyFuturePasswordField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_repr(PyObject *self) {

    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:y,s:y,s:y,s:i,s:i,s:y}"
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
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "BankPassWord", data->BankPassWord//, (Py_ssize_t)sizeof(data->BankPassWord)
        , "InstallID", data->InstallID
        , "TID", data->TID
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyFuturePasswordField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyFuturePasswordField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcVerifyFuturePasswordFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcVerifyFuturePasswordFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordFieldData>(self);
    CThostFtdcVerifyFuturePasswordField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcVerifyFuturePasswordFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcVerifyFuturePasswordFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcVerifyFuturePasswordFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcVerifyFuturePasswordFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcVerifyFuturePasswordFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcVerifyFuturePasswordFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_TradeCode,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_BankID,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_BankBranchID,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_BrokerID,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_TradeDate,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_TradeTime,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_BankSerial,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_TradingDay,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_LastFragment,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_AccountID,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_Password,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_BankAccount,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_BankPassWord,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcVerifyFuturePasswordFieldType_get_CurrencyID,
    .set = PyCThostFtdcVerifyFuturePasswordFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcVerifyFuturePasswordFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcVerifyFuturePasswordField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("验证期货资金密码")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcVerifyFuturePasswordFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcVerifyFuturePasswordFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcVerifyFuturePasswordFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcVerifyFuturePasswordFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcVerifyFuturePasswordFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcVerifyFuturePasswordFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("验证期货资金密码")},
    {Py_tp_members, PyCThostFtdcVerifyFuturePasswordFieldType_members},
    {Py_tp_getset, PyCThostFtdcVerifyFuturePasswordFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcVerifyFuturePasswordFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcVerifyFuturePasswordFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcVerifyFuturePasswordFieldType_spec = {
    .name = "PyCTP.CThostFtdcVerifyFuturePasswordField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcVerifyFuturePasswordFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcVerifyFuturePasswordFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcVerifyFuturePasswordFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcVerifyFuturePasswordFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcVerifyFuturePasswordFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcVerifyFuturePasswordFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcVerifyFuturePasswordFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcVerifyFuturePasswordFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcVerifyFuturePasswordField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyFuturePasswordField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}