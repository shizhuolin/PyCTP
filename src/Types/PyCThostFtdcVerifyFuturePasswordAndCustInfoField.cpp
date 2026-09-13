
#include "PyCThostFtdcVerifyFuturePasswordAndCustInfoField.h"

///验证期货资金密码和客户信息

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "AccountID", "Password", "CurrencyID", "LongCustomerName", NULL };


    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcVerifyFuturePasswordAndCustInfoField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcVerifyFuturePasswordAndCustInfoField_CustType = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcVerifyFuturePasswordAndCustInfoField_Password = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordAndCustInfoField_Password_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#cy#y#y#y#", (char **)kwlist
        , &CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName, &CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName_length
        , &CThostFtdcVerifyFuturePasswordAndCustInfoField_IdCardType
        , &CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo, &CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_length
        , &CThostFtdcVerifyFuturePasswordAndCustInfoField_CustType
        , &CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID, &CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID_length
        , &CThostFtdcVerifyFuturePasswordAndCustInfoField_Password, &CThostFtdcVerifyFuturePasswordAndCustInfoField_Password_length
        , &CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID, &CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID_length
        , &CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName, &CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);


    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName != NULL ) {
        if(CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName, CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcVerifyFuturePasswordAndCustInfoField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcVerifyFuturePasswordAndCustInfoField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo, CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcVerifyFuturePasswordAndCustInfoField_CustType;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID != NULL ) {
        if(CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID, CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID, sizeof(data->AccountID));
        CThostFtdcVerifyFuturePasswordAndCustInfoField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcVerifyFuturePasswordAndCustInfoField_Password != NULL ) {
        if(CThostFtdcVerifyFuturePasswordAndCustInfoField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcVerifyFuturePasswordAndCustInfoField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcVerifyFuturePasswordAndCustInfoField_Password, CThostFtdcVerifyFuturePasswordAndCustInfoField_Password_length);
        strncpy(data->Password, CThostFtdcVerifyFuturePasswordAndCustInfoField_Password, sizeof(data->Password));
        CThostFtdcVerifyFuturePasswordAndCustInfoField_Password = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID != NULL ) {
        if(CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID, CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcVerifyFuturePasswordAndCustInfoField_CurrencyID = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName != NULL ) {
        if(CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName, CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcVerifyFuturePasswordAndCustInfoField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y}"
        , "CustomerName", data->CustomerName//, (Py_ssize_t)sizeof(data->CustomerName)
        , "IdCardType", data->IdCardType
        , "IdentifiedCardNo", data->IdentifiedCardNo//, (Py_ssize_t)sizeof(data->IdentifiedCardNo)
        , "CustType", data->CustType
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyFuturePasswordAndCustInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyFuturePasswordAndCustInfoField repr");
        return NULL;
    }

    return repr;
}


/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData>(self);
    CThostFtdcVerifyFuturePasswordAndCustInfoField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_getsets[] = {
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_CustomerName,
    .set = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_IdCardType,
    .set = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_CustType,
    .set = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_AccountID,
    .set = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_Password,
    .set = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_CurrencyID,
    .set = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_get_LongCustomerName,
    .set = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcVerifyFuturePasswordAndCustInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("验证期货资金密码和客户信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("验证期货资金密码和客户信息")},
    {Py_tp_members, PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcVerifyFuturePasswordAndCustInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcVerifyFuturePasswordAndCustInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyFuturePasswordAndCustInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}