
#include "PyCThostFtdcInvestorField.h"

///投资者

static int PyCThostFtdcInvestorFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InvestorID", "BrokerID", "InvestorGroupID", "InvestorName", "IdentifiedCardType", "IdentifiedCardNo", "IsActive", "Telephone", "Address", "OpenDate", "Mobile", "CommModelID", "MarginModelID", "IsOrderFreq", "IsOpenVolLimit", NULL };


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorField_InvestorID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorField_BrokerID_length = 0;

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorField_InvestorGroupID = NULL;
    Py_ssize_t CThostFtdcInvestorField_InvestorGroupID_length = 0;

    /// 投资者名称
    /// typedef char TThostFtdcPartyNameType[81]
    char *CThostFtdcInvestorField_InvestorName = NULL;
    Py_ssize_t CThostFtdcInvestorField_InvestorName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcInvestorField_IdentifiedCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcInvestorField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcInvestorField_IdentifiedCardNo_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInvestorField_IsActive = 0;

    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcInvestorField_Telephone = NULL;
    Py_ssize_t CThostFtdcInvestorField_Telephone_length = 0;

    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcInvestorField_Address = NULL;
    Py_ssize_t CThostFtdcInvestorField_Address_length = 0;

    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInvestorField_OpenDate = NULL;
    Py_ssize_t CThostFtdcInvestorField_OpenDate_length = 0;

    /// 手机
    /// typedef char TThostFtdcMobileType[41]
    char *CThostFtdcInvestorField_Mobile = NULL;
    Py_ssize_t CThostFtdcInvestorField_Mobile_length = 0;

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorField_CommModelID = NULL;
    Py_ssize_t CThostFtdcInvestorField_CommModelID_length = 0;

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorField_MarginModelID = NULL;
    Py_ssize_t CThostFtdcInvestorField_MarginModelID_length = 0;

    /// 是否频率控制
    /// typedef char TThostFtdcEnumBoolType
    char CThostFtdcInvestorField_IsOrderFreq = 0;

    /// 是否开仓限制
    /// typedef char TThostFtdcEnumBoolType
    char CThostFtdcInvestorField_IsOpenVolLimit = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#iy#y#y#y#y#y#cc", (char **)kwlist
        , &CThostFtdcInvestorField_InvestorID, &CThostFtdcInvestorField_InvestorID_length
        , &CThostFtdcInvestorField_BrokerID, &CThostFtdcInvestorField_BrokerID_length
        , &CThostFtdcInvestorField_InvestorGroupID, &CThostFtdcInvestorField_InvestorGroupID_length
        , &CThostFtdcInvestorField_InvestorName, &CThostFtdcInvestorField_InvestorName_length
        , &CThostFtdcInvestorField_IdentifiedCardType
        , &CThostFtdcInvestorField_IdentifiedCardNo, &CThostFtdcInvestorField_IdentifiedCardNo_length
        , &CThostFtdcInvestorField_IsActive
        , &CThostFtdcInvestorField_Telephone, &CThostFtdcInvestorField_Telephone_length
        , &CThostFtdcInvestorField_Address, &CThostFtdcInvestorField_Address_length
        , &CThostFtdcInvestorField_OpenDate, &CThostFtdcInvestorField_OpenDate_length
        , &CThostFtdcInvestorField_Mobile, &CThostFtdcInvestorField_Mobile_length
        , &CThostFtdcInvestorField_CommModelID, &CThostFtdcInvestorField_CommModelID_length
        , &CThostFtdcInvestorField_MarginModelID, &CThostFtdcInvestorField_MarginModelID_length
        , &CThostFtdcInvestorField_IsOrderFreq
        , &CThostFtdcInvestorField_IsOpenVolLimit
    )) {
        return -1;
    }

    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorField_InvestorID != NULL ) {
        if(CThostFtdcInvestorField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorField_InvestorID, CThostFtdcInvestorField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorField_InvestorID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorField_BrokerID != NULL ) {
        if(CThostFtdcInvestorField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorField_BrokerID, CThostFtdcInvestorField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorField_BrokerID = NULL;
    }

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorField_InvestorGroupID != NULL ) {
        if(CThostFtdcInvestorField_InvestorGroupID_length >= (Py_ssize_t)sizeof(data->InvestorGroupID)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorField_InvestorGroupID_length);
            return -1;
        }
        // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
        // memcpy(data->InvestorGroupID, CThostFtdcInvestorField_InvestorGroupID, CThostFtdcInvestorField_InvestorGroupID_length);
        strncpy(data->InvestorGroupID, CThostFtdcInvestorField_InvestorGroupID, sizeof(data->InvestorGroupID));
        CThostFtdcInvestorField_InvestorGroupID = NULL;
    }

    /// 投资者名称
    /// typedef char TThostFtdcPartyNameType[81]
    if( CThostFtdcInvestorField_InvestorName != NULL ) {
        if(CThostFtdcInvestorField_InvestorName_length >= (Py_ssize_t)sizeof(data->InvestorName)) {
            PyErr_Format(PyExc_ValueError, "InvestorName too long: length=%zd (max allowed is 80)", CThostFtdcInvestorField_InvestorName_length);
            return -1;
        }
        // memset(data->InvestorName, 0, sizeof(data->InvestorName));
        // memcpy(data->InvestorName, CThostFtdcInvestorField_InvestorName, CThostFtdcInvestorField_InvestorName_length);
        strncpy(data->InvestorName, CThostFtdcInvestorField_InvestorName, sizeof(data->InvestorName));
        CThostFtdcInvestorField_InvestorName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdentifiedCardType = CThostFtdcInvestorField_IdentifiedCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcInvestorField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcInvestorField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcInvestorField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcInvestorField_IdentifiedCardNo, CThostFtdcInvestorField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcInvestorField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcInvestorField_IdentifiedCardNo = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcInvestorField_IsActive;

    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcInvestorField_Telephone != NULL ) {
        if(CThostFtdcInvestorField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcInvestorField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcInvestorField_Telephone, CThostFtdcInvestorField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcInvestorField_Telephone, sizeof(data->Telephone));
        CThostFtdcInvestorField_Telephone = NULL;
    }

    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcInvestorField_Address != NULL ) {
        if(CThostFtdcInvestorField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcInvestorField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcInvestorField_Address, CThostFtdcInvestorField_Address_length);
        strncpy(data->Address, CThostFtdcInvestorField_Address, sizeof(data->Address));
        CThostFtdcInvestorField_Address = NULL;
    }

    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInvestorField_OpenDate != NULL ) {
        if(CThostFtdcInvestorField_OpenDate_length >= (Py_ssize_t)sizeof(data->OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is 8)", CThostFtdcInvestorField_OpenDate_length);
            return -1;
        }
        // memset(data->OpenDate, 0, sizeof(data->OpenDate));
        // memcpy(data->OpenDate, CThostFtdcInvestorField_OpenDate, CThostFtdcInvestorField_OpenDate_length);
        strncpy(data->OpenDate, CThostFtdcInvestorField_OpenDate, sizeof(data->OpenDate));
        CThostFtdcInvestorField_OpenDate = NULL;
    }

    /// 手机
    /// typedef char TThostFtdcMobileType[41]
    if( CThostFtdcInvestorField_Mobile != NULL ) {
        if(CThostFtdcInvestorField_Mobile_length >= (Py_ssize_t)sizeof(data->Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is 40)", CThostFtdcInvestorField_Mobile_length);
            return -1;
        }
        // memset(data->Mobile, 0, sizeof(data->Mobile));
        // memcpy(data->Mobile, CThostFtdcInvestorField_Mobile, CThostFtdcInvestorField_Mobile_length);
        strncpy(data->Mobile, CThostFtdcInvestorField_Mobile, sizeof(data->Mobile));
        CThostFtdcInvestorField_Mobile = NULL;
    }

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorField_CommModelID != NULL ) {
        if(CThostFtdcInvestorField_CommModelID_length >= (Py_ssize_t)sizeof(data->CommModelID)) {
            PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorField_CommModelID_length);
            return -1;
        }
        // memset(data->CommModelID, 0, sizeof(data->CommModelID));
        // memcpy(data->CommModelID, CThostFtdcInvestorField_CommModelID, CThostFtdcInvestorField_CommModelID_length);
        strncpy(data->CommModelID, CThostFtdcInvestorField_CommModelID, sizeof(data->CommModelID));
        CThostFtdcInvestorField_CommModelID = NULL;
    }

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorField_MarginModelID != NULL ) {
        if(CThostFtdcInvestorField_MarginModelID_length >= (Py_ssize_t)sizeof(data->MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorField_MarginModelID_length);
            return -1;
        }
        // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
        // memcpy(data->MarginModelID, CThostFtdcInvestorField_MarginModelID, CThostFtdcInvestorField_MarginModelID_length);
        strncpy(data->MarginModelID, CThostFtdcInvestorField_MarginModelID, sizeof(data->MarginModelID));
        CThostFtdcInvestorField_MarginModelID = NULL;
    }

    /// 是否频率控制
    /// typedef char TThostFtdcEnumBoolType
    data->IsOrderFreq = CThostFtdcInvestorField_IsOrderFreq;

    /// 是否开仓限制
    /// typedef char TThostFtdcEnumBoolType
    data->IsOpenVolLimit = CThostFtdcInvestorField_IsOpenVolLimit;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorField repr");
        return NULL;
    }

    return repr;
}


/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者分组代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorFieldType_get_InvestorGroupID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorGroupID, (Py_ssize_t)sizeof(data->InvestorGroupID));
    return PyBytes_FromString(data->InvestorGroupID);
}

static int PyCThostFtdcInvestorFieldType_set_InvestorGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::InvestorGroupID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
    // memcpy(data->InvestorGroupID, buf, len);
    strncpy(data->InvestorGroupID, buf, sizeof(data->InvestorGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者名称
/// typedef char TThostFtdcPartyNameType[81]
static PyObject *PyCThostFtdcInvestorFieldType_get_InvestorName(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorName, (Py_ssize_t)sizeof(data->InvestorName));
    return PyBytes_FromString(data->InvestorName);
}

static int PyCThostFtdcInvestorFieldType_set_InvestorName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::InvestorName)) {
        PyErr_SetString(PyExc_ValueError, "InvestorName must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->InvestorName, 0, sizeof(data->InvestorName));
    // memcpy(data->InvestorName, buf, len);
    strncpy(data->InvestorName, buf, sizeof(data->InvestorName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcInvestorFieldType_get_IdentifiedCardType(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdentifiedCardType), 1);
}

static int PyCThostFtdcInvestorFieldType_set_IdentifiedCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorField::IdentifiedCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    data->IdentifiedCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcInvestorFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcInvestorFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 联系电话
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcInvestorFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcInvestorFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 通讯地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcInvestorFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcInvestorFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开户日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInvestorFieldType_get_OpenDate(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenDate, (Py_ssize_t)sizeof(data->OpenDate));
    return PyBytes_FromString(data->OpenDate);
}

static int PyCThostFtdcInvestorFieldType_set_OpenDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->OpenDate, 0, sizeof(data->OpenDate));
    // memcpy(data->OpenDate, buf, len);
    strncpy(data->OpenDate, buf, sizeof(data->OpenDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机
/// typedef char TThostFtdcMobileType[41]
static PyObject *PyCThostFtdcInvestorFieldType_get_Mobile(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Mobile, (Py_ssize_t)sizeof(data->Mobile));
    return PyBytes_FromString(data->Mobile);
}

static int PyCThostFtdcInvestorFieldType_set_Mobile(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->Mobile, 0, sizeof(data->Mobile));
    // memcpy(data->Mobile, buf, len);
    strncpy(data->Mobile, buf, sizeof(data->Mobile));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手续费率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorFieldType_get_CommModelID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommModelID, (Py_ssize_t)sizeof(data->CommModelID));
    return PyBytes_FromString(data->CommModelID);
}

static int PyCThostFtdcInvestorFieldType_set_CommModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::CommModelID)) {
        PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->CommModelID, 0, sizeof(data->CommModelID));
    // memcpy(data->CommModelID, buf, len);
    strncpy(data->CommModelID, buf, sizeof(data->CommModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保证金率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorFieldType_get_MarginModelID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MarginModelID, (Py_ssize_t)sizeof(data->MarginModelID));
    return PyBytes_FromString(data->MarginModelID);
}

static int PyCThostFtdcInvestorFieldType_set_MarginModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorField::MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
    // memcpy(data->MarginModelID, buf, len);
    strncpy(data->MarginModelID, buf, sizeof(data->MarginModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 是否频率控制
/// typedef char TThostFtdcEnumBoolType
static PyObject *PyCThostFtdcInvestorFieldType_get_IsOrderFreq(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IsOrderFreq), 1);
}

static int PyCThostFtdcInvestorFieldType_set_IsOrderFreq(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IsOrderFreq Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorField::IsOrderFreq)) {
        PyErr_SetString(PyExc_ValueError, "IsOrderFreq must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    data->IsOrderFreq = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 是否开仓限制
/// typedef char TThostFtdcEnumBoolType
static PyObject *PyCThostFtdcInvestorFieldType_get_IsOpenVolLimit(PyObject *self, void *closure) {
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IsOpenVolLimit), 1);
}

static int PyCThostFtdcInvestorFieldType_set_IsOpenVolLimit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IsOpenVolLimit Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorField::IsOpenVolLimit)) {
        PyErr_SetString(PyExc_ValueError, "IsOpenVolLimit must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(self);
    CThostFtdcInvestorField *data = &(extra->data);
    data->IsOpenVolLimit = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorFieldType_getsets[] = {
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorGroupID",
    .get = PyCThostFtdcInvestorFieldType_get_InvestorGroupID,
    .set = PyCThostFtdcInvestorFieldType_set_InvestorGroupID,
    .doc = PyDoc_STR("投资者分组代码"),
    },
    /// 投资者名称
    /// typedef char TThostFtdcPartyNameType[81]
    {
    .name = "InvestorName",
    .get = PyCThostFtdcInvestorFieldType_get_InvestorName,
    .set = PyCThostFtdcInvestorFieldType_set_InvestorName,
    .doc = PyDoc_STR("投资者名称"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdentifiedCardType",
    .get = PyCThostFtdcInvestorFieldType_get_IdentifiedCardType,
    .set = PyCThostFtdcInvestorFieldType_set_IdentifiedCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcInvestorFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcInvestorFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcInvestorFieldType_get_Telephone,
    .set = PyCThostFtdcInvestorFieldType_set_Telephone,
    .doc = PyDoc_STR("联系电话"),
    },
    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcInvestorFieldType_get_Address,
    .set = PyCThostFtdcInvestorFieldType_set_Address,
    .doc = PyDoc_STR("通讯地址"),
    },
    /// 开户日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OpenDate",
    .get = PyCThostFtdcInvestorFieldType_get_OpenDate,
    .set = PyCThostFtdcInvestorFieldType_set_OpenDate,
    .doc = PyDoc_STR("开户日期"),
    },
    /// 手机
    /// typedef char TThostFtdcMobileType[41]
    {
    .name = "Mobile",
    .get = PyCThostFtdcInvestorFieldType_get_Mobile,
    .set = PyCThostFtdcInvestorFieldType_set_Mobile,
    .doc = PyDoc_STR("手机"),
    },
    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "CommModelID",
    .get = PyCThostFtdcInvestorFieldType_get_CommModelID,
    .set = PyCThostFtdcInvestorFieldType_set_CommModelID,
    .doc = PyDoc_STR("手续费率模板代码"),
    },
    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "MarginModelID",
    .get = PyCThostFtdcInvestorFieldType_get_MarginModelID,
    .set = PyCThostFtdcInvestorFieldType_set_MarginModelID,
    .doc = PyDoc_STR("保证金率模板代码"),
    },
    /// 是否频率控制
    /// typedef char TThostFtdcEnumBoolType
    {
    .name = "IsOrderFreq",
    .get = PyCThostFtdcInvestorFieldType_get_IsOrderFreq,
    .set = PyCThostFtdcInvestorFieldType_set_IsOrderFreq,
    .doc = PyDoc_STR("是否频率控制"),
    },
    /// 是否开仓限制
    /// typedef char TThostFtdcEnumBoolType
    {
    .name = "IsOpenVolLimit",
    .get = PyCThostFtdcInvestorFieldType_get_IsOpenVolLimit,
    .set = PyCThostFtdcInvestorFieldType_set_IsOpenVolLimit,
    .doc = PyDoc_STR("是否开仓限制"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者")},
    {Py_tp_members, PyCThostFtdcInvestorFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}