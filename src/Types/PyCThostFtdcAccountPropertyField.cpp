
#include "PyCThostFtdcAccountPropertyField.h"

///银行账户属性

static int PyCThostFtdcAccountPropertyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "BankID", "BankAccount", "OpenName", "OpenBank", "IsActive", "AccountSourceType", "OpenDate", "CancelDate", "OperatorID", "OperateDate", "OperateTime", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcAccountPropertyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcAccountPropertyField_AccountID = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_AccountID_length = 0;

    /// 银行统一标识类型
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcAccountPropertyField_BankID = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_BankID_length = 0;

    /// 银行账户
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcAccountPropertyField_BankAccount = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_BankAccount_length = 0;

    /// 银行账户的开户人名称
    /// typedef char TThostFtdcInvestorFullNameType[101]
    char *CThostFtdcAccountPropertyField_OpenName = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_OpenName_length = 0;

    /// 银行账户的开户行
    /// typedef char TThostFtdcOpenBankType[101]
    char *CThostFtdcAccountPropertyField_OpenBank = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_OpenBank_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcAccountPropertyField_IsActive = 0;

    /// 账户来源
    /// typedef char TThostFtdcAccountSourceTypeType
    char CThostFtdcAccountPropertyField_AccountSourceType = 0;

    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcAccountPropertyField_OpenDate = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_OpenDate_length = 0;

    /// 注销日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcAccountPropertyField_CancelDate = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_CancelDate_length = 0;

    /// 录入员代码
    /// typedef char TThostFtdcOperatorIDType[65]
    char *CThostFtdcAccountPropertyField_OperatorID = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_OperatorID_length = 0;

    /// 录入日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcAccountPropertyField_OperateDate = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_OperateDate_length = 0;

    /// 录入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcAccountPropertyField_OperateTime = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_OperateTime_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcAccountPropertyField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcAccountPropertyField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#icy#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcAccountPropertyField_BrokerID, &CThostFtdcAccountPropertyField_BrokerID_length
        , &CThostFtdcAccountPropertyField_AccountID, &CThostFtdcAccountPropertyField_AccountID_length
        , &CThostFtdcAccountPropertyField_BankID, &CThostFtdcAccountPropertyField_BankID_length
        , &CThostFtdcAccountPropertyField_BankAccount, &CThostFtdcAccountPropertyField_BankAccount_length
        , &CThostFtdcAccountPropertyField_OpenName, &CThostFtdcAccountPropertyField_OpenName_length
        , &CThostFtdcAccountPropertyField_OpenBank, &CThostFtdcAccountPropertyField_OpenBank_length
        , &CThostFtdcAccountPropertyField_IsActive
        , &CThostFtdcAccountPropertyField_AccountSourceType
        , &CThostFtdcAccountPropertyField_OpenDate, &CThostFtdcAccountPropertyField_OpenDate_length
        , &CThostFtdcAccountPropertyField_CancelDate, &CThostFtdcAccountPropertyField_CancelDate_length
        , &CThostFtdcAccountPropertyField_OperatorID, &CThostFtdcAccountPropertyField_OperatorID_length
        , &CThostFtdcAccountPropertyField_OperateDate, &CThostFtdcAccountPropertyField_OperateDate_length
        , &CThostFtdcAccountPropertyField_OperateTime, &CThostFtdcAccountPropertyField_OperateTime_length
        , &CThostFtdcAccountPropertyField_CurrencyID, &CThostFtdcAccountPropertyField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcAccountPropertyField_BrokerID != NULL ) {
        if(CThostFtdcAccountPropertyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcAccountPropertyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcAccountPropertyField_BrokerID, CThostFtdcAccountPropertyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcAccountPropertyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcAccountPropertyField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcAccountPropertyField_AccountID != NULL ) {
        if(CThostFtdcAccountPropertyField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcAccountPropertyField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcAccountPropertyField_AccountID, CThostFtdcAccountPropertyField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcAccountPropertyField_AccountID, sizeof(data->AccountID));
        CThostFtdcAccountPropertyField_AccountID = NULL;
    }

    /// 银行统一标识类型
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcAccountPropertyField_BankID != NULL ) {
        if(CThostFtdcAccountPropertyField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcAccountPropertyField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcAccountPropertyField_BankID, CThostFtdcAccountPropertyField_BankID_length);
        strncpy(data->BankID, CThostFtdcAccountPropertyField_BankID, sizeof(data->BankID));
        CThostFtdcAccountPropertyField_BankID = NULL;
    }

    /// 银行账户
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcAccountPropertyField_BankAccount != NULL ) {
        if(CThostFtdcAccountPropertyField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcAccountPropertyField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcAccountPropertyField_BankAccount, CThostFtdcAccountPropertyField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcAccountPropertyField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcAccountPropertyField_BankAccount = NULL;
    }

    /// 银行账户的开户人名称
    /// typedef char TThostFtdcInvestorFullNameType[101]
    if( CThostFtdcAccountPropertyField_OpenName != NULL ) {
        if(CThostFtdcAccountPropertyField_OpenName_length >= (Py_ssize_t)sizeof(data->OpenName)) {
            PyErr_Format(PyExc_ValueError, "OpenName too long: length=%zd (max allowed is 100)", CThostFtdcAccountPropertyField_OpenName_length);
            return -1;
        }
        // memset(data->OpenName, 0, sizeof(data->OpenName));
        // memcpy(data->OpenName, CThostFtdcAccountPropertyField_OpenName, CThostFtdcAccountPropertyField_OpenName_length);
        strncpy(data->OpenName, CThostFtdcAccountPropertyField_OpenName, sizeof(data->OpenName));
        CThostFtdcAccountPropertyField_OpenName = NULL;
    }

    /// 银行账户的开户行
    /// typedef char TThostFtdcOpenBankType[101]
    if( CThostFtdcAccountPropertyField_OpenBank != NULL ) {
        if(CThostFtdcAccountPropertyField_OpenBank_length >= (Py_ssize_t)sizeof(data->OpenBank)) {
            PyErr_Format(PyExc_ValueError, "OpenBank too long: length=%zd (max allowed is 100)", CThostFtdcAccountPropertyField_OpenBank_length);
            return -1;
        }
        // memset(data->OpenBank, 0, sizeof(data->OpenBank));
        // memcpy(data->OpenBank, CThostFtdcAccountPropertyField_OpenBank, CThostFtdcAccountPropertyField_OpenBank_length);
        strncpy(data->OpenBank, CThostFtdcAccountPropertyField_OpenBank, sizeof(data->OpenBank));
        CThostFtdcAccountPropertyField_OpenBank = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcAccountPropertyField_IsActive;

    /// 账户来源
    /// typedef char TThostFtdcAccountSourceTypeType
    data->AccountSourceType = CThostFtdcAccountPropertyField_AccountSourceType;

    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcAccountPropertyField_OpenDate != NULL ) {
        if(CThostFtdcAccountPropertyField_OpenDate_length >= (Py_ssize_t)sizeof(data->OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is 8)", CThostFtdcAccountPropertyField_OpenDate_length);
            return -1;
        }
        // memset(data->OpenDate, 0, sizeof(data->OpenDate));
        // memcpy(data->OpenDate, CThostFtdcAccountPropertyField_OpenDate, CThostFtdcAccountPropertyField_OpenDate_length);
        strncpy(data->OpenDate, CThostFtdcAccountPropertyField_OpenDate, sizeof(data->OpenDate));
        CThostFtdcAccountPropertyField_OpenDate = NULL;
    }

    /// 注销日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcAccountPropertyField_CancelDate != NULL ) {
        if(CThostFtdcAccountPropertyField_CancelDate_length >= (Py_ssize_t)sizeof(data->CancelDate)) {
            PyErr_Format(PyExc_ValueError, "CancelDate too long: length=%zd (max allowed is 8)", CThostFtdcAccountPropertyField_CancelDate_length);
            return -1;
        }
        // memset(data->CancelDate, 0, sizeof(data->CancelDate));
        // memcpy(data->CancelDate, CThostFtdcAccountPropertyField_CancelDate, CThostFtdcAccountPropertyField_CancelDate_length);
        strncpy(data->CancelDate, CThostFtdcAccountPropertyField_CancelDate, sizeof(data->CancelDate));
        CThostFtdcAccountPropertyField_CancelDate = NULL;
    }

    /// 录入员代码
    /// typedef char TThostFtdcOperatorIDType[65]
    if( CThostFtdcAccountPropertyField_OperatorID != NULL ) {
        if(CThostFtdcAccountPropertyField_OperatorID_length >= (Py_ssize_t)sizeof(data->OperatorID)) {
            PyErr_Format(PyExc_ValueError, "OperatorID too long: length=%zd (max allowed is 64)", CThostFtdcAccountPropertyField_OperatorID_length);
            return -1;
        }
        // memset(data->OperatorID, 0, sizeof(data->OperatorID));
        // memcpy(data->OperatorID, CThostFtdcAccountPropertyField_OperatorID, CThostFtdcAccountPropertyField_OperatorID_length);
        strncpy(data->OperatorID, CThostFtdcAccountPropertyField_OperatorID, sizeof(data->OperatorID));
        CThostFtdcAccountPropertyField_OperatorID = NULL;
    }

    /// 录入日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcAccountPropertyField_OperateDate != NULL ) {
        if(CThostFtdcAccountPropertyField_OperateDate_length >= (Py_ssize_t)sizeof(data->OperateDate)) {
            PyErr_Format(PyExc_ValueError, "OperateDate too long: length=%zd (max allowed is 8)", CThostFtdcAccountPropertyField_OperateDate_length);
            return -1;
        }
        // memset(data->OperateDate, 0, sizeof(data->OperateDate));
        // memcpy(data->OperateDate, CThostFtdcAccountPropertyField_OperateDate, CThostFtdcAccountPropertyField_OperateDate_length);
        strncpy(data->OperateDate, CThostFtdcAccountPropertyField_OperateDate, sizeof(data->OperateDate));
        CThostFtdcAccountPropertyField_OperateDate = NULL;
    }

    /// 录入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcAccountPropertyField_OperateTime != NULL ) {
        if(CThostFtdcAccountPropertyField_OperateTime_length >= (Py_ssize_t)sizeof(data->OperateTime)) {
            PyErr_Format(PyExc_ValueError, "OperateTime too long: length=%zd (max allowed is 8)", CThostFtdcAccountPropertyField_OperateTime_length);
            return -1;
        }
        // memset(data->OperateTime, 0, sizeof(data->OperateTime));
        // memcpy(data->OperateTime, CThostFtdcAccountPropertyField_OperateTime, CThostFtdcAccountPropertyField_OperateTime_length);
        strncpy(data->OperateTime, CThostFtdcAccountPropertyField_OperateTime, sizeof(data->OperateTime));
        CThostFtdcAccountPropertyField_OperateTime = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcAccountPropertyField_CurrencyID != NULL ) {
        if(CThostFtdcAccountPropertyField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcAccountPropertyField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcAccountPropertyField_CurrencyID, CThostFtdcAccountPropertyField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcAccountPropertyField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcAccountPropertyField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAccountPropertyFieldType_repr(PyObject *self) {

    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "OpenName", data->OpenName//, (Py_ssize_t)sizeof(data->OpenName)
        , "OpenBank", data->OpenBank//, (Py_ssize_t)sizeof(data->OpenBank)
        , "IsActive", data->IsActive
        , "AccountSourceType", data->AccountSourceType
        , "OpenDate", data->OpenDate//, (Py_ssize_t)sizeof(data->OpenDate)
        , "CancelDate", data->CancelDate//, (Py_ssize_t)sizeof(data->CancelDate)
        , "OperatorID", data->OperatorID//, (Py_ssize_t)sizeof(data->OperatorID)
        , "OperateDate", data->OperateDate//, (Py_ssize_t)sizeof(data->OperateDate)
        , "OperateTime", data->OperateTime//, (Py_ssize_t)sizeof(data->OperateTime)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAccountPropertyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAccountPropertyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcAccountPropertyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcAccountPropertyFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行统一标识类型
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcAccountPropertyFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行账户
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcAccountPropertyFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行账户的开户人名称
/// typedef char TThostFtdcInvestorFullNameType[101]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_OpenName(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenName, (Py_ssize_t)sizeof(data->OpenName));
    return PyBytes_FromString(data->OpenName);
}

static int PyCThostFtdcAccountPropertyFieldType_set_OpenName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::OpenName)) {
        PyErr_SetString(PyExc_ValueError, "OpenName must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->OpenName, 0, sizeof(data->OpenName));
    // memcpy(data->OpenName, buf, len);
    strncpy(data->OpenName, buf, sizeof(data->OpenName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行账户的开户行
/// typedef char TThostFtdcOpenBankType[101]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_OpenBank(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenBank, (Py_ssize_t)sizeof(data->OpenBank));
    return PyBytes_FromString(data->OpenBank);
}

static int PyCThostFtdcAccountPropertyFieldType_set_OpenBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::OpenBank)) {
        PyErr_SetString(PyExc_ValueError, "OpenBank must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->OpenBank, 0, sizeof(data->OpenBank));
    // memcpy(data->OpenBank, buf, len);
    strncpy(data->OpenBank, buf, sizeof(data->OpenBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 账户来源
/// typedef char TThostFtdcAccountSourceTypeType
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_AccountSourceType(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AccountSourceType), 1);
}

static int PyCThostFtdcAccountPropertyFieldType_set_AccountSourceType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountSourceType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::AccountSourceType)) {
        PyErr_SetString(PyExc_ValueError, "AccountSourceType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    data->AccountSourceType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开户日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_OpenDate(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenDate, (Py_ssize_t)sizeof(data->OpenDate));
    return PyBytes_FromString(data->OpenDate);
}

static int PyCThostFtdcAccountPropertyFieldType_set_OpenDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->OpenDate, 0, sizeof(data->OpenDate));
    // memcpy(data->OpenDate, buf, len);
    strncpy(data->OpenDate, buf, sizeof(data->OpenDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 注销日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_CancelDate(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelDate, (Py_ssize_t)sizeof(data->CancelDate));
    return PyBytes_FromString(data->CancelDate);
}

static int PyCThostFtdcAccountPropertyFieldType_set_CancelDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::CancelDate)) {
        PyErr_SetString(PyExc_ValueError, "CancelDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->CancelDate, 0, sizeof(data->CancelDate));
    // memcpy(data->CancelDate, buf, len);
    strncpy(data->CancelDate, buf, sizeof(data->CancelDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 录入员代码
/// typedef char TThostFtdcOperatorIDType[65]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_OperatorID(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperatorID, (Py_ssize_t)sizeof(data->OperatorID));
    return PyBytes_FromString(data->OperatorID);
}

static int PyCThostFtdcAccountPropertyFieldType_set_OperatorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperatorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::OperatorID)) {
        PyErr_SetString(PyExc_ValueError, "OperatorID must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->OperatorID, 0, sizeof(data->OperatorID));
    // memcpy(data->OperatorID, buf, len);
    strncpy(data->OperatorID, buf, sizeof(data->OperatorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 录入日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_OperateDate(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperateDate, (Py_ssize_t)sizeof(data->OperateDate));
    return PyBytes_FromString(data->OperateDate);
}

static int PyCThostFtdcAccountPropertyFieldType_set_OperateDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperateDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::OperateDate)) {
        PyErr_SetString(PyExc_ValueError, "OperateDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->OperateDate, 0, sizeof(data->OperateDate));
    // memcpy(data->OperateDate, buf, len);
    strncpy(data->OperateDate, buf, sizeof(data->OperateDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 录入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_OperateTime(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperateTime, (Py_ssize_t)sizeof(data->OperateTime));
    return PyBytes_FromString(data->OperateTime);
}

static int PyCThostFtdcAccountPropertyFieldType_set_OperateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::OperateTime)) {
        PyErr_SetString(PyExc_ValueError, "OperateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->OperateTime, 0, sizeof(data->OperateTime));
    // memcpy(data->OperateTime, buf, len);
    strncpy(data->OperateTime, buf, sizeof(data->OperateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcAccountPropertyFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcAccountPropertyFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAccountPropertyField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAccountPropertyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAccountPropertyFieldData>(self);
    CThostFtdcAccountPropertyField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAccountPropertyFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcAccountPropertyFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAccountPropertyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcAccountPropertyFieldType_get_BrokerID,
    .set = PyCThostFtdcAccountPropertyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcAccountPropertyFieldType_get_AccountID,
    .set = PyCThostFtdcAccountPropertyFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 银行统一标识类型
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcAccountPropertyFieldType_get_BankID,
    .set = PyCThostFtdcAccountPropertyFieldType_set_BankID,
    .doc = PyDoc_STR("银行统一标识类型"),
    },
    /// 银行账户
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcAccountPropertyFieldType_get_BankAccount,
    .set = PyCThostFtdcAccountPropertyFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行账户"),
    },
    /// 银行账户的开户人名称
    /// typedef char TThostFtdcInvestorFullNameType[101]
    {
    .name = "OpenName",
    .get = PyCThostFtdcAccountPropertyFieldType_get_OpenName,
    .set = PyCThostFtdcAccountPropertyFieldType_set_OpenName,
    .doc = PyDoc_STR("银行账户的开户人名称"),
    },
    /// 银行账户的开户行
    /// typedef char TThostFtdcOpenBankType[101]
    {
    .name = "OpenBank",
    .get = PyCThostFtdcAccountPropertyFieldType_get_OpenBank,
    .set = PyCThostFtdcAccountPropertyFieldType_set_OpenBank,
    .doc = PyDoc_STR("银行账户的开户行"),
    },
    /// 账户来源
    /// typedef char TThostFtdcAccountSourceTypeType
    {
    .name = "AccountSourceType",
    .get = PyCThostFtdcAccountPropertyFieldType_get_AccountSourceType,
    .set = PyCThostFtdcAccountPropertyFieldType_set_AccountSourceType,
    .doc = PyDoc_STR("账户来源"),
    },
    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OpenDate",
    .get = PyCThostFtdcAccountPropertyFieldType_get_OpenDate,
    .set = PyCThostFtdcAccountPropertyFieldType_set_OpenDate,
    .doc = PyDoc_STR("开户日期"),
    },
    /// 注销日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "CancelDate",
    .get = PyCThostFtdcAccountPropertyFieldType_get_CancelDate,
    .set = PyCThostFtdcAccountPropertyFieldType_set_CancelDate,
    .doc = PyDoc_STR("注销日期"),
    },
    /// 录入员代码
    /// typedef char TThostFtdcOperatorIDType[65]
    {
    .name = "OperatorID",
    .get = PyCThostFtdcAccountPropertyFieldType_get_OperatorID,
    .set = PyCThostFtdcAccountPropertyFieldType_set_OperatorID,
    .doc = PyDoc_STR("录入员代码"),
    },
    /// 录入日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OperateDate",
    .get = PyCThostFtdcAccountPropertyFieldType_get_OperateDate,
    .set = PyCThostFtdcAccountPropertyFieldType_set_OperateDate,
    .doc = PyDoc_STR("录入日期"),
    },
    /// 录入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "OperateTime",
    .get = PyCThostFtdcAccountPropertyFieldType_get_OperateTime,
    .set = PyCThostFtdcAccountPropertyFieldType_set_OperateTime,
    .doc = PyDoc_STR("录入时间"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcAccountPropertyFieldType_get_CurrencyID,
    .set = PyCThostFtdcAccountPropertyFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAccountPropertyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAccountPropertyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银行账户属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAccountPropertyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAccountPropertyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAccountPropertyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAccountPropertyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAccountPropertyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAccountPropertyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银行账户属性")},
    {Py_tp_members, PyCThostFtdcAccountPropertyFieldType_members},
    {Py_tp_getset, PyCThostFtdcAccountPropertyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAccountPropertyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAccountPropertyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAccountPropertyFieldType_spec = {
    .name = "PyCTP.CThostFtdcAccountPropertyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAccountPropertyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAccountPropertyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAccountPropertyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAccountPropertyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAccountPropertyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAccountPropertyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAccountPropertyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAccountPropertyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAccountPropertyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAccountPropertyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}