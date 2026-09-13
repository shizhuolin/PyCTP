
#include "PyCThostFtdcSyncingInvestorField.h"

///正在同步中的投资者

static int PyCThostFtdcSyncingInvestorFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InvestorID", "BrokerID", "InvestorGroupID", "InvestorName", "IdentifiedCardType", "IdentifiedCardNo", "IsActive", "Telephone", "Address", "OpenDate", "Mobile", "CommModelID", "MarginModelID", "IsOrderFreq", "IsOpenVolLimit", NULL };


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInvestorField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_InvestorID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncingInvestorField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_BrokerID_length = 0;

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInvestorField_InvestorGroupID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_InvestorGroupID_length = 0;

    /// 投资者名称
    /// typedef char TThostFtdcPartyNameType[81]
    char *CThostFtdcSyncingInvestorField_InvestorName = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_InvestorName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcSyncingInvestorField_IdentifiedCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcSyncingInvestorField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_IdentifiedCardNo_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncingInvestorField_IsActive = 0;

    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcSyncingInvestorField_Telephone = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_Telephone_length = 0;

    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcSyncingInvestorField_Address = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_Address_length = 0;

    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncingInvestorField_OpenDate = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_OpenDate_length = 0;

    /// 手机
    /// typedef char TThostFtdcMobileType[41]
    char *CThostFtdcSyncingInvestorField_Mobile = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_Mobile_length = 0;

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInvestorField_CommModelID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_CommModelID_length = 0;

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInvestorField_MarginModelID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorField_MarginModelID_length = 0;

    /// 是否频率控制
    /// typedef char TThostFtdcEnumBoolType
    char CThostFtdcSyncingInvestorField_IsOrderFreq = 0;

    /// 是否开仓限制
    /// typedef char TThostFtdcEnumBoolType
    char CThostFtdcSyncingInvestorField_IsOpenVolLimit = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#iy#y#y#y#y#y#cc", (char **)kwlist
        , &CThostFtdcSyncingInvestorField_InvestorID, &CThostFtdcSyncingInvestorField_InvestorID_length
        , &CThostFtdcSyncingInvestorField_BrokerID, &CThostFtdcSyncingInvestorField_BrokerID_length
        , &CThostFtdcSyncingInvestorField_InvestorGroupID, &CThostFtdcSyncingInvestorField_InvestorGroupID_length
        , &CThostFtdcSyncingInvestorField_InvestorName, &CThostFtdcSyncingInvestorField_InvestorName_length
        , &CThostFtdcSyncingInvestorField_IdentifiedCardType
        , &CThostFtdcSyncingInvestorField_IdentifiedCardNo, &CThostFtdcSyncingInvestorField_IdentifiedCardNo_length
        , &CThostFtdcSyncingInvestorField_IsActive
        , &CThostFtdcSyncingInvestorField_Telephone, &CThostFtdcSyncingInvestorField_Telephone_length
        , &CThostFtdcSyncingInvestorField_Address, &CThostFtdcSyncingInvestorField_Address_length
        , &CThostFtdcSyncingInvestorField_OpenDate, &CThostFtdcSyncingInvestorField_OpenDate_length
        , &CThostFtdcSyncingInvestorField_Mobile, &CThostFtdcSyncingInvestorField_Mobile_length
        , &CThostFtdcSyncingInvestorField_CommModelID, &CThostFtdcSyncingInvestorField_CommModelID_length
        , &CThostFtdcSyncingInvestorField_MarginModelID, &CThostFtdcSyncingInvestorField_MarginModelID_length
        , &CThostFtdcSyncingInvestorField_IsOrderFreq
        , &CThostFtdcSyncingInvestorField_IsOpenVolLimit
    )) {
        return -1;
    }

    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInvestorField_InvestorID != NULL ) {
        if(CThostFtdcSyncingInvestorField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInvestorField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncingInvestorField_InvestorID, CThostFtdcSyncingInvestorField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncingInvestorField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncingInvestorField_InvestorID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncingInvestorField_BrokerID != NULL ) {
        if(CThostFtdcSyncingInvestorField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingInvestorField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncingInvestorField_BrokerID, CThostFtdcSyncingInvestorField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncingInvestorField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncingInvestorField_BrokerID = NULL;
    }

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInvestorField_InvestorGroupID != NULL ) {
        if(CThostFtdcSyncingInvestorField_InvestorGroupID_length >= (Py_ssize_t)sizeof(data->InvestorGroupID)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInvestorField_InvestorGroupID_length);
            return -1;
        }
        // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
        // memcpy(data->InvestorGroupID, CThostFtdcSyncingInvestorField_InvestorGroupID, CThostFtdcSyncingInvestorField_InvestorGroupID_length);
        strncpy(data->InvestorGroupID, CThostFtdcSyncingInvestorField_InvestorGroupID, sizeof(data->InvestorGroupID));
        CThostFtdcSyncingInvestorField_InvestorGroupID = NULL;
    }

    /// 投资者名称
    /// typedef char TThostFtdcPartyNameType[81]
    if( CThostFtdcSyncingInvestorField_InvestorName != NULL ) {
        if(CThostFtdcSyncingInvestorField_InvestorName_length >= (Py_ssize_t)sizeof(data->InvestorName)) {
            PyErr_Format(PyExc_ValueError, "InvestorName too long: length=%zd (max allowed is 80)", CThostFtdcSyncingInvestorField_InvestorName_length);
            return -1;
        }
        // memset(data->InvestorName, 0, sizeof(data->InvestorName));
        // memcpy(data->InvestorName, CThostFtdcSyncingInvestorField_InvestorName, CThostFtdcSyncingInvestorField_InvestorName_length);
        strncpy(data->InvestorName, CThostFtdcSyncingInvestorField_InvestorName, sizeof(data->InvestorName));
        CThostFtdcSyncingInvestorField_InvestorName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdentifiedCardType = CThostFtdcSyncingInvestorField_IdentifiedCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcSyncingInvestorField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcSyncingInvestorField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcSyncingInvestorField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcSyncingInvestorField_IdentifiedCardNo, CThostFtdcSyncingInvestorField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcSyncingInvestorField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcSyncingInvestorField_IdentifiedCardNo = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcSyncingInvestorField_IsActive;

    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcSyncingInvestorField_Telephone != NULL ) {
        if(CThostFtdcSyncingInvestorField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcSyncingInvestorField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcSyncingInvestorField_Telephone, CThostFtdcSyncingInvestorField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcSyncingInvestorField_Telephone, sizeof(data->Telephone));
        CThostFtdcSyncingInvestorField_Telephone = NULL;
    }

    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcSyncingInvestorField_Address != NULL ) {
        if(CThostFtdcSyncingInvestorField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcSyncingInvestorField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcSyncingInvestorField_Address, CThostFtdcSyncingInvestorField_Address_length);
        strncpy(data->Address, CThostFtdcSyncingInvestorField_Address, sizeof(data->Address));
        CThostFtdcSyncingInvestorField_Address = NULL;
    }

    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncingInvestorField_OpenDate != NULL ) {
        if(CThostFtdcSyncingInvestorField_OpenDate_length >= (Py_ssize_t)sizeof(data->OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is 8)", CThostFtdcSyncingInvestorField_OpenDate_length);
            return -1;
        }
        // memset(data->OpenDate, 0, sizeof(data->OpenDate));
        // memcpy(data->OpenDate, CThostFtdcSyncingInvestorField_OpenDate, CThostFtdcSyncingInvestorField_OpenDate_length);
        strncpy(data->OpenDate, CThostFtdcSyncingInvestorField_OpenDate, sizeof(data->OpenDate));
        CThostFtdcSyncingInvestorField_OpenDate = NULL;
    }

    /// 手机
    /// typedef char TThostFtdcMobileType[41]
    if( CThostFtdcSyncingInvestorField_Mobile != NULL ) {
        if(CThostFtdcSyncingInvestorField_Mobile_length >= (Py_ssize_t)sizeof(data->Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is 40)", CThostFtdcSyncingInvestorField_Mobile_length);
            return -1;
        }
        // memset(data->Mobile, 0, sizeof(data->Mobile));
        // memcpy(data->Mobile, CThostFtdcSyncingInvestorField_Mobile, CThostFtdcSyncingInvestorField_Mobile_length);
        strncpy(data->Mobile, CThostFtdcSyncingInvestorField_Mobile, sizeof(data->Mobile));
        CThostFtdcSyncingInvestorField_Mobile = NULL;
    }

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInvestorField_CommModelID != NULL ) {
        if(CThostFtdcSyncingInvestorField_CommModelID_length >= (Py_ssize_t)sizeof(data->CommModelID)) {
            PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInvestorField_CommModelID_length);
            return -1;
        }
        // memset(data->CommModelID, 0, sizeof(data->CommModelID));
        // memcpy(data->CommModelID, CThostFtdcSyncingInvestorField_CommModelID, CThostFtdcSyncingInvestorField_CommModelID_length);
        strncpy(data->CommModelID, CThostFtdcSyncingInvestorField_CommModelID, sizeof(data->CommModelID));
        CThostFtdcSyncingInvestorField_CommModelID = NULL;
    }

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInvestorField_MarginModelID != NULL ) {
        if(CThostFtdcSyncingInvestorField_MarginModelID_length >= (Py_ssize_t)sizeof(data->MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInvestorField_MarginModelID_length);
            return -1;
        }
        // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
        // memcpy(data->MarginModelID, CThostFtdcSyncingInvestorField_MarginModelID, CThostFtdcSyncingInvestorField_MarginModelID_length);
        strncpy(data->MarginModelID, CThostFtdcSyncingInvestorField_MarginModelID, sizeof(data->MarginModelID));
        CThostFtdcSyncingInvestorField_MarginModelID = NULL;
    }

    /// 是否频率控制
    /// typedef char TThostFtdcEnumBoolType
    data->IsOrderFreq = CThostFtdcSyncingInvestorField_IsOrderFreq;

    /// 是否开仓限制
    /// typedef char TThostFtdcEnumBoolType
    data->IsOpenVolLimit = CThostFtdcSyncingInvestorField_IsOpenVolLimit;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncingInvestorFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:c}"
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorGroupID", data->InvestorGroupID//, (Py_ssize_t)sizeof(data->InvestorGroupID)
        , "InvestorName", data->InvestorName//, (Py_ssize_t)sizeof(data->InvestorName)
        , "IdentifiedCardType", data->IdentifiedCardType
        , "IdentifiedCardNo", data->IdentifiedCardNo//, (Py_ssize_t)sizeof(data->IdentifiedCardNo)
        , "IsActive", data->IsActive
        , "Telephone", data->Telephone//, (Py_ssize_t)sizeof(data->Telephone)
        , "Address", data->Address//, (Py_ssize_t)sizeof(data->Address)
        , "OpenDate", data->OpenDate//, (Py_ssize_t)sizeof(data->OpenDate)
        , "Mobile", data->Mobile//, (Py_ssize_t)sizeof(data->Mobile)
        , "CommModelID", data->CommModelID//, (Py_ssize_t)sizeof(data->CommModelID)
        , "MarginModelID", data->MarginModelID//, (Py_ssize_t)sizeof(data->MarginModelID)
        , "IsOrderFreq", data->IsOrderFreq
        , "IsOpenVolLimit", data->IsOpenVolLimit
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorField repr");
        return NULL;
    }

    return repr;
}


/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者分组代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_InvestorGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorGroupID, (Py_ssize_t)sizeof(data->InvestorGroupID));
    return PyBytes_FromString(data->InvestorGroupID);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_InvestorGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::InvestorGroupID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
    // memcpy(data->InvestorGroupID, buf, len);
    strncpy(data->InvestorGroupID, buf, sizeof(data->InvestorGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者名称
/// typedef char TThostFtdcPartyNameType[81]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_InvestorName(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorName, (Py_ssize_t)sizeof(data->InvestorName));
    return PyBytes_FromString(data->InvestorName);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_InvestorName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::InvestorName)) {
        PyErr_SetString(PyExc_ValueError, "InvestorName must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->InvestorName, 0, sizeof(data->InvestorName));
    // memcpy(data->InvestorName, buf, len);
    strncpy(data->InvestorName, buf, sizeof(data->InvestorName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_IdentifiedCardType(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdentifiedCardType), 1);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_IdentifiedCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::IdentifiedCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    data->IdentifiedCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 联系电话
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 通讯地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开户日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_OpenDate(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenDate, (Py_ssize_t)sizeof(data->OpenDate));
    return PyBytes_FromString(data->OpenDate);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_OpenDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->OpenDate, 0, sizeof(data->OpenDate));
    // memcpy(data->OpenDate, buf, len);
    strncpy(data->OpenDate, buf, sizeof(data->OpenDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机
/// typedef char TThostFtdcMobileType[41]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_Mobile(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Mobile, (Py_ssize_t)sizeof(data->Mobile));
    return PyBytes_FromString(data->Mobile);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_Mobile(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->Mobile, 0, sizeof(data->Mobile));
    // memcpy(data->Mobile, buf, len);
    strncpy(data->Mobile, buf, sizeof(data->Mobile));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手续费率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_CommModelID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommModelID, (Py_ssize_t)sizeof(data->CommModelID));
    return PyBytes_FromString(data->CommModelID);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_CommModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::CommModelID)) {
        PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->CommModelID, 0, sizeof(data->CommModelID));
    // memcpy(data->CommModelID, buf, len);
    strncpy(data->CommModelID, buf, sizeof(data->CommModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保证金率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_MarginModelID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MarginModelID, (Py_ssize_t)sizeof(data->MarginModelID));
    return PyBytes_FromString(data->MarginModelID);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_MarginModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
    // memcpy(data->MarginModelID, buf, len);
    strncpy(data->MarginModelID, buf, sizeof(data->MarginModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 是否频率控制
/// typedef char TThostFtdcEnumBoolType
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_IsOrderFreq(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IsOrderFreq), 1);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_IsOrderFreq(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IsOrderFreq Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::IsOrderFreq)) {
        PyErr_SetString(PyExc_ValueError, "IsOrderFreq must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    data->IsOrderFreq = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 是否开仓限制
/// typedef char TThostFtdcEnumBoolType
static PyObject *PyCThostFtdcSyncingInvestorFieldType_get_IsOpenVolLimit(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IsOpenVolLimit), 1);
}

static int PyCThostFtdcSyncingInvestorFieldType_set_IsOpenVolLimit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IsOpenVolLimit Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorField::IsOpenVolLimit)) {
        PyErr_SetString(PyExc_ValueError, "IsOpenVolLimit must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorFieldData>(self);
    CThostFtdcSyncingInvestorField *data = &(extra->data);
    data->IsOpenVolLimit = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncingInvestorFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingInvestorFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncingInvestorFieldType_getsets[] = {
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorGroupID",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_InvestorGroupID,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_InvestorGroupID,
    .doc = PyDoc_STR("投资者分组代码"),
    },
    /// 投资者名称
    /// typedef char TThostFtdcPartyNameType[81]
    {
    .name = "InvestorName",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_InvestorName,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_InvestorName,
    .doc = PyDoc_STR("投资者名称"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdentifiedCardType",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_IdentifiedCardType,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_IdentifiedCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_Telephone,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_Telephone,
    .doc = PyDoc_STR("联系电话"),
    },
    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_Address,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_Address,
    .doc = PyDoc_STR("通讯地址"),
    },
    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OpenDate",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_OpenDate,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_OpenDate,
    .doc = PyDoc_STR("开户日期"),
    },
    /// 手机
    /// typedef char TThostFtdcMobileType[41]
    {
    .name = "Mobile",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_Mobile,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_Mobile,
    .doc = PyDoc_STR("手机"),
    },
    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "CommModelID",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_CommModelID,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_CommModelID,
    .doc = PyDoc_STR("手续费率模板代码"),
    },
    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "MarginModelID",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_MarginModelID,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_MarginModelID,
    .doc = PyDoc_STR("保证金率模板代码"),
    },
    /// 是否频率控制
    /// typedef char TThostFtdcEnumBoolType
    {
    .name = "IsOrderFreq",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_IsOrderFreq,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_IsOrderFreq,
    .doc = PyDoc_STR("是否频率控制"),
    },
    /// 是否开仓限制
    /// typedef char TThostFtdcEnumBoolType
    {
    .name = "IsOpenVolLimit",
    .get = PyCThostFtdcSyncingInvestorFieldType_get_IsOpenVolLimit,
    .set = PyCThostFtdcSyncingInvestorFieldType_set_IsOpenVolLimit,
    .doc = PyDoc_STR("是否开仓限制"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncingInvestorFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncingInvestorField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("正在同步中的投资者")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncingInvestorFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncingInvestorFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncingInvestorFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncingInvestorFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncingInvestorFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncingInvestorFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("正在同步中的投资者")},
    {Py_tp_members, PyCThostFtdcSyncingInvestorFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncingInvestorFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncingInvestorFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncingInvestorFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncingInvestorFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncingInvestorField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncingInvestorFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncingInvestorFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncingInvestorFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncingInvestorFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncingInvestorFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncingInvestorFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncingInvestorFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncingInvestorFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}