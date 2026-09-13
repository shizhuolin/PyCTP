
#include "PyCThostFtdcInvestUnitField.h"

///投资单元

static int PyCThostFtdcInvestUnitFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InvestUnitID", "InvestorUnitName", "InvestorGroupID", "CommModelID", "MarginModelID", "AccountID", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestUnitField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestUnitField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_InvestorID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInvestUnitField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_InvestUnitID_length = 0;

    /// 投资者单元名称
    /// typedef char TThostFtdcPartyNameType[81]
    char *CThostFtdcInvestUnitField_InvestorUnitName = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_InvestorUnitName_length = 0;

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestUnitField_InvestorGroupID = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_InvestorGroupID_length = 0;

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestUnitField_CommModelID = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_CommModelID_length = 0;

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestUnitField_MarginModelID = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_MarginModelID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcInvestUnitField_AccountID = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcInvestUnitField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcInvestUnitField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcInvestUnitField_BrokerID, &CThostFtdcInvestUnitField_BrokerID_length
        , &CThostFtdcInvestUnitField_InvestorID, &CThostFtdcInvestUnitField_InvestorID_length
        , &CThostFtdcInvestUnitField_InvestUnitID, &CThostFtdcInvestUnitField_InvestUnitID_length
        , &CThostFtdcInvestUnitField_InvestorUnitName, &CThostFtdcInvestUnitField_InvestorUnitName_length
        , &CThostFtdcInvestUnitField_InvestorGroupID, &CThostFtdcInvestUnitField_InvestorGroupID_length
        , &CThostFtdcInvestUnitField_CommModelID, &CThostFtdcInvestUnitField_CommModelID_length
        , &CThostFtdcInvestUnitField_MarginModelID, &CThostFtdcInvestUnitField_MarginModelID_length
        , &CThostFtdcInvestUnitField_AccountID, &CThostFtdcInvestUnitField_AccountID_length
        , &CThostFtdcInvestUnitField_CurrencyID, &CThostFtdcInvestUnitField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestUnitField_BrokerID != NULL ) {
        if(CThostFtdcInvestUnitField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestUnitField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestUnitField_BrokerID, CThostFtdcInvestUnitField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestUnitField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestUnitField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestUnitField_InvestorID != NULL ) {
        if(CThostFtdcInvestUnitField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestUnitField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestUnitField_InvestorID, CThostFtdcInvestUnitField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestUnitField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestUnitField_InvestorID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInvestUnitField_InvestUnitID != NULL ) {
        if(CThostFtdcInvestUnitField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInvestUnitField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInvestUnitField_InvestUnitID, CThostFtdcInvestUnitField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInvestUnitField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInvestUnitField_InvestUnitID = NULL;
    }

    /// 投资者单元名称
    /// typedef char TThostFtdcPartyNameType[81]
    if( CThostFtdcInvestUnitField_InvestorUnitName != NULL ) {
        if(CThostFtdcInvestUnitField_InvestorUnitName_length >= (Py_ssize_t)sizeof(data->InvestorUnitName)) {
            PyErr_Format(PyExc_ValueError, "InvestorUnitName too long: length=%zd (max allowed is 80)", CThostFtdcInvestUnitField_InvestorUnitName_length);
            return -1;
        }
        // memset(data->InvestorUnitName, 0, sizeof(data->InvestorUnitName));
        // memcpy(data->InvestorUnitName, CThostFtdcInvestUnitField_InvestorUnitName, CThostFtdcInvestUnitField_InvestorUnitName_length);
        strncpy(data->InvestorUnitName, CThostFtdcInvestUnitField_InvestorUnitName, sizeof(data->InvestorUnitName));
        CThostFtdcInvestUnitField_InvestorUnitName = NULL;
    }

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestUnitField_InvestorGroupID != NULL ) {
        if(CThostFtdcInvestUnitField_InvestorGroupID_length >= (Py_ssize_t)sizeof(data->InvestorGroupID)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is 12)", CThostFtdcInvestUnitField_InvestorGroupID_length);
            return -1;
        }
        // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
        // memcpy(data->InvestorGroupID, CThostFtdcInvestUnitField_InvestorGroupID, CThostFtdcInvestUnitField_InvestorGroupID_length);
        strncpy(data->InvestorGroupID, CThostFtdcInvestUnitField_InvestorGroupID, sizeof(data->InvestorGroupID));
        CThostFtdcInvestUnitField_InvestorGroupID = NULL;
    }

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestUnitField_CommModelID != NULL ) {
        if(CThostFtdcInvestUnitField_CommModelID_length >= (Py_ssize_t)sizeof(data->CommModelID)) {
            PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is 12)", CThostFtdcInvestUnitField_CommModelID_length);
            return -1;
        }
        // memset(data->CommModelID, 0, sizeof(data->CommModelID));
        // memcpy(data->CommModelID, CThostFtdcInvestUnitField_CommModelID, CThostFtdcInvestUnitField_CommModelID_length);
        strncpy(data->CommModelID, CThostFtdcInvestUnitField_CommModelID, sizeof(data->CommModelID));
        CThostFtdcInvestUnitField_CommModelID = NULL;
    }

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestUnitField_MarginModelID != NULL ) {
        if(CThostFtdcInvestUnitField_MarginModelID_length >= (Py_ssize_t)sizeof(data->MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is 12)", CThostFtdcInvestUnitField_MarginModelID_length);
            return -1;
        }
        // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
        // memcpy(data->MarginModelID, CThostFtdcInvestUnitField_MarginModelID, CThostFtdcInvestUnitField_MarginModelID_length);
        strncpy(data->MarginModelID, CThostFtdcInvestUnitField_MarginModelID, sizeof(data->MarginModelID));
        CThostFtdcInvestUnitField_MarginModelID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcInvestUnitField_AccountID != NULL ) {
        if(CThostFtdcInvestUnitField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcInvestUnitField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcInvestUnitField_AccountID, CThostFtdcInvestUnitField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcInvestUnitField_AccountID, sizeof(data->AccountID));
        CThostFtdcInvestUnitField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcInvestUnitField_CurrencyID != NULL ) {
        if(CThostFtdcInvestUnitField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcInvestUnitField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcInvestUnitField_CurrencyID, CThostFtdcInvestUnitField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcInvestUnitField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcInvestUnitField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestUnitFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InvestorUnitName", data->InvestorUnitName//, (Py_ssize_t)sizeof(data->InvestorUnitName)
        , "InvestorGroupID", data->InvestorGroupID//, (Py_ssize_t)sizeof(data->InvestorGroupID)
        , "CommModelID", data->CommModelID//, (Py_ssize_t)sizeof(data->CommModelID)
        , "MarginModelID", data->MarginModelID//, (Py_ssize_t)sizeof(data->MarginModelID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestUnitField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestUnitField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestUnitFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestUnitFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInvestUnitFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者单元名称
/// typedef char TThostFtdcPartyNameType[81]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_InvestorUnitName(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorUnitName, (Py_ssize_t)sizeof(data->InvestorUnitName));
    return PyBytes_FromString(data->InvestorUnitName);
}

static int PyCThostFtdcInvestUnitFieldType_set_InvestorUnitName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorUnitName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::InvestorUnitName)) {
        PyErr_SetString(PyExc_ValueError, "InvestorUnitName must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->InvestorUnitName, 0, sizeof(data->InvestorUnitName));
    // memcpy(data->InvestorUnitName, buf, len);
    strncpy(data->InvestorUnitName, buf, sizeof(data->InvestorUnitName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者分组代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_InvestorGroupID(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorGroupID, (Py_ssize_t)sizeof(data->InvestorGroupID));
    return PyBytes_FromString(data->InvestorGroupID);
}

static int PyCThostFtdcInvestUnitFieldType_set_InvestorGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::InvestorGroupID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
    // memcpy(data->InvestorGroupID, buf, len);
    strncpy(data->InvestorGroupID, buf, sizeof(data->InvestorGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手续费率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_CommModelID(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommModelID, (Py_ssize_t)sizeof(data->CommModelID));
    return PyBytes_FromString(data->CommModelID);
}

static int PyCThostFtdcInvestUnitFieldType_set_CommModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::CommModelID)) {
        PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->CommModelID, 0, sizeof(data->CommModelID));
    // memcpy(data->CommModelID, buf, len);
    strncpy(data->CommModelID, buf, sizeof(data->CommModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保证金率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_MarginModelID(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MarginModelID, (Py_ssize_t)sizeof(data->MarginModelID));
    return PyBytes_FromString(data->MarginModelID);
}

static int PyCThostFtdcInvestUnitFieldType_set_MarginModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
    // memcpy(data->MarginModelID, buf, len);
    strncpy(data->MarginModelID, buf, sizeof(data->MarginModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcInvestUnitFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcInvestUnitFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcInvestUnitFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestUnitField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(self);
    CThostFtdcInvestUnitField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestUnitFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestUnitFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestUnitFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestUnitFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestUnitFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestUnitFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInvestUnitFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInvestUnitFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 投资者单元名称
    /// typedef char TThostFtdcPartyNameType[81]
    {
    .name = "InvestorUnitName",
    .get = PyCThostFtdcInvestUnitFieldType_get_InvestorUnitName,
    .set = PyCThostFtdcInvestUnitFieldType_set_InvestorUnitName,
    .doc = PyDoc_STR("投资者单元名称"),
    },
    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorGroupID",
    .get = PyCThostFtdcInvestUnitFieldType_get_InvestorGroupID,
    .set = PyCThostFtdcInvestUnitFieldType_set_InvestorGroupID,
    .doc = PyDoc_STR("投资者分组代码"),
    },
    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "CommModelID",
    .get = PyCThostFtdcInvestUnitFieldType_get_CommModelID,
    .set = PyCThostFtdcInvestUnitFieldType_set_CommModelID,
    .doc = PyDoc_STR("手续费率模板代码"),
    },
    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "MarginModelID",
    .get = PyCThostFtdcInvestUnitFieldType_get_MarginModelID,
    .set = PyCThostFtdcInvestUnitFieldType_set_MarginModelID,
    .doc = PyDoc_STR("保证金率模板代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcInvestUnitFieldType_get_AccountID,
    .set = PyCThostFtdcInvestUnitFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcInvestUnitFieldType_get_CurrencyID,
    .set = PyCThostFtdcInvestUnitFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestUnitFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestUnitField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资单元")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestUnitFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestUnitFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestUnitFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestUnitFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestUnitFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestUnitFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资单元")},
    {Py_tp_members, PyCThostFtdcInvestUnitFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestUnitFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestUnitFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestUnitFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestUnitFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestUnitField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestUnitFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestUnitFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestUnitFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestUnitFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestUnitFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestUnitFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestUnitFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestUnitFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestUnitField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestUnitField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}