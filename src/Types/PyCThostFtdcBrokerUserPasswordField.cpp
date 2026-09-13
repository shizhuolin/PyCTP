
#include "PyCThostFtdcBrokerUserPasswordField.h"

///经纪公司用户口令

static int PyCThostFtdcBrokerUserPasswordFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "Password", "LastUpdateTime", "LastLoginTime", "ExpireDate", "WeakExpireDate", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerUserPasswordField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerUserPasswordField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcBrokerUserPasswordField_UserID = NULL;
    Py_ssize_t CThostFtdcBrokerUserPasswordField_UserID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcBrokerUserPasswordField_Password = NULL;
    Py_ssize_t CThostFtdcBrokerUserPasswordField_Password_length = 0;

    /// 上次修改时间
    /// typedef char TThostFtdcDateTimeType[17]
    char *CThostFtdcBrokerUserPasswordField_LastUpdateTime = NULL;
    Py_ssize_t CThostFtdcBrokerUserPasswordField_LastUpdateTime_length = 0;

    /// 上次登陆时间
    /// typedef char TThostFtdcDateTimeType[17]
    char *CThostFtdcBrokerUserPasswordField_LastLoginTime = NULL;
    Py_ssize_t CThostFtdcBrokerUserPasswordField_LastLoginTime_length = 0;

    /// 密码过期时间
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcBrokerUserPasswordField_ExpireDate = NULL;
    Py_ssize_t CThostFtdcBrokerUserPasswordField_ExpireDate_length = 0;

    /// 弱密码过期时间
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcBrokerUserPasswordField_WeakExpireDate = NULL;
    Py_ssize_t CThostFtdcBrokerUserPasswordField_WeakExpireDate_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcBrokerUserPasswordField_BrokerID, &CThostFtdcBrokerUserPasswordField_BrokerID_length
        , &CThostFtdcBrokerUserPasswordField_UserID, &CThostFtdcBrokerUserPasswordField_UserID_length
        , &CThostFtdcBrokerUserPasswordField_Password, &CThostFtdcBrokerUserPasswordField_Password_length
        , &CThostFtdcBrokerUserPasswordField_LastUpdateTime, &CThostFtdcBrokerUserPasswordField_LastUpdateTime_length
        , &CThostFtdcBrokerUserPasswordField_LastLoginTime, &CThostFtdcBrokerUserPasswordField_LastLoginTime_length
        , &CThostFtdcBrokerUserPasswordField_ExpireDate, &CThostFtdcBrokerUserPasswordField_ExpireDate_length
        , &CThostFtdcBrokerUserPasswordField_WeakExpireDate, &CThostFtdcBrokerUserPasswordField_WeakExpireDate_length
    )) {
        return -1;
    }

    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerUserPasswordField_BrokerID != NULL ) {
        if(CThostFtdcBrokerUserPasswordField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerUserPasswordField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerUserPasswordField_BrokerID, CThostFtdcBrokerUserPasswordField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerUserPasswordField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerUserPasswordField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcBrokerUserPasswordField_UserID != NULL ) {
        if(CThostFtdcBrokerUserPasswordField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcBrokerUserPasswordField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcBrokerUserPasswordField_UserID, CThostFtdcBrokerUserPasswordField_UserID_length);
        strncpy(data->UserID, CThostFtdcBrokerUserPasswordField_UserID, sizeof(data->UserID));
        CThostFtdcBrokerUserPasswordField_UserID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcBrokerUserPasswordField_Password != NULL ) {
        if(CThostFtdcBrokerUserPasswordField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcBrokerUserPasswordField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcBrokerUserPasswordField_Password, CThostFtdcBrokerUserPasswordField_Password_length);
        strncpy(data->Password, CThostFtdcBrokerUserPasswordField_Password, sizeof(data->Password));
        CThostFtdcBrokerUserPasswordField_Password = NULL;
    }

    /// 上次修改时间
    /// typedef char TThostFtdcDateTimeType[17]
    if( CThostFtdcBrokerUserPasswordField_LastUpdateTime != NULL ) {
        if(CThostFtdcBrokerUserPasswordField_LastUpdateTime_length >= (Py_ssize_t)sizeof(data->LastUpdateTime)) {
            PyErr_Format(PyExc_ValueError, "LastUpdateTime too long: length=%zd (max allowed is 16)", CThostFtdcBrokerUserPasswordField_LastUpdateTime_length);
            return -1;
        }
        // memset(data->LastUpdateTime, 0, sizeof(data->LastUpdateTime));
        // memcpy(data->LastUpdateTime, CThostFtdcBrokerUserPasswordField_LastUpdateTime, CThostFtdcBrokerUserPasswordField_LastUpdateTime_length);
        strncpy(data->LastUpdateTime, CThostFtdcBrokerUserPasswordField_LastUpdateTime, sizeof(data->LastUpdateTime));
        CThostFtdcBrokerUserPasswordField_LastUpdateTime = NULL;
    }

    /// 上次登陆时间
    /// typedef char TThostFtdcDateTimeType[17]
    if( CThostFtdcBrokerUserPasswordField_LastLoginTime != NULL ) {
        if(CThostFtdcBrokerUserPasswordField_LastLoginTime_length >= (Py_ssize_t)sizeof(data->LastLoginTime)) {
            PyErr_Format(PyExc_ValueError, "LastLoginTime too long: length=%zd (max allowed is 16)", CThostFtdcBrokerUserPasswordField_LastLoginTime_length);
            return -1;
        }
        // memset(data->LastLoginTime, 0, sizeof(data->LastLoginTime));
        // memcpy(data->LastLoginTime, CThostFtdcBrokerUserPasswordField_LastLoginTime, CThostFtdcBrokerUserPasswordField_LastLoginTime_length);
        strncpy(data->LastLoginTime, CThostFtdcBrokerUserPasswordField_LastLoginTime, sizeof(data->LastLoginTime));
        CThostFtdcBrokerUserPasswordField_LastLoginTime = NULL;
    }

    /// 密码过期时间
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcBrokerUserPasswordField_ExpireDate != NULL ) {
        if(CThostFtdcBrokerUserPasswordField_ExpireDate_length >= (Py_ssize_t)sizeof(data->ExpireDate)) {
            PyErr_Format(PyExc_ValueError, "ExpireDate too long: length=%zd (max allowed is 8)", CThostFtdcBrokerUserPasswordField_ExpireDate_length);
            return -1;
        }
        // memset(data->ExpireDate, 0, sizeof(data->ExpireDate));
        // memcpy(data->ExpireDate, CThostFtdcBrokerUserPasswordField_ExpireDate, CThostFtdcBrokerUserPasswordField_ExpireDate_length);
        strncpy(data->ExpireDate, CThostFtdcBrokerUserPasswordField_ExpireDate, sizeof(data->ExpireDate));
        CThostFtdcBrokerUserPasswordField_ExpireDate = NULL;
    }

    /// 弱密码过期时间
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcBrokerUserPasswordField_WeakExpireDate != NULL ) {
        if(CThostFtdcBrokerUserPasswordField_WeakExpireDate_length >= (Py_ssize_t)sizeof(data->WeakExpireDate)) {
            PyErr_Format(PyExc_ValueError, "WeakExpireDate too long: length=%zd (max allowed is 8)", CThostFtdcBrokerUserPasswordField_WeakExpireDate_length);
            return -1;
        }
        // memset(data->WeakExpireDate, 0, sizeof(data->WeakExpireDate));
        // memcpy(data->WeakExpireDate, CThostFtdcBrokerUserPasswordField_WeakExpireDate, CThostFtdcBrokerUserPasswordField_WeakExpireDate_length);
        strncpy(data->WeakExpireDate, CThostFtdcBrokerUserPasswordField_WeakExpireDate, sizeof(data->WeakExpireDate));
        CThostFtdcBrokerUserPasswordField_WeakExpireDate = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerUserPasswordFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "LastUpdateTime", data->LastUpdateTime//, (Py_ssize_t)sizeof(data->LastUpdateTime)
        , "LastLoginTime", data->LastLoginTime//, (Py_ssize_t)sizeof(data->LastLoginTime)
        , "ExpireDate", data->ExpireDate//, (Py_ssize_t)sizeof(data->ExpireDate)
        , "WeakExpireDate", data->WeakExpireDate//, (Py_ssize_t)sizeof(data->WeakExpireDate)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserPasswordField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserPasswordField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerUserPasswordFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerUserPasswordFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserPasswordField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcBrokerUserPasswordFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcBrokerUserPasswordFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserPasswordField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcBrokerUserPasswordFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcBrokerUserPasswordFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserPasswordField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上次修改时间
/// typedef char TThostFtdcDateTimeType[17]
static PyObject *PyCThostFtdcBrokerUserPasswordFieldType_get_LastUpdateTime(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LastUpdateTime, (Py_ssize_t)sizeof(data->LastUpdateTime));
    return PyBytes_FromString(data->LastUpdateTime);
}

static int PyCThostFtdcBrokerUserPasswordFieldType_set_LastUpdateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastUpdateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserPasswordField::LastUpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "LastUpdateTime must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // memset(data->LastUpdateTime, 0, sizeof(data->LastUpdateTime));
    // memcpy(data->LastUpdateTime, buf, len);
    strncpy(data->LastUpdateTime, buf, sizeof(data->LastUpdateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上次登陆时间
/// typedef char TThostFtdcDateTimeType[17]
static PyObject *PyCThostFtdcBrokerUserPasswordFieldType_get_LastLoginTime(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LastLoginTime, (Py_ssize_t)sizeof(data->LastLoginTime));
    return PyBytes_FromString(data->LastLoginTime);
}

static int PyCThostFtdcBrokerUserPasswordFieldType_set_LastLoginTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastLoginTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserPasswordField::LastLoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LastLoginTime must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // memset(data->LastLoginTime, 0, sizeof(data->LastLoginTime));
    // memcpy(data->LastLoginTime, buf, len);
    strncpy(data->LastLoginTime, buf, sizeof(data->LastLoginTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码过期时间
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcBrokerUserPasswordFieldType_get_ExpireDate(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExpireDate, (Py_ssize_t)sizeof(data->ExpireDate));
    return PyBytes_FromString(data->ExpireDate);
}

static int PyCThostFtdcBrokerUserPasswordFieldType_set_ExpireDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExpireDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserPasswordField::ExpireDate)) {
        PyErr_SetString(PyExc_ValueError, "ExpireDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // memset(data->ExpireDate, 0, sizeof(data->ExpireDate));
    // memcpy(data->ExpireDate, buf, len);
    strncpy(data->ExpireDate, buf, sizeof(data->ExpireDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 弱密码过期时间
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcBrokerUserPasswordFieldType_get_WeakExpireDate(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->WeakExpireDate, (Py_ssize_t)sizeof(data->WeakExpireDate));
    return PyBytes_FromString(data->WeakExpireDate);
}

static int PyCThostFtdcBrokerUserPasswordFieldType_set_WeakExpireDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "WeakExpireDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserPasswordField::WeakExpireDate)) {
        PyErr_SetString(PyExc_ValueError, "WeakExpireDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserPasswordFieldData>(self);
    CThostFtdcBrokerUserPasswordField *data = &(extra->data);
    // memset(data->WeakExpireDate, 0, sizeof(data->WeakExpireDate));
    // memcpy(data->WeakExpireDate, buf, len);
    strncpy(data->WeakExpireDate, buf, sizeof(data->WeakExpireDate));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerUserPasswordFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerUserPasswordFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerUserPasswordFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerUserPasswordFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcBrokerUserPasswordFieldType_get_UserID,
    .set = PyCThostFtdcBrokerUserPasswordFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcBrokerUserPasswordFieldType_get_Password,
    .set = PyCThostFtdcBrokerUserPasswordFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 上次修改时间
    /// typedef char TThostFtdcDateTimeType[17]
    {
    .name = "LastUpdateTime",
    .get = PyCThostFtdcBrokerUserPasswordFieldType_get_LastUpdateTime,
    .set = PyCThostFtdcBrokerUserPasswordFieldType_set_LastUpdateTime,
    .doc = PyDoc_STR("上次修改时间"),
    },
    /// 上次登陆时间
    /// typedef char TThostFtdcDateTimeType[17]
    {
    .name = "LastLoginTime",
    .get = PyCThostFtdcBrokerUserPasswordFieldType_get_LastLoginTime,
    .set = PyCThostFtdcBrokerUserPasswordFieldType_set_LastLoginTime,
    .doc = PyDoc_STR("上次登陆时间"),
    },
    /// 密码过期时间
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ExpireDate",
    .get = PyCThostFtdcBrokerUserPasswordFieldType_get_ExpireDate,
    .set = PyCThostFtdcBrokerUserPasswordFieldType_set_ExpireDate,
    .doc = PyDoc_STR("密码过期时间"),
    },
    /// 弱密码过期时间
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "WeakExpireDate",
    .get = PyCThostFtdcBrokerUserPasswordFieldType_get_WeakExpireDate,
    .set = PyCThostFtdcBrokerUserPasswordFieldType_set_WeakExpireDate,
    .doc = PyDoc_STR("弱密码过期时间"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerUserPasswordFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerUserPasswordField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司用户口令")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerUserPasswordFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerUserPasswordFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerUserPasswordFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerUserPasswordFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerUserPasswordFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerUserPasswordFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司用户口令")},
    {Py_tp_members, PyCThostFtdcBrokerUserPasswordFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerUserPasswordFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerUserPasswordFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerUserPasswordFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerUserPasswordFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerUserPasswordField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerUserPasswordFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerUserPasswordFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerUserPasswordFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerUserPasswordFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerUserPasswordFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerUserPasswordFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerUserPasswordFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerUserPasswordFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerUserPasswordField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserPasswordField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}