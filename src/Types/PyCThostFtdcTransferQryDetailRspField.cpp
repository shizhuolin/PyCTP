
#include "PyCThostFtdcTransferQryDetailRspField.h"

///查询银行交易明细请求响应

static int PyCThostFtdcTransferQryDetailRspFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeDate", "TradeTime", "TradeCode", "FutureSerial", "FutureID", "FutureAccount", "BankSerial", "BankID", "BankBrchID", "BankAccount", "CertCode", "CurrencyCode", "TxAmount", "Flag", NULL };


    /// 交易日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcTransferQryDetailRspField_TradeDate = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcTransferQryDetailRspField_TradeTime = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_TradeTime_length = 0;

    /// 交易代码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcTransferQryDetailRspField_TradeCode = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_TradeCode_length = 0;

    /// 期货流水号
    /// typedef int TThostFtdcTradeSerialNoType
    int CThostFtdcTransferQryDetailRspField_FutureSerial = 0;

    /// 期货公司代码
    /// typedef char TThostFtdcFutureIDType[11]
    char *CThostFtdcTransferQryDetailRspField_FutureID = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_FutureID_length = 0;

    /// 资金帐号
    /// typedef char TThostFtdcFutureAccountType[22]
    char *CThostFtdcTransferQryDetailRspField_FutureAccount = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_FutureAccount_length = 0;

    /// 银行流水号
    /// typedef int TThostFtdcTradeSerialNoType
    int CThostFtdcTransferQryDetailRspField_BankSerial = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcTransferQryDetailRspField_BankID = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_BankID_length = 0;

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcTransferQryDetailRspField_BankBrchID = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_BankBrchID_length = 0;

    /// 银行账号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcTransferQryDetailRspField_BankAccount = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_BankAccount_length = 0;

    /// 证件号码
    /// typedef char TThostFtdcCertCodeType[21]
    char *CThostFtdcTransferQryDetailRspField_CertCode = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_CertCode_length = 0;

    /// 货币代码
    /// typedef char TThostFtdcCurrencyCodeType[4]
    char *CThostFtdcTransferQryDetailRspField_CurrencyCode = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailRspField_CurrencyCode_length = 0;

    /// 发生金额
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcTransferQryDetailRspField_TxAmount = 0.0;

    /// 有效标志
    /// typedef char TThostFtdcTransferValidFlagType
    char CThostFtdcTransferQryDetailRspField_Flag = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#iy#y#y#y#y#dc", (char **)kwlist
        , &CThostFtdcTransferQryDetailRspField_TradeDate, &CThostFtdcTransferQryDetailRspField_TradeDate_length
        , &CThostFtdcTransferQryDetailRspField_TradeTime, &CThostFtdcTransferQryDetailRspField_TradeTime_length
        , &CThostFtdcTransferQryDetailRspField_TradeCode, &CThostFtdcTransferQryDetailRspField_TradeCode_length
        , &CThostFtdcTransferQryDetailRspField_FutureSerial
        , &CThostFtdcTransferQryDetailRspField_FutureID, &CThostFtdcTransferQryDetailRspField_FutureID_length
        , &CThostFtdcTransferQryDetailRspField_FutureAccount, &CThostFtdcTransferQryDetailRspField_FutureAccount_length
        , &CThostFtdcTransferQryDetailRspField_BankSerial
        , &CThostFtdcTransferQryDetailRspField_BankID, &CThostFtdcTransferQryDetailRspField_BankID_length
        , &CThostFtdcTransferQryDetailRspField_BankBrchID, &CThostFtdcTransferQryDetailRspField_BankBrchID_length
        , &CThostFtdcTransferQryDetailRspField_BankAccount, &CThostFtdcTransferQryDetailRspField_BankAccount_length
        , &CThostFtdcTransferQryDetailRspField_CertCode, &CThostFtdcTransferQryDetailRspField_CertCode_length
        , &CThostFtdcTransferQryDetailRspField_CurrencyCode, &CThostFtdcTransferQryDetailRspField_CurrencyCode_length
        , &CThostFtdcTransferQryDetailRspField_TxAmount
        , &CThostFtdcTransferQryDetailRspField_Flag
    )) {
        return -1;
    }

    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);


    /// 交易日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcTransferQryDetailRspField_TradeDate != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcTransferQryDetailRspField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcTransferQryDetailRspField_TradeDate, CThostFtdcTransferQryDetailRspField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcTransferQryDetailRspField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcTransferQryDetailRspField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcTransferQryDetailRspField_TradeTime != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcTransferQryDetailRspField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcTransferQryDetailRspField_TradeTime, CThostFtdcTransferQryDetailRspField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcTransferQryDetailRspField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcTransferQryDetailRspField_TradeTime = NULL;
    }

    /// 交易代码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcTransferQryDetailRspField_TradeCode != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcTransferQryDetailRspField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcTransferQryDetailRspField_TradeCode, CThostFtdcTransferQryDetailRspField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcTransferQryDetailRspField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcTransferQryDetailRspField_TradeCode = NULL;
    }

    /// 期货流水号
    /// typedef int TThostFtdcTradeSerialNoType
    data->FutureSerial = CThostFtdcTransferQryDetailRspField_FutureSerial;

    /// 期货公司代码
    /// typedef char TThostFtdcFutureIDType[11]
    if( CThostFtdcTransferQryDetailRspField_FutureID != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_FutureID_length >= (Py_ssize_t)sizeof(data->FutureID)) {
            PyErr_Format(PyExc_ValueError, "FutureID too long: length=%zd (max allowed is 10)", CThostFtdcTransferQryDetailRspField_FutureID_length);
            return -1;
        }
        // memset(data->FutureID, 0, sizeof(data->FutureID));
        // memcpy(data->FutureID, CThostFtdcTransferQryDetailRspField_FutureID, CThostFtdcTransferQryDetailRspField_FutureID_length);
        strncpy(data->FutureID, CThostFtdcTransferQryDetailRspField_FutureID, sizeof(data->FutureID));
        CThostFtdcTransferQryDetailRspField_FutureID = NULL;
    }

    /// 资金帐号
    /// typedef char TThostFtdcFutureAccountType[22]
    if( CThostFtdcTransferQryDetailRspField_FutureAccount != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_FutureAccount_length >= (Py_ssize_t)sizeof(data->FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is 21)", CThostFtdcTransferQryDetailRspField_FutureAccount_length);
            return -1;
        }
        // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
        // memcpy(data->FutureAccount, CThostFtdcTransferQryDetailRspField_FutureAccount, CThostFtdcTransferQryDetailRspField_FutureAccount_length);
        strncpy(data->FutureAccount, CThostFtdcTransferQryDetailRspField_FutureAccount, sizeof(data->FutureAccount));
        CThostFtdcTransferQryDetailRspField_FutureAccount = NULL;
    }

    /// 银行流水号
    /// typedef int TThostFtdcTradeSerialNoType
    data->BankSerial = CThostFtdcTransferQryDetailRspField_BankSerial;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcTransferQryDetailRspField_BankID != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcTransferQryDetailRspField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcTransferQryDetailRspField_BankID, CThostFtdcTransferQryDetailRspField_BankID_length);
        strncpy(data->BankID, CThostFtdcTransferQryDetailRspField_BankID, sizeof(data->BankID));
        CThostFtdcTransferQryDetailRspField_BankID = NULL;
    }

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcTransferQryDetailRspField_BankBrchID != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_BankBrchID_length >= (Py_ssize_t)sizeof(data->BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is 4)", CThostFtdcTransferQryDetailRspField_BankBrchID_length);
            return -1;
        }
        // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
        // memcpy(data->BankBrchID, CThostFtdcTransferQryDetailRspField_BankBrchID, CThostFtdcTransferQryDetailRspField_BankBrchID_length);
        strncpy(data->BankBrchID, CThostFtdcTransferQryDetailRspField_BankBrchID, sizeof(data->BankBrchID));
        CThostFtdcTransferQryDetailRspField_BankBrchID = NULL;
    }

    /// 银行账号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcTransferQryDetailRspField_BankAccount != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcTransferQryDetailRspField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcTransferQryDetailRspField_BankAccount, CThostFtdcTransferQryDetailRspField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcTransferQryDetailRspField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcTransferQryDetailRspField_BankAccount = NULL;
    }

    /// 证件号码
    /// typedef char TThostFtdcCertCodeType[21]
    if( CThostFtdcTransferQryDetailRspField_CertCode != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_CertCode_length >= (Py_ssize_t)sizeof(data->CertCode)) {
            PyErr_Format(PyExc_ValueError, "CertCode too long: length=%zd (max allowed is 20)", CThostFtdcTransferQryDetailRspField_CertCode_length);
            return -1;
        }
        // memset(data->CertCode, 0, sizeof(data->CertCode));
        // memcpy(data->CertCode, CThostFtdcTransferQryDetailRspField_CertCode, CThostFtdcTransferQryDetailRspField_CertCode_length);
        strncpy(data->CertCode, CThostFtdcTransferQryDetailRspField_CertCode, sizeof(data->CertCode));
        CThostFtdcTransferQryDetailRspField_CertCode = NULL;
    }

    /// 货币代码
    /// typedef char TThostFtdcCurrencyCodeType[4]
    if( CThostFtdcTransferQryDetailRspField_CurrencyCode != NULL ) {
        if(CThostFtdcTransferQryDetailRspField_CurrencyCode_length >= (Py_ssize_t)sizeof(data->CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is 3)", CThostFtdcTransferQryDetailRspField_CurrencyCode_length);
            return -1;
        }
        // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
        // memcpy(data->CurrencyCode, CThostFtdcTransferQryDetailRspField_CurrencyCode, CThostFtdcTransferQryDetailRspField_CurrencyCode_length);
        strncpy(data->CurrencyCode, CThostFtdcTransferQryDetailRspField_CurrencyCode, sizeof(data->CurrencyCode));
        CThostFtdcTransferQryDetailRspField_CurrencyCode = NULL;
    }

    /// 发生金额
    /// typedef double TThostFtdcMoneyType
    data->TxAmount = CThostFtdcTransferQryDetailRspField_TxAmount;

    /// 有效标志
    /// typedef char TThostFtdcTransferValidFlagType
    data->Flag = CThostFtdcTransferQryDetailRspField_Flag;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:d,s:c}"
        , "TradeDate", data->TradeDate//, (Py_ssize_t)sizeof(data->TradeDate)
        , "TradeTime", data->TradeTime//, (Py_ssize_t)sizeof(data->TradeTime)
        , "TradeCode", data->TradeCode//, (Py_ssize_t)sizeof(data->TradeCode)
        , "FutureSerial", data->FutureSerial
        , "FutureID", data->FutureID//, (Py_ssize_t)sizeof(data->FutureID)
        , "FutureAccount", data->FutureAccount//, (Py_ssize_t)sizeof(data->FutureAccount)
        , "BankSerial", data->BankSerial
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBrchID", data->BankBrchID//, (Py_ssize_t)sizeof(data->BankBrchID)
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "CertCode", data->CertCode//, (Py_ssize_t)sizeof(data->CertCode)
        , "CurrencyCode", data->CurrencyCode//, (Py_ssize_t)sizeof(data->CurrencyCode)
        , "TxAmount", data->TxAmount
        , "Flag", data->Flag
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryDetailRspField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryDetailRspField repr");
        return NULL;
    }

    return repr;
}


/// 交易日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易代码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司代码
/// typedef char TThostFtdcFutureIDType[11]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_FutureID(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureID, (Py_ssize_t)sizeof(data->FutureID));
    return PyBytes_FromString(data->FutureID);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_FutureID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::FutureID)) {
        PyErr_SetString(PyExc_ValueError, "FutureID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->FutureID, 0, sizeof(data->FutureID));
    // memcpy(data->FutureID, buf, len);
    strncpy(data->FutureID, buf, sizeof(data->FutureID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金帐号
/// typedef char TThostFtdcFutureAccountType[22]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_FutureAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccount, (Py_ssize_t)sizeof(data->FutureAccount));
    return PyBytes_FromString(data->FutureAccount);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_FutureAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 21 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
    // memcpy(data->FutureAccount, buf, len);
    strncpy(data->FutureAccount, buf, sizeof(data->FutureAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分中心代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_BankBrchID(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBrchID, (Py_ssize_t)sizeof(data->BankBrchID));
    return PyBytes_FromString(data->BankBrchID);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_BankBrchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::BankBrchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
    // memcpy(data->BankBrchID, buf, len);
    strncpy(data->BankBrchID, buf, sizeof(data->BankBrchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行账号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcCertCodeType[21]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_CertCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CertCode, (Py_ssize_t)sizeof(data->CertCode));
    return PyBytes_FromString(data->CertCode);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_CertCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CertCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::CertCode)) {
        PyErr_SetString(PyExc_ValueError, "CertCode must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->CertCode, 0, sizeof(data->CertCode));
    // memcpy(data->CertCode, buf, len);
    strncpy(data->CertCode, buf, sizeof(data->CertCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 货币代码
/// typedef char TThostFtdcCurrencyCodeType[4]
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_CurrencyCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyCode, (Py_ssize_t)sizeof(data->CurrencyCode));
    return PyBytes_FromString(data->CurrencyCode);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_CurrencyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    // memset(data->CurrencyCode, 0, sizeof(data->CurrencyCode));
    // memcpy(data->CurrencyCode, buf, len);
    strncpy(data->CurrencyCode, buf, sizeof(data->CurrencyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效标志
/// typedef char TThostFtdcTransferValidFlagType
static PyObject *PyCThostFtdcTransferQryDetailRspFieldType_get_Flag(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Flag), 1);
}

static int PyCThostFtdcTransferQryDetailRspFieldType_set_Flag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Flag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailRspField::Flag)) {
        PyErr_SetString(PyExc_ValueError, "Flag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailRspFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailRspFieldData>(self);
    CThostFtdcTransferQryDetailRspField *data = &(extra->data);
    data->Flag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferQryDetailRspFieldType_members[] = {
    /// 期货流水号
    /// typedef int TThostFtdcTradeSerialNoType
    {
        .name = "FutureSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferQryDetailRspFieldData, data.FutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货流水号")
    },
    /// 银行流水号
    /// typedef int TThostFtdcTradeSerialNoType
    {
        .name = "BankSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferQryDetailRspFieldData, data.BankSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银行流水号")
    },
    /// 发生金额
    /// typedef double TThostFtdcMoneyType
    {
        .name = "TxAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferQryDetailRspFieldData, data.TxAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("发生金额")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferQryDetailRspFieldType_getsets[] = {
    /// 交易日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_TradeDate,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_TradeTime,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 交易代码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_TradeCode,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_TradeCode,
    .doc = PyDoc_STR("交易代码"),
    },
    /// 期货公司代码
    /// typedef char TThostFtdcFutureIDType[11]
    {
    .name = "FutureID",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_FutureID,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_FutureID,
    .doc = PyDoc_STR("期货公司代码"),
    },
    /// 资金帐号
    /// typedef char TThostFtdcFutureAccountType[22]
    {
    .name = "FutureAccount",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_FutureAccount,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_FutureAccount,
    .doc = PyDoc_STR("资金帐号"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_BankID,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBrchID",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_BankBrchID,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_BankBrchID,
    .doc = PyDoc_STR("银行分中心代码"),
    },
    /// 银行账号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_BankAccount,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行账号"),
    },
    /// 证件号码
    /// typedef char TThostFtdcCertCodeType[21]
    {
    .name = "CertCode",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_CertCode,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_CertCode,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 货币代码
    /// typedef char TThostFtdcCurrencyCodeType[4]
    {
    .name = "CurrencyCode",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_CurrencyCode,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_CurrencyCode,
    .doc = PyDoc_STR("货币代码"),
    },
    /// 有效标志
    /// typedef char TThostFtdcTransferValidFlagType
    {
    .name = "Flag",
    .get = PyCThostFtdcTransferQryDetailRspFieldType_get_Flag,
    .set = PyCThostFtdcTransferQryDetailRspFieldType_set_Flag,
    .doc = PyDoc_STR("有效标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferQryDetailRspFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferQryDetailRspField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询银行交易明细请求响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferQryDetailRspFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferQryDetailRspFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferQryDetailRspFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferQryDetailRspFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferQryDetailRspFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferQryDetailRspFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询银行交易明细请求响应")},
    {Py_tp_members, PyCThostFtdcTransferQryDetailRspFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferQryDetailRspFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferQryDetailRspFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferQryDetailRspFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferQryDetailRspFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferQryDetailRspField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferQryDetailRspFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferQryDetailRspFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferQryDetailRspFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferQryDetailRspFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferQryDetailRspFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferQryDetailRspFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferQryDetailRspFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferQryDetailRspFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferQryDetailRspField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryDetailRspField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}