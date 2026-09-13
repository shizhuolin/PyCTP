
#include "PyCThostFtdcSMSVerifyInfoFromSecField.h"

///短信验证信息通知

static int PyCThostFtdcSMSVerifyInfoFromSecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "BrokerAbbr", "UserID", "Mobile", "SMSCode", "CreateDate", "CreateTime", "IsUsed", "FromSec", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSMSVerifyInfoFromSecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoFromSecField_BrokerID_length = 0;

    /// 经纪公司简称
    /// typedef char TThostFtdcBrokerAbbrType[9]
    char *CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcSMSVerifyInfoFromSecField_UserID = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoFromSecField_UserID_length = 0;

    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    char *CThostFtdcSMSVerifyInfoFromSecField_Mobile = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoFromSecField_Mobile_length = 0;

    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    char *CThostFtdcSMSVerifyInfoFromSecField_SMSCode = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoFromSecField_SMSCode_length = 0;

    /// 验证码创建日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSMSVerifyInfoFromSecField_CreateDate = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoFromSecField_CreateDate_length = 0;

    /// 验证码创建时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcSMSVerifyInfoFromSecField_CreateTime = NULL;
    Py_ssize_t CThostFtdcSMSVerifyInfoFromSecField_CreateTime_length = 0;

    /// 验证码是否被使用过
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSMSVerifyInfoFromSecField_IsUsed = 0;

    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcSMSVerifyInfoFromSecField_FromSec = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#ii", (char **)kwlist
        , &CThostFtdcSMSVerifyInfoFromSecField_BrokerID, &CThostFtdcSMSVerifyInfoFromSecField_BrokerID_length
        , &CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr, &CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr_length
        , &CThostFtdcSMSVerifyInfoFromSecField_UserID, &CThostFtdcSMSVerifyInfoFromSecField_UserID_length
        , &CThostFtdcSMSVerifyInfoFromSecField_Mobile, &CThostFtdcSMSVerifyInfoFromSecField_Mobile_length
        , &CThostFtdcSMSVerifyInfoFromSecField_SMSCode, &CThostFtdcSMSVerifyInfoFromSecField_SMSCode_length
        , &CThostFtdcSMSVerifyInfoFromSecField_CreateDate, &CThostFtdcSMSVerifyInfoFromSecField_CreateDate_length
        , &CThostFtdcSMSVerifyInfoFromSecField_CreateTime, &CThostFtdcSMSVerifyInfoFromSecField_CreateTime_length
        , &CThostFtdcSMSVerifyInfoFromSecField_IsUsed
        , &CThostFtdcSMSVerifyInfoFromSecField_FromSec
    )) {
        return -1;
    }

    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSMSVerifyInfoFromSecField_BrokerID != NULL ) {
        if(CThostFtdcSMSVerifyInfoFromSecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSMSVerifyInfoFromSecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSMSVerifyInfoFromSecField_BrokerID, CThostFtdcSMSVerifyInfoFromSecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSMSVerifyInfoFromSecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSMSVerifyInfoFromSecField_BrokerID = NULL;
    }

    /// 经纪公司简称
    /// typedef char TThostFtdcBrokerAbbrType[9]
    if( CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr != NULL ) {
        if(CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr_length >= (Py_ssize_t)sizeof(data->BrokerAbbr)) {
            PyErr_Format(PyExc_ValueError, "BrokerAbbr too long: length=%zd (max allowed is 8)", CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr_length);
            return -1;
        }
        // memset(data->BrokerAbbr, 0, sizeof(data->BrokerAbbr));
        // memcpy(data->BrokerAbbr, CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr, CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr_length);
        strncpy(data->BrokerAbbr, CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr, sizeof(data->BrokerAbbr));
        CThostFtdcSMSVerifyInfoFromSecField_BrokerAbbr = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcSMSVerifyInfoFromSecField_UserID != NULL ) {
        if(CThostFtdcSMSVerifyInfoFromSecField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcSMSVerifyInfoFromSecField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcSMSVerifyInfoFromSecField_UserID, CThostFtdcSMSVerifyInfoFromSecField_UserID_length);
        strncpy(data->UserID, CThostFtdcSMSVerifyInfoFromSecField_UserID, sizeof(data->UserID));
        CThostFtdcSMSVerifyInfoFromSecField_UserID = NULL;
    }

    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    if( CThostFtdcSMSVerifyInfoFromSecField_Mobile != NULL ) {
        if(CThostFtdcSMSVerifyInfoFromSecField_Mobile_length >= (Py_ssize_t)sizeof(data->Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is 16)", CThostFtdcSMSVerifyInfoFromSecField_Mobile_length);
            return -1;
        }
        // memset(data->Mobile, 0, sizeof(data->Mobile));
        // memcpy(data->Mobile, CThostFtdcSMSVerifyInfoFromSecField_Mobile, CThostFtdcSMSVerifyInfoFromSecField_Mobile_length);
        strncpy(data->Mobile, CThostFtdcSMSVerifyInfoFromSecField_Mobile, sizeof(data->Mobile));
        CThostFtdcSMSVerifyInfoFromSecField_Mobile = NULL;
    }

    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    if( CThostFtdcSMSVerifyInfoFromSecField_SMSCode != NULL ) {
        if(CThostFtdcSMSVerifyInfoFromSecField_SMSCode_length >= (Py_ssize_t)sizeof(data->SMSCode)) {
            PyErr_Format(PyExc_ValueError, "SMSCode too long: length=%zd (max allowed is 16)", CThostFtdcSMSVerifyInfoFromSecField_SMSCode_length);
            return -1;
        }
        // memset(data->SMSCode, 0, sizeof(data->SMSCode));
        // memcpy(data->SMSCode, CThostFtdcSMSVerifyInfoFromSecField_SMSCode, CThostFtdcSMSVerifyInfoFromSecField_SMSCode_length);
        strncpy(data->SMSCode, CThostFtdcSMSVerifyInfoFromSecField_SMSCode, sizeof(data->SMSCode));
        CThostFtdcSMSVerifyInfoFromSecField_SMSCode = NULL;
    }

    /// 验证码创建日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSMSVerifyInfoFromSecField_CreateDate != NULL ) {
        if(CThostFtdcSMSVerifyInfoFromSecField_CreateDate_length >= (Py_ssize_t)sizeof(data->CreateDate)) {
            PyErr_Format(PyExc_ValueError, "CreateDate too long: length=%zd (max allowed is 8)", CThostFtdcSMSVerifyInfoFromSecField_CreateDate_length);
            return -1;
        }
        // memset(data->CreateDate, 0, sizeof(data->CreateDate));
        // memcpy(data->CreateDate, CThostFtdcSMSVerifyInfoFromSecField_CreateDate, CThostFtdcSMSVerifyInfoFromSecField_CreateDate_length);
        strncpy(data->CreateDate, CThostFtdcSMSVerifyInfoFromSecField_CreateDate, sizeof(data->CreateDate));
        CThostFtdcSMSVerifyInfoFromSecField_CreateDate = NULL;
    }

    /// 验证码创建时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcSMSVerifyInfoFromSecField_CreateTime != NULL ) {
        if(CThostFtdcSMSVerifyInfoFromSecField_CreateTime_length >= (Py_ssize_t)sizeof(data->CreateTime)) {
            PyErr_Format(PyExc_ValueError, "CreateTime too long: length=%zd (max allowed is 8)", CThostFtdcSMSVerifyInfoFromSecField_CreateTime_length);
            return -1;
        }
        // memset(data->CreateTime, 0, sizeof(data->CreateTime));
        // memcpy(data->CreateTime, CThostFtdcSMSVerifyInfoFromSecField_CreateTime, CThostFtdcSMSVerifyInfoFromSecField_CreateTime_length);
        strncpy(data->CreateTime, CThostFtdcSMSVerifyInfoFromSecField_CreateTime, sizeof(data->CreateTime));
        CThostFtdcSMSVerifyInfoFromSecField_CreateTime = NULL;
    }

    /// 验证码是否被使用过
    /// typedef int TThostFtdcBoolType
    data->IsUsed = CThostFtdcSMSVerifyInfoFromSecField_IsUsed;

    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->FromSec = CThostFtdcSMSVerifyInfoFromSecField_FromSec;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType_repr(PyObject *self) {

    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BrokerAbbr", data->BrokerAbbr//, (Py_ssize_t)sizeof(data->BrokerAbbr)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Mobile", data->Mobile//, (Py_ssize_t)sizeof(data->Mobile)
        , "SMSCode", data->SMSCode//, (Py_ssize_t)sizeof(data->SMSCode)
        , "CreateDate", data->CreateDate//, (Py_ssize_t)sizeof(data->CreateDate)
        , "CreateTime", data->CreateTime//, (Py_ssize_t)sizeof(data->CreateTime)
        , "IsUsed", data->IsUsed
        , "FromSec", data->FromSec
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyInfoFromSecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyInfoFromSecField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoFromSecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司简称
/// typedef char TThostFtdcBrokerAbbrType[9]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_BrokerAbbr(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerAbbr, (Py_ssize_t)sizeof(data->BrokerAbbr));
    return PyBytes_FromString(data->BrokerAbbr);
}

static int PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_BrokerAbbr(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerAbbr Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoFromSecField::BrokerAbbr)) {
        PyErr_SetString(PyExc_ValueError, "BrokerAbbr must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // memset(data->BrokerAbbr, 0, sizeof(data->BrokerAbbr));
    // memcpy(data->BrokerAbbr, buf, len);
    strncpy(data->BrokerAbbr, buf, sizeof(data->BrokerAbbr));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoFromSecField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机号
/// typedef char TThostFtdcSMSPhoneType[17]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_Mobile(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Mobile, (Py_ssize_t)sizeof(data->Mobile));
    return PyBytes_FromString(data->Mobile);
}

static int PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_Mobile(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoFromSecField::Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // memset(data->Mobile, 0, sizeof(data->Mobile));
    // memcpy(data->Mobile, buf, len);
    strncpy(data->Mobile, buf, sizeof(data->Mobile));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 短信验证码
/// typedef char TThostFtdcSMSCodeType[17]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_SMSCode(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SMSCode, (Py_ssize_t)sizeof(data->SMSCode));
    return PyBytes_FromString(data->SMSCode);
}

static int PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_SMSCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SMSCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoFromSecField::SMSCode)) {
        PyErr_SetString(PyExc_ValueError, "SMSCode must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // memset(data->SMSCode, 0, sizeof(data->SMSCode));
    // memcpy(data->SMSCode, buf, len);
    strncpy(data->SMSCode, buf, sizeof(data->SMSCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证码创建日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_CreateDate(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CreateDate, (Py_ssize_t)sizeof(data->CreateDate));
    return PyBytes_FromString(data->CreateDate);
}

static int PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_CreateDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CreateDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoFromSecField::CreateDate)) {
        PyErr_SetString(PyExc_ValueError, "CreateDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // memset(data->CreateDate, 0, sizeof(data->CreateDate));
    // memcpy(data->CreateDate, buf, len);
    strncpy(data->CreateDate, buf, sizeof(data->CreateDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证码创建时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_CreateTime(PyObject *self, void *closure) {
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CreateTime, (Py_ssize_t)sizeof(data->CreateTime));
    return PyBytes_FromString(data->CreateTime);
}

static int PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_CreateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CreateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSMSVerifyInfoFromSecField::CreateTime)) {
        PyErr_SetString(PyExc_ValueError, "CreateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSMSVerifyInfoFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSMSVerifyInfoFromSecFieldData>(self);
    CThostFtdcSMSVerifyInfoFromSecField *data = &(extra->data);
    // memset(data->CreateTime, 0, sizeof(data->CreateTime));
    // memcpy(data->CreateTime, buf, len);
    strncpy(data->CreateTime, buf, sizeof(data->CreateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSMSVerifyInfoFromSecFieldType_members[] = {
    /// 验证码是否被使用过
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsUsed",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSMSVerifyInfoFromSecFieldData, data.IsUsed),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("验证码是否被使用过")
    },
    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "FromSec",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSMSVerifyInfoFromSecFieldData, data.FromSec),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次席的交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSMSVerifyInfoFromSecFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_BrokerID,
    .set = PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 经纪公司简称
    /// typedef char TThostFtdcBrokerAbbrType[9]
    {
    .name = "BrokerAbbr",
    .get = PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_BrokerAbbr,
    .set = PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_BrokerAbbr,
    .doc = PyDoc_STR("经纪公司简称"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_UserID,
    .set = PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 手机号
    /// typedef char TThostFtdcSMSPhoneType[17]
    {
    .name = "Mobile",
    .get = PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_Mobile,
    .set = PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_Mobile,
    .doc = PyDoc_STR("手机号"),
    },
    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    {
    .name = "SMSCode",
    .get = PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_SMSCode,
    .set = PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_SMSCode,
    .doc = PyDoc_STR("短信验证码"),
    },
    /// 验证码创建日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "CreateDate",
    .get = PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_CreateDate,
    .set = PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_CreateDate,
    .doc = PyDoc_STR("验证码创建日期"),
    },
    /// 验证码创建时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CreateTime",
    .get = PyCThostFtdcSMSVerifyInfoFromSecFieldType_get_CreateTime,
    .set = PyCThostFtdcSMSVerifyInfoFromSecFieldType_set_CreateTime,
    .doc = PyDoc_STR("验证码创建时间"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSMSVerifyInfoFromSecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSMSVerifyInfoFromSecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("短信验证信息通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSMSVerifyInfoFromSecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSMSVerifyInfoFromSecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSMSVerifyInfoFromSecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSMSVerifyInfoFromSecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSMSVerifyInfoFromSecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSMSVerifyInfoFromSecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("短信验证信息通知")},
    {Py_tp_members, PyCThostFtdcSMSVerifyInfoFromSecFieldType_members},
    {Py_tp_getset, PyCThostFtdcSMSVerifyInfoFromSecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSMSVerifyInfoFromSecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSMSVerifyInfoFromSecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSMSVerifyInfoFromSecFieldType_spec = {
    .name = "PyCTP.CThostFtdcSMSVerifyInfoFromSecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSMSVerifyInfoFromSecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSMSVerifyInfoFromSecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSMSVerifyInfoFromSecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSMSVerifyInfoFromSecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSMSVerifyInfoFromSecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSMSVerifyInfoFromSecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSMSVerifyInfoFromSecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSMSVerifyInfoFromSecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSMSVerifyInfoFromSecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSMSVerifyInfoFromSecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}