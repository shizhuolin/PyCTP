
#include "PyCThostFtdcLinkManField.h"

///联系人

static int PyCThostFtdcLinkManFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "PersonType", "IdentifiedCardType", "IdentifiedCardNo", "PersonName", "Telephone", "Address", "ZipCode", "Priority", "UOAZipCode", "PersonFullName", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcLinkManField_BrokerID = NULL;
    Py_ssize_t CThostFtdcLinkManField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcLinkManField_InvestorID = NULL;
    Py_ssize_t CThostFtdcLinkManField_InvestorID_length = 0;

    /// 联系人类型
    /// typedef char TThostFtdcPersonTypeType
    char CThostFtdcLinkManField_PersonType = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcLinkManField_IdentifiedCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcLinkManField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcLinkManField_IdentifiedCardNo_length = 0;

    /// 名称
    /// typedef char TThostFtdcPartyNameType[81]
    char *CThostFtdcLinkManField_PersonName = NULL;
    Py_ssize_t CThostFtdcLinkManField_PersonName_length = 0;

    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcLinkManField_Telephone = NULL;
    Py_ssize_t CThostFtdcLinkManField_Telephone_length = 0;

    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcLinkManField_Address = NULL;
    Py_ssize_t CThostFtdcLinkManField_Address_length = 0;

    /// 邮政编码
    /// typedef char TThostFtdcZipCodeType[7]
    char *CThostFtdcLinkManField_ZipCode = NULL;
    Py_ssize_t CThostFtdcLinkManField_ZipCode_length = 0;

    /// 优先级
    /// typedef int TThostFtdcPriorityType
    int CThostFtdcLinkManField_Priority = 0;

    /// 开户邮政编码
    /// typedef char TThostFtdcUOAZipCodeType[11]
    char *CThostFtdcLinkManField_UOAZipCode = NULL;
    Py_ssize_t CThostFtdcLinkManField_UOAZipCode_length = 0;

    /// 全称
    /// typedef char TThostFtdcInvestorFullNameType[101]
    char *CThostFtdcLinkManField_PersonFullName = NULL;
    Py_ssize_t CThostFtdcLinkManField_PersonFullName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ccy#y#y#y#y#iy#y#", (char **)kwlist
        , &CThostFtdcLinkManField_BrokerID, &CThostFtdcLinkManField_BrokerID_length
        , &CThostFtdcLinkManField_InvestorID, &CThostFtdcLinkManField_InvestorID_length
        , &CThostFtdcLinkManField_PersonType
        , &CThostFtdcLinkManField_IdentifiedCardType
        , &CThostFtdcLinkManField_IdentifiedCardNo, &CThostFtdcLinkManField_IdentifiedCardNo_length
        , &CThostFtdcLinkManField_PersonName, &CThostFtdcLinkManField_PersonName_length
        , &CThostFtdcLinkManField_Telephone, &CThostFtdcLinkManField_Telephone_length
        , &CThostFtdcLinkManField_Address, &CThostFtdcLinkManField_Address_length
        , &CThostFtdcLinkManField_ZipCode, &CThostFtdcLinkManField_ZipCode_length
        , &CThostFtdcLinkManField_Priority
        , &CThostFtdcLinkManField_UOAZipCode, &CThostFtdcLinkManField_UOAZipCode_length
        , &CThostFtdcLinkManField_PersonFullName, &CThostFtdcLinkManField_PersonFullName_length
    )) {
        return -1;
    }

    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcLinkManField_BrokerID != NULL ) {
        if(CThostFtdcLinkManField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcLinkManField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcLinkManField_BrokerID, CThostFtdcLinkManField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcLinkManField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcLinkManField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcLinkManField_InvestorID != NULL ) {
        if(CThostFtdcLinkManField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcLinkManField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcLinkManField_InvestorID, CThostFtdcLinkManField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcLinkManField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcLinkManField_InvestorID = NULL;
    }

    /// 联系人类型
    /// typedef char TThostFtdcPersonTypeType
    data->PersonType = CThostFtdcLinkManField_PersonType;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdentifiedCardType = CThostFtdcLinkManField_IdentifiedCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcLinkManField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcLinkManField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcLinkManField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcLinkManField_IdentifiedCardNo, CThostFtdcLinkManField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcLinkManField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcLinkManField_IdentifiedCardNo = NULL;
    }

    /// 名称
    /// typedef char TThostFtdcPartyNameType[81]
    if( CThostFtdcLinkManField_PersonName != NULL ) {
        if(CThostFtdcLinkManField_PersonName_length >= (Py_ssize_t)sizeof(data->PersonName)) {
            PyErr_Format(PyExc_ValueError, "PersonName too long: length=%zd (max allowed is 80)", CThostFtdcLinkManField_PersonName_length);
            return -1;
        }
        // memset(data->PersonName, 0, sizeof(data->PersonName));
        // memcpy(data->PersonName, CThostFtdcLinkManField_PersonName, CThostFtdcLinkManField_PersonName_length);
        strncpy(data->PersonName, CThostFtdcLinkManField_PersonName, sizeof(data->PersonName));
        CThostFtdcLinkManField_PersonName = NULL;
    }

    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcLinkManField_Telephone != NULL ) {
        if(CThostFtdcLinkManField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcLinkManField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcLinkManField_Telephone, CThostFtdcLinkManField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcLinkManField_Telephone, sizeof(data->Telephone));
        CThostFtdcLinkManField_Telephone = NULL;
    }

    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcLinkManField_Address != NULL ) {
        if(CThostFtdcLinkManField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcLinkManField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcLinkManField_Address, CThostFtdcLinkManField_Address_length);
        strncpy(data->Address, CThostFtdcLinkManField_Address, sizeof(data->Address));
        CThostFtdcLinkManField_Address = NULL;
    }

    /// 邮政编码
    /// typedef char TThostFtdcZipCodeType[7]
    if( CThostFtdcLinkManField_ZipCode != NULL ) {
        if(CThostFtdcLinkManField_ZipCode_length >= (Py_ssize_t)sizeof(data->ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is 6)", CThostFtdcLinkManField_ZipCode_length);
            return -1;
        }
        // memset(data->ZipCode, 0, sizeof(data->ZipCode));
        // memcpy(data->ZipCode, CThostFtdcLinkManField_ZipCode, CThostFtdcLinkManField_ZipCode_length);
        strncpy(data->ZipCode, CThostFtdcLinkManField_ZipCode, sizeof(data->ZipCode));
        CThostFtdcLinkManField_ZipCode = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcPriorityType
    data->Priority = CThostFtdcLinkManField_Priority;

    /// 开户邮政编码
    /// typedef char TThostFtdcUOAZipCodeType[11]
    if( CThostFtdcLinkManField_UOAZipCode != NULL ) {
        if(CThostFtdcLinkManField_UOAZipCode_length >= (Py_ssize_t)sizeof(data->UOAZipCode)) {
            PyErr_Format(PyExc_ValueError, "UOAZipCode too long: length=%zd (max allowed is 10)", CThostFtdcLinkManField_UOAZipCode_length);
            return -1;
        }
        // memset(data->UOAZipCode, 0, sizeof(data->UOAZipCode));
        // memcpy(data->UOAZipCode, CThostFtdcLinkManField_UOAZipCode, CThostFtdcLinkManField_UOAZipCode_length);
        strncpy(data->UOAZipCode, CThostFtdcLinkManField_UOAZipCode, sizeof(data->UOAZipCode));
        CThostFtdcLinkManField_UOAZipCode = NULL;
    }

    /// 全称
    /// typedef char TThostFtdcInvestorFullNameType[101]
    if( CThostFtdcLinkManField_PersonFullName != NULL ) {
        if(CThostFtdcLinkManField_PersonFullName_length >= (Py_ssize_t)sizeof(data->PersonFullName)) {
            PyErr_Format(PyExc_ValueError, "PersonFullName too long: length=%zd (max allowed is 100)", CThostFtdcLinkManField_PersonFullName_length);
            return -1;
        }
        // memset(data->PersonFullName, 0, sizeof(data->PersonFullName));
        // memcpy(data->PersonFullName, CThostFtdcLinkManField_PersonFullName, CThostFtdcLinkManField_PersonFullName_length);
        strncpy(data->PersonFullName, CThostFtdcLinkManField_PersonFullName, sizeof(data->PersonFullName));
        CThostFtdcLinkManField_PersonFullName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcLinkManFieldType_repr(PyObject *self) {

    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "PersonType", data->PersonType
        , "IdentifiedCardType", data->IdentifiedCardType
        , "IdentifiedCardNo", data->IdentifiedCardNo//, (Py_ssize_t)sizeof(data->IdentifiedCardNo)
        , "PersonName", data->PersonName//, (Py_ssize_t)sizeof(data->PersonName)
        , "Telephone", data->Telephone//, (Py_ssize_t)sizeof(data->Telephone)
        , "Address", data->Address//, (Py_ssize_t)sizeof(data->Address)
        , "ZipCode", data->ZipCode//, (Py_ssize_t)sizeof(data->ZipCode)
        , "Priority", data->Priority
        , "UOAZipCode", data->UOAZipCode//, (Py_ssize_t)sizeof(data->UOAZipCode)
        , "PersonFullName", data->PersonFullName//, (Py_ssize_t)sizeof(data->PersonFullName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLinkManField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLinkManField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcLinkManFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcLinkManFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcLinkManFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcLinkManFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 联系人类型
/// typedef char TThostFtdcPersonTypeType
static PyObject *PyCThostFtdcLinkManFieldType_get_PersonType(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PersonType), 1);
}

static int PyCThostFtdcLinkManFieldType_set_PersonType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PersonType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcLinkManField::PersonType)) {
        PyErr_SetString(PyExc_ValueError, "PersonType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    data->PersonType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcLinkManFieldType_get_IdentifiedCardType(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdentifiedCardType), 1);
}

static int PyCThostFtdcLinkManFieldType_set_IdentifiedCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcLinkManField::IdentifiedCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    data->IdentifiedCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcLinkManFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcLinkManFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 名称
/// typedef char TThostFtdcPartyNameType[81]
static PyObject *PyCThostFtdcLinkManFieldType_get_PersonName(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->PersonName, (Py_ssize_t)sizeof(data->PersonName));
    return PyBytes_FromString(data->PersonName);
}

static int PyCThostFtdcLinkManFieldType_set_PersonName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PersonName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::PersonName)) {
        PyErr_SetString(PyExc_ValueError, "PersonName must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->PersonName, 0, sizeof(data->PersonName));
    // memcpy(data->PersonName, buf, len);
    strncpy(data->PersonName, buf, sizeof(data->PersonName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 联系电话
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcLinkManFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcLinkManFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 通讯地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcLinkManFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcLinkManFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 邮政编码
/// typedef char TThostFtdcZipCodeType[7]
static PyObject *PyCThostFtdcLinkManFieldType_get_ZipCode(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ZipCode, (Py_ssize_t)sizeof(data->ZipCode));
    return PyBytes_FromString(data->ZipCode);
}

static int PyCThostFtdcLinkManFieldType_set_ZipCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->ZipCode, 0, sizeof(data->ZipCode));
    // memcpy(data->ZipCode, buf, len);
    strncpy(data->ZipCode, buf, sizeof(data->ZipCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开户邮政编码
/// typedef char TThostFtdcUOAZipCodeType[11]
static PyObject *PyCThostFtdcLinkManFieldType_get_UOAZipCode(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UOAZipCode, (Py_ssize_t)sizeof(data->UOAZipCode));
    return PyBytes_FromString(data->UOAZipCode);
}

static int PyCThostFtdcLinkManFieldType_set_UOAZipCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UOAZipCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::UOAZipCode)) {
        PyErr_SetString(PyExc_ValueError, "UOAZipCode must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->UOAZipCode, 0, sizeof(data->UOAZipCode));
    // memcpy(data->UOAZipCode, buf, len);
    strncpy(data->UOAZipCode, buf, sizeof(data->UOAZipCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 全称
/// typedef char TThostFtdcInvestorFullNameType[101]
static PyObject *PyCThostFtdcLinkManFieldType_get_PersonFullName(PyObject *self, void *closure) {
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->PersonFullName, (Py_ssize_t)sizeof(data->PersonFullName));
    return PyBytes_FromString(data->PersonFullName);
}

static int PyCThostFtdcLinkManFieldType_set_PersonFullName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PersonFullName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLinkManField::PersonFullName)) {
        PyErr_SetString(PyExc_ValueError, "PersonFullName must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLinkManFieldData>(self);
    CThostFtdcLinkManField *data = &(extra->data);
    // memset(data->PersonFullName, 0, sizeof(data->PersonFullName));
    // memcpy(data->PersonFullName, buf, len);
    strncpy(data->PersonFullName, buf, sizeof(data->PersonFullName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcLinkManFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcPriorityType
    {
        .name = "Priority",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcLinkManFieldData, data.Priority),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcLinkManFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcLinkManFieldType_get_BrokerID,
    .set = PyCThostFtdcLinkManFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcLinkManFieldType_get_InvestorID,
    .set = PyCThostFtdcLinkManFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 联系人类型
    /// typedef char TThostFtdcPersonTypeType
    {
    .name = "PersonType",
    .get = PyCThostFtdcLinkManFieldType_get_PersonType,
    .set = PyCThostFtdcLinkManFieldType_set_PersonType,
    .doc = PyDoc_STR("联系人类型"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdentifiedCardType",
    .get = PyCThostFtdcLinkManFieldType_get_IdentifiedCardType,
    .set = PyCThostFtdcLinkManFieldType_set_IdentifiedCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcLinkManFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcLinkManFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 名称
    /// typedef char TThostFtdcPartyNameType[81]
    {
    .name = "PersonName",
    .get = PyCThostFtdcLinkManFieldType_get_PersonName,
    .set = PyCThostFtdcLinkManFieldType_set_PersonName,
    .doc = PyDoc_STR("名称"),
    },
    /// 联系电话
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcLinkManFieldType_get_Telephone,
    .set = PyCThostFtdcLinkManFieldType_set_Telephone,
    .doc = PyDoc_STR("联系电话"),
    },
    /// 通讯地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcLinkManFieldType_get_Address,
    .set = PyCThostFtdcLinkManFieldType_set_Address,
    .doc = PyDoc_STR("通讯地址"),
    },
    /// 邮政编码
    /// typedef char TThostFtdcZipCodeType[7]
    {
    .name = "ZipCode",
    .get = PyCThostFtdcLinkManFieldType_get_ZipCode,
    .set = PyCThostFtdcLinkManFieldType_set_ZipCode,
    .doc = PyDoc_STR("邮政编码"),
    },
    /// 开户邮政编码
    /// typedef char TThostFtdcUOAZipCodeType[11]
    {
    .name = "UOAZipCode",
    .get = PyCThostFtdcLinkManFieldType_get_UOAZipCode,
    .set = PyCThostFtdcLinkManFieldType_set_UOAZipCode,
    .doc = PyDoc_STR("开户邮政编码"),
    },
    /// 全称
    /// typedef char TThostFtdcInvestorFullNameType[101]
    {
    .name = "PersonFullName",
    .get = PyCThostFtdcLinkManFieldType_get_PersonFullName,
    .set = PyCThostFtdcLinkManFieldType_set_PersonFullName,
    .doc = PyDoc_STR("全称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcLinkManFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcLinkManField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("联系人")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcLinkManFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcLinkManFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcLinkManFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcLinkManFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcLinkManFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcLinkManFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("联系人")},
    {Py_tp_members, PyCThostFtdcLinkManFieldType_members},
    {Py_tp_getset, PyCThostFtdcLinkManFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcLinkManFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcLinkManFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcLinkManFieldType_spec = {
    .name = "PyCTP.CThostFtdcLinkManField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcLinkManFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcLinkManFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcLinkManFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcLinkManFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcLinkManFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcLinkManFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcLinkManFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcLinkManFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcLinkManField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLinkManField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}