
#include "PyCThostFtdcAccountregisterField.h"

///客户开销户信息表

static int PyCThostFtdcAccountregisterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeDay", "BankID", "BankBranchID", "BankAccount", "BrokerID", "BrokerBranchID", "AccountID", "IdCardType", "IdentifiedCardNo", "CustomerName", "CurrencyID", "OpenOrDestroy", "RegDate", "OutDate", "TID", "CustType", "BankAccType", "LongCustomerName", NULL };


    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcAccountregisterField_TradeDay = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_TradeDay_length = 0;

    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcAccountregisterField_BankID = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_BankID_length = 0;

    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcAccountregisterField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_BankBranchID_length = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcAccountregisterField_BankAccount = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_BankAccount_length = 0;

    /// 期货公司编码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcAccountregisterField_BrokerID = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_BrokerID_length = 0;

    /// 期货公司分支机构编码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcAccountregisterField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_BrokerBranchID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcAccountregisterField_AccountID = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_AccountID_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcAccountregisterField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcAccountregisterField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_IdentifiedCardNo_length = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcAccountregisterField_CustomerName = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_CustomerName_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcAccountregisterField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_CurrencyID_length = 0;

    /// 开销户类别
    /// typedef char TThostFtdcOpenOrDestroyType
    char CThostFtdcAccountregisterField_OpenOrDestroy = 0;

    /// 签约日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcAccountregisterField_RegDate = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_RegDate_length = 0;

    /// 解约日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcAccountregisterField_OutDate = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_OutDate_length = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcAccountregisterField_TID = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcAccountregisterField_CustType = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcAccountregisterField_BankAccType = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcAccountregisterField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcAccountregisterField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#cy#y#y#cy#y#iccy#", (char **)kwlist
        , &CThostFtdcAccountregisterField_TradeDay, &CThostFtdcAccountregisterField_TradeDay_length
        , &CThostFtdcAccountregisterField_BankID, &CThostFtdcAccountregisterField_BankID_length
        , &CThostFtdcAccountregisterField_BankBranchID, &CThostFtdcAccountregisterField_BankBranchID_length
        , &CThostFtdcAccountregisterField_BankAccount, &CThostFtdcAccountregisterField_BankAccount_length
        , &CThostFtdcAccountregisterField_BrokerID, &CThostFtdcAccountregisterField_BrokerID_length
        , &CThostFtdcAccountregisterField_BrokerBranchID, &CThostFtdcAccountregisterField_BrokerBranchID_length
        , &CThostFtdcAccountregisterField_AccountID, &CThostFtdcAccountregisterField_AccountID_length
        , &CThostFtdcAccountregisterField_IdCardType
        , &CThostFtdcAccountregisterField_IdentifiedCardNo, &CThostFtdcAccountregisterField_IdentifiedCardNo_length
        , &CThostFtdcAccountregisterField_CustomerName, &CThostFtdcAccountregisterField_CustomerName_length
        , &CThostFtdcAccountregisterField_CurrencyID, &CThostFtdcAccountregisterField_CurrencyID_length
        , &CThostFtdcAccountregisterField_OpenOrDestroy
        , &CThostFtdcAccountregisterField_RegDate, &CThostFtdcAccountregisterField_RegDate_length
        , &CThostFtdcAccountregisterField_OutDate, &CThostFtdcAccountregisterField_OutDate_length
        , &CThostFtdcAccountregisterField_TID
        , &CThostFtdcAccountregisterField_CustType
        , &CThostFtdcAccountregisterField_BankAccType
        , &CThostFtdcAccountregisterField_LongCustomerName, &CThostFtdcAccountregisterField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);


    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcAccountregisterField_TradeDay != NULL ) {
        if(CThostFtdcAccountregisterField_TradeDay_length >= (Py_ssize_t)sizeof(data->TradeDay)) {
            PyErr_Format(PyExc_ValueError, "TradeDay too long: length=%zd (max allowed is 8)", CThostFtdcAccountregisterField_TradeDay_length);
            return -1;
        }
        // memset(data->TradeDay, 0, sizeof(data->TradeDay));
        // memcpy(data->TradeDay, CThostFtdcAccountregisterField_TradeDay, CThostFtdcAccountregisterField_TradeDay_length);
        strncpy(data->TradeDay, CThostFtdcAccountregisterField_TradeDay, sizeof(data->TradeDay));
        CThostFtdcAccountregisterField_TradeDay = NULL;
    }

    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcAccountregisterField_BankID != NULL ) {
        if(CThostFtdcAccountregisterField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcAccountregisterField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcAccountregisterField_BankID, CThostFtdcAccountregisterField_BankID_length);
        strncpy(data->BankID, CThostFtdcAccountregisterField_BankID, sizeof(data->BankID));
        CThostFtdcAccountregisterField_BankID = NULL;
    }

    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcAccountregisterField_BankBranchID != NULL ) {
        if(CThostFtdcAccountregisterField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcAccountregisterField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcAccountregisterField_BankBranchID, CThostFtdcAccountregisterField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcAccountregisterField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcAccountregisterField_BankBranchID = NULL;
    }

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcAccountregisterField_BankAccount != NULL ) {
        if(CThostFtdcAccountregisterField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcAccountregisterField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcAccountregisterField_BankAccount, CThostFtdcAccountregisterField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcAccountregisterField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcAccountregisterField_BankAccount = NULL;
    }

    /// 期货公司编码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcAccountregisterField_BrokerID != NULL ) {
        if(CThostFtdcAccountregisterField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcAccountregisterField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcAccountregisterField_BrokerID, CThostFtdcAccountregisterField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcAccountregisterField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcAccountregisterField_BrokerID = NULL;
    }

    /// 期货公司分支机构编码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcAccountregisterField_BrokerBranchID != NULL ) {
        if(CThostFtdcAccountregisterField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcAccountregisterField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcAccountregisterField_BrokerBranchID, CThostFtdcAccountregisterField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcAccountregisterField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcAccountregisterField_BrokerBranchID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcAccountregisterField_AccountID != NULL ) {
        if(CThostFtdcAccountregisterField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcAccountregisterField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcAccountregisterField_AccountID, CThostFtdcAccountregisterField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcAccountregisterField_AccountID, sizeof(data->AccountID));
        CThostFtdcAccountregisterField_AccountID = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcAccountregisterField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcAccountregisterField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcAccountregisterField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcAccountregisterField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcAccountregisterField_IdentifiedCardNo, CThostFtdcAccountregisterField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcAccountregisterField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcAccountregisterField_IdentifiedCardNo = NULL;
    }

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcAccountregisterField_CustomerName != NULL ) {
        if(CThostFtdcAccountregisterField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcAccountregisterField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcAccountregisterField_CustomerName, CThostFtdcAccountregisterField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcAccountregisterField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcAccountregisterField_CustomerName = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcAccountregisterField_CurrencyID != NULL ) {
        if(CThostFtdcAccountregisterField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcAccountregisterField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcAccountregisterField_CurrencyID, CThostFtdcAccountregisterField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcAccountregisterField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcAccountregisterField_CurrencyID = NULL;
    }

    /// 开销户类别
    /// typedef char TThostFtdcOpenOrDestroyType
    data->OpenOrDestroy = CThostFtdcAccountregisterField_OpenOrDestroy;

    /// 签约日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcAccountregisterField_RegDate != NULL ) {
        if(CThostFtdcAccountregisterField_RegDate_length >= (Py_ssize_t)sizeof(data->RegDate)) {
            PyErr_Format(PyExc_ValueError, "RegDate too long: length=%zd (max allowed is 8)", CThostFtdcAccountregisterField_RegDate_length);
            return -1;
        }
        // memset(data->RegDate, 0, sizeof(data->RegDate));
        // memcpy(data->RegDate, CThostFtdcAccountregisterField_RegDate, CThostFtdcAccountregisterField_RegDate_length);
        strncpy(data->RegDate, CThostFtdcAccountregisterField_RegDate, sizeof(data->RegDate));
        CThostFtdcAccountregisterField_RegDate = NULL;
    }

    /// 解约日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcAccountregisterField_OutDate != NULL ) {
        if(CThostFtdcAccountregisterField_OutDate_length >= (Py_ssize_t)sizeof(data->OutDate)) {
            PyErr_Format(PyExc_ValueError, "OutDate too long: length=%zd (max allowed is 8)", CThostFtdcAccountregisterField_OutDate_length);
            return -1;
        }
        // memset(data->OutDate, 0, sizeof(data->OutDate));
        // memcpy(data->OutDate, CThostFtdcAccountregisterField_OutDate, CThostFtdcAccountregisterField_OutDate_length);
        strncpy(data->OutDate, CThostFtdcAccountregisterField_OutDate, sizeof(data->OutDate));
        CThostFtdcAccountregisterField_OutDate = NULL;
    }

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcAccountregisterField_TID;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcAccountregisterField_CustType;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcAccountregisterField_BankAccType;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcAccountregisterField_LongCustomerName != NULL ) {
        if(CThostFtdcAccountregisterField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcAccountregisterField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcAccountregisterField_LongCustomerName, CThostFtdcAccountregisterField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcAccountregisterField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcAccountregisterField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAccountregisterFieldType_repr(PyObject *self) {

    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:c,s:y}"
        , "TradeDay", data->TradeDay//, (Py_ssize_t)sizeof(data->TradeDay)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBranchID", data->BankBranchID//, (Py_ssize_t)sizeof(data->BankBranchID)
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BrokerBranchID", data->BrokerBranchID//, (Py_ssize_t)sizeof(data->BrokerBranchID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "IdCardType", data->IdCardType
        , "IdentifiedCardNo", data->IdentifiedCardNo//, (Py_ssize_t)sizeof(data->IdentifiedCardNo)
        , "CustomerName", data->CustomerName//, (Py_ssize_t)sizeof(data->CustomerName)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "OpenOrDestroy", data->OpenOrDestroy
        , "RegDate", data->RegDate//, (Py_ssize_t)sizeof(data->RegDate)
        , "OutDate", data->OutDate//, (Py_ssize_t)sizeof(data->OutDate)
        , "TID", data->TID
        , "CustType", data->CustType
        , "BankAccType", data->BankAccType
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAccountregisterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAccountregisterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_TradeDay(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDay, (Py_ssize_t)sizeof(data->TradeDay));
    return PyBytes_FromString(data->TradeDay);
}

static int PyCThostFtdcAccountregisterFieldType_set_TradeDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::TradeDay)) {
        PyErr_SetString(PyExc_ValueError, "TradeDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->TradeDay, 0, sizeof(data->TradeDay));
    // memcpy(data->TradeDay, buf, len);
    strncpy(data->TradeDay, buf, sizeof(data->TradeDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行编码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcAccountregisterFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构编码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcAccountregisterFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcAccountregisterFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司编码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcAccountregisterFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司分支机构编码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcAccountregisterFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcAccountregisterFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcAccountregisterFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcAccountregisterFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcAccountregisterFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcAccountregisterFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcAccountregisterFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开销户类别
/// typedef char TThostFtdcOpenOrDestroyType
static PyObject *PyCThostFtdcAccountregisterFieldType_get_OpenOrDestroy(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OpenOrDestroy), 1);
}

static int PyCThostFtdcAccountregisterFieldType_set_OpenOrDestroy(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenOrDestroy Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::OpenOrDestroy)) {
        PyErr_SetString(PyExc_ValueError, "OpenOrDestroy must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    data->OpenOrDestroy = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 签约日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_RegDate(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RegDate, (Py_ssize_t)sizeof(data->RegDate));
    return PyBytes_FromString(data->RegDate);
}

static int PyCThostFtdcAccountregisterFieldType_set_RegDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RegDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::RegDate)) {
        PyErr_SetString(PyExc_ValueError, "RegDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->RegDate, 0, sizeof(data->RegDate));
    // memcpy(data->RegDate, buf, len);
    strncpy(data->RegDate, buf, sizeof(data->RegDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 解约日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_OutDate(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OutDate, (Py_ssize_t)sizeof(data->OutDate));
    return PyBytes_FromString(data->OutDate);
}

static int PyCThostFtdcAccountregisterFieldType_set_OutDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OutDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::OutDate)) {
        PyErr_SetString(PyExc_ValueError, "OutDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->OutDate, 0, sizeof(data->OutDate));
    // memcpy(data->OutDate, buf, len);
    strncpy(data->OutDate, buf, sizeof(data->OutDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcAccountregisterFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcAccountregisterFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcAccountregisterFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcAccountregisterFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcAccountregisterFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcAccountregisterFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountregisterField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountregisterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(self);
    CThostFtdcAccountregisterField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAccountregisterFieldType_members[] = {
    /// 交易ID
    /// typedef int TThostFtdcTIDType
    {
        .name = "TID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcAccountregisterFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAccountregisterFieldType_getsets[] = {
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDay",
    .get = PyCThostFtdcAccountregisterFieldType_get_TradeDay,
    .set = PyCThostFtdcAccountregisterFieldType_set_TradeDay,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcAccountregisterFieldType_get_BankID,
    .set = PyCThostFtdcAccountregisterFieldType_set_BankID,
    .doc = PyDoc_STR("银行编码"),
    },
    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcAccountregisterFieldType_get_BankBranchID,
    .set = PyCThostFtdcAccountregisterFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构编码"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcAccountregisterFieldType_get_BankAccount,
    .set = PyCThostFtdcAccountregisterFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 期货公司编码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcAccountregisterFieldType_get_BrokerID,
    .set = PyCThostFtdcAccountregisterFieldType_set_BrokerID,
    .doc = PyDoc_STR("期货公司编码"),
    },
    /// 期货公司分支机构编码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcAccountregisterFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcAccountregisterFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期货公司分支机构编码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcAccountregisterFieldType_get_AccountID,
    .set = PyCThostFtdcAccountregisterFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcAccountregisterFieldType_get_IdCardType,
    .set = PyCThostFtdcAccountregisterFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcAccountregisterFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcAccountregisterFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcAccountregisterFieldType_get_CustomerName,
    .set = PyCThostFtdcAccountregisterFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcAccountregisterFieldType_get_CurrencyID,
    .set = PyCThostFtdcAccountregisterFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 开销户类别
    /// typedef char TThostFtdcOpenOrDestroyType
    {
    .name = "OpenOrDestroy",
    .get = PyCThostFtdcAccountregisterFieldType_get_OpenOrDestroy,
    .set = PyCThostFtdcAccountregisterFieldType_set_OpenOrDestroy,
    .doc = PyDoc_STR("开销户类别"),
    },
    /// 签约日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "RegDate",
    .get = PyCThostFtdcAccountregisterFieldType_get_RegDate,
    .set = PyCThostFtdcAccountregisterFieldType_set_RegDate,
    .doc = PyDoc_STR("签约日期"),
    },
    /// 解约日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "OutDate",
    .get = PyCThostFtdcAccountregisterFieldType_get_OutDate,
    .set = PyCThostFtdcAccountregisterFieldType_set_OutDate,
    .doc = PyDoc_STR("解约日期"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcAccountregisterFieldType_get_CustType,
    .set = PyCThostFtdcAccountregisterFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcAccountregisterFieldType_get_BankAccType,
    .set = PyCThostFtdcAccountregisterFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcAccountregisterFieldType_get_LongCustomerName,
    .set = PyCThostFtdcAccountregisterFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAccountregisterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAccountregisterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("客户开销户信息表")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAccountregisterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAccountregisterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAccountregisterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAccountregisterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAccountregisterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAccountregisterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("客户开销户信息表")},
    {Py_tp_members, PyCThostFtdcAccountregisterFieldType_members},
    {Py_tp_getset, PyCThostFtdcAccountregisterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAccountregisterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAccountregisterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAccountregisterFieldType_spec = {
    .name = "PyCTP.CThostFtdcAccountregisterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAccountregisterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAccountregisterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAccountregisterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAccountregisterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAccountregisterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAccountregisterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAccountregisterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAccountregisterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAccountregisterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAccountregisterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}