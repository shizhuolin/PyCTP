
#include "PyCThostFtdcIpAddrParamField.h"

///服务地址参数

static int PyCThostFtdcIpAddrParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "Address", "DRIdentityID", "DRIdentityName", "AddrSrvMode", "AddrVer", "AddrNo", "AddrName", "IsSM", "IsLocalAddr", "Remark", "Site", "NetOperator", "SysName", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcIpAddrParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcIpAddrParamField_BrokerID_length = 0;

    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    char *CThostFtdcIpAddrParamField_Address = NULL;
    Py_ssize_t CThostFtdcIpAddrParamField_Address_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcIpAddrParamField_DRIdentityID = 0;

    /// 交易中心名称
    /// typedef char TThostFtdcDRIdentityNameType[65]
    char *CThostFtdcIpAddrParamField_DRIdentityName = NULL;
    Py_ssize_t CThostFtdcIpAddrParamField_DRIdentityName_length = 0;

    /// 交易地址OR行情地址
    /// typedef char TThostFtdcAddrSrvModeType
    char CThostFtdcIpAddrParamField_AddrSrvMode = 0;

    /// 地址版本
    /// typedef char TThostFtdcAddrVerType
    char CThostFtdcIpAddrParamField_AddrVer = 0;

    /// 服务地址编号
    /// typedef int TThostFtdcCommonIntType
    int CThostFtdcIpAddrParamField_AddrNo = 0;

    /// 服务地址名称
    /// typedef char TThostFtdcAddrNameType[65]
    char *CThostFtdcIpAddrParamField_AddrName = NULL;
    Py_ssize_t CThostFtdcIpAddrParamField_AddrName_length = 0;

    /// 是否是国密地址
    /// typedef int TThostFtdcBoolType
    int CThostFtdcIpAddrParamField_IsSM = 0;

    /// 是否是内网地址
    /// typedef int TThostFtdcBoolType
    int CThostFtdcIpAddrParamField_IsLocalAddr = 0;

    /// 地址补充信息
    /// typedef char TThostFtdcAddrRemarkType[161]
    char *CThostFtdcIpAddrParamField_Remark = NULL;
    Py_ssize_t CThostFtdcIpAddrParamField_Remark_length = 0;

    /// 站点
    /// typedef char TThostFtdcSiteType[51]
    char *CThostFtdcIpAddrParamField_Site = NULL;
    Py_ssize_t CThostFtdcIpAddrParamField_Site_length = 0;

    /// 网络运营商
    /// typedef char TThostFtdcNetOperatorType[9]
    char *CThostFtdcIpAddrParamField_NetOperator = NULL;
    Py_ssize_t CThostFtdcIpAddrParamField_NetOperator_length = 0;

    /// 系统名称
    /// typedef char TThostFtdcAddrNameType[65]
    char *CThostFtdcIpAddrParamField_SysName = NULL;
    Py_ssize_t CThostFtdcIpAddrParamField_SysName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#cciy#iiy#y#y#y#", (char **)kwlist
        , &CThostFtdcIpAddrParamField_BrokerID, &CThostFtdcIpAddrParamField_BrokerID_length
        , &CThostFtdcIpAddrParamField_Address, &CThostFtdcIpAddrParamField_Address_length
        , &CThostFtdcIpAddrParamField_DRIdentityID
        , &CThostFtdcIpAddrParamField_DRIdentityName, &CThostFtdcIpAddrParamField_DRIdentityName_length
        , &CThostFtdcIpAddrParamField_AddrSrvMode
        , &CThostFtdcIpAddrParamField_AddrVer
        , &CThostFtdcIpAddrParamField_AddrNo
        , &CThostFtdcIpAddrParamField_AddrName, &CThostFtdcIpAddrParamField_AddrName_length
        , &CThostFtdcIpAddrParamField_IsSM
        , &CThostFtdcIpAddrParamField_IsLocalAddr
        , &CThostFtdcIpAddrParamField_Remark, &CThostFtdcIpAddrParamField_Remark_length
        , &CThostFtdcIpAddrParamField_Site, &CThostFtdcIpAddrParamField_Site_length
        , &CThostFtdcIpAddrParamField_NetOperator, &CThostFtdcIpAddrParamField_NetOperator_length
        , &CThostFtdcIpAddrParamField_SysName, &CThostFtdcIpAddrParamField_SysName_length
    )) {
        return -1;
    }

    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcIpAddrParamField_BrokerID != NULL ) {
        if(CThostFtdcIpAddrParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcIpAddrParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcIpAddrParamField_BrokerID, CThostFtdcIpAddrParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcIpAddrParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcIpAddrParamField_BrokerID = NULL;
    }

    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    if( CThostFtdcIpAddrParamField_Address != NULL ) {
        if(CThostFtdcIpAddrParamField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 128)", CThostFtdcIpAddrParamField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcIpAddrParamField_Address, CThostFtdcIpAddrParamField_Address_length);
        strncpy(data->Address, CThostFtdcIpAddrParamField_Address, sizeof(data->Address));
        CThostFtdcIpAddrParamField_Address = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcIpAddrParamField_DRIdentityID;

    /// 交易中心名称
    /// typedef char TThostFtdcDRIdentityNameType[65]
    if( CThostFtdcIpAddrParamField_DRIdentityName != NULL ) {
        if(CThostFtdcIpAddrParamField_DRIdentityName_length >= (Py_ssize_t)sizeof(data->DRIdentityName)) {
            PyErr_Format(PyExc_ValueError, "DRIdentityName too long: length=%zd (max allowed is 64)", CThostFtdcIpAddrParamField_DRIdentityName_length);
            return -1;
        }
        // memset(data->DRIdentityName, 0, sizeof(data->DRIdentityName));
        // memcpy(data->DRIdentityName, CThostFtdcIpAddrParamField_DRIdentityName, CThostFtdcIpAddrParamField_DRIdentityName_length);
        strncpy(data->DRIdentityName, CThostFtdcIpAddrParamField_DRIdentityName, sizeof(data->DRIdentityName));
        CThostFtdcIpAddrParamField_DRIdentityName = NULL;
    }

    /// 交易地址OR行情地址
    /// typedef char TThostFtdcAddrSrvModeType
    data->AddrSrvMode = CThostFtdcIpAddrParamField_AddrSrvMode;

    /// 地址版本
    /// typedef char TThostFtdcAddrVerType
    data->AddrVer = CThostFtdcIpAddrParamField_AddrVer;

    /// 服务地址编号
    /// typedef int TThostFtdcCommonIntType
    data->AddrNo = CThostFtdcIpAddrParamField_AddrNo;

    /// 服务地址名称
    /// typedef char TThostFtdcAddrNameType[65]
    if( CThostFtdcIpAddrParamField_AddrName != NULL ) {
        if(CThostFtdcIpAddrParamField_AddrName_length >= (Py_ssize_t)sizeof(data->AddrName)) {
            PyErr_Format(PyExc_ValueError, "AddrName too long: length=%zd (max allowed is 64)", CThostFtdcIpAddrParamField_AddrName_length);
            return -1;
        }
        // memset(data->AddrName, 0, sizeof(data->AddrName));
        // memcpy(data->AddrName, CThostFtdcIpAddrParamField_AddrName, CThostFtdcIpAddrParamField_AddrName_length);
        strncpy(data->AddrName, CThostFtdcIpAddrParamField_AddrName, sizeof(data->AddrName));
        CThostFtdcIpAddrParamField_AddrName = NULL;
    }

    /// 是否是国密地址
    /// typedef int TThostFtdcBoolType
    data->IsSM = CThostFtdcIpAddrParamField_IsSM;

    /// 是否是内网地址
    /// typedef int TThostFtdcBoolType
    data->IsLocalAddr = CThostFtdcIpAddrParamField_IsLocalAddr;

    /// 地址补充信息
    /// typedef char TThostFtdcAddrRemarkType[161]
    if( CThostFtdcIpAddrParamField_Remark != NULL ) {
        if(CThostFtdcIpAddrParamField_Remark_length >= (Py_ssize_t)sizeof(data->Remark)) {
            PyErr_Format(PyExc_ValueError, "Remark too long: length=%zd (max allowed is 160)", CThostFtdcIpAddrParamField_Remark_length);
            return -1;
        }
        // memset(data->Remark, 0, sizeof(data->Remark));
        // memcpy(data->Remark, CThostFtdcIpAddrParamField_Remark, CThostFtdcIpAddrParamField_Remark_length);
        strncpy(data->Remark, CThostFtdcIpAddrParamField_Remark, sizeof(data->Remark));
        CThostFtdcIpAddrParamField_Remark = NULL;
    }

    /// 站点
    /// typedef char TThostFtdcSiteType[51]
    if( CThostFtdcIpAddrParamField_Site != NULL ) {
        if(CThostFtdcIpAddrParamField_Site_length >= (Py_ssize_t)sizeof(data->Site)) {
            PyErr_Format(PyExc_ValueError, "Site too long: length=%zd (max allowed is 50)", CThostFtdcIpAddrParamField_Site_length);
            return -1;
        }
        // memset(data->Site, 0, sizeof(data->Site));
        // memcpy(data->Site, CThostFtdcIpAddrParamField_Site, CThostFtdcIpAddrParamField_Site_length);
        strncpy(data->Site, CThostFtdcIpAddrParamField_Site, sizeof(data->Site));
        CThostFtdcIpAddrParamField_Site = NULL;
    }

    /// 网络运营商
    /// typedef char TThostFtdcNetOperatorType[9]
    if( CThostFtdcIpAddrParamField_NetOperator != NULL ) {
        if(CThostFtdcIpAddrParamField_NetOperator_length >= (Py_ssize_t)sizeof(data->NetOperator)) {
            PyErr_Format(PyExc_ValueError, "NetOperator too long: length=%zd (max allowed is 8)", CThostFtdcIpAddrParamField_NetOperator_length);
            return -1;
        }
        // memset(data->NetOperator, 0, sizeof(data->NetOperator));
        // memcpy(data->NetOperator, CThostFtdcIpAddrParamField_NetOperator, CThostFtdcIpAddrParamField_NetOperator_length);
        strncpy(data->NetOperator, CThostFtdcIpAddrParamField_NetOperator, sizeof(data->NetOperator));
        CThostFtdcIpAddrParamField_NetOperator = NULL;
    }

    /// 系统名称
    /// typedef char TThostFtdcAddrNameType[65]
    if( CThostFtdcIpAddrParamField_SysName != NULL ) {
        if(CThostFtdcIpAddrParamField_SysName_length >= (Py_ssize_t)sizeof(data->SysName)) {
            PyErr_Format(PyExc_ValueError, "SysName too long: length=%zd (max allowed is 64)", CThostFtdcIpAddrParamField_SysName_length);
            return -1;
        }
        // memset(data->SysName, 0, sizeof(data->SysName));
        // memcpy(data->SysName, CThostFtdcIpAddrParamField_SysName, CThostFtdcIpAddrParamField_SysName_length);
        strncpy(data->SysName, CThostFtdcIpAddrParamField_SysName, sizeof(data->SysName));
        CThostFtdcIpAddrParamField_SysName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcIpAddrParamFieldType_repr(PyObject *self) {

    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:c,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "Address", data->Address//, (Py_ssize_t)sizeof(data->Address)
        , "DRIdentityID", data->DRIdentityID
        , "DRIdentityName", data->DRIdentityName//, (Py_ssize_t)sizeof(data->DRIdentityName)
        , "AddrSrvMode", data->AddrSrvMode
        , "AddrVer", data->AddrVer
        , "AddrNo", data->AddrNo
        , "AddrName", data->AddrName//, (Py_ssize_t)sizeof(data->AddrName)
        , "IsSM", data->IsSM
        , "IsLocalAddr", data->IsLocalAddr
        , "Remark", data->Remark//, (Py_ssize_t)sizeof(data->Remark)
        , "Site", data->Site//, (Py_ssize_t)sizeof(data->Site)
        , "NetOperator", data->NetOperator//, (Py_ssize_t)sizeof(data->NetOperator)
        , "SysName", data->SysName//, (Py_ssize_t)sizeof(data->SysName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIpAddrParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIpAddrParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcIpAddrParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 服务地址
/// typedef char TThostFtdcIpAddrType[129]
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcIpAddrParamFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易中心名称
/// typedef char TThostFtdcDRIdentityNameType[65]
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_DRIdentityName(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DRIdentityName, (Py_ssize_t)sizeof(data->DRIdentityName));
    return PyBytes_FromString(data->DRIdentityName);
}

static int PyCThostFtdcIpAddrParamFieldType_set_DRIdentityName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::DRIdentityName)) {
        PyErr_SetString(PyExc_ValueError, "DRIdentityName must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // memset(data->DRIdentityName, 0, sizeof(data->DRIdentityName));
    // memcpy(data->DRIdentityName, buf, len);
    strncpy(data->DRIdentityName, buf, sizeof(data->DRIdentityName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易地址OR行情地址
/// typedef char TThostFtdcAddrSrvModeType
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_AddrSrvMode(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AddrSrvMode), 1);
}

static int PyCThostFtdcIpAddrParamFieldType_set_AddrSrvMode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AddrSrvMode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::AddrSrvMode)) {
        PyErr_SetString(PyExc_ValueError, "AddrSrvMode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    data->AddrSrvMode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址版本
/// typedef char TThostFtdcAddrVerType
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_AddrVer(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AddrVer), 1);
}

static int PyCThostFtdcIpAddrParamFieldType_set_AddrVer(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AddrVer Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::AddrVer)) {
        PyErr_SetString(PyExc_ValueError, "AddrVer must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    data->AddrVer = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 服务地址名称
/// typedef char TThostFtdcAddrNameType[65]
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_AddrName(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AddrName, (Py_ssize_t)sizeof(data->AddrName));
    return PyBytes_FromString(data->AddrName);
}

static int PyCThostFtdcIpAddrParamFieldType_set_AddrName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AddrName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::AddrName)) {
        PyErr_SetString(PyExc_ValueError, "AddrName must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // memset(data->AddrName, 0, sizeof(data->AddrName));
    // memcpy(data->AddrName, buf, len);
    strncpy(data->AddrName, buf, sizeof(data->AddrName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址补充信息
/// typedef char TThostFtdcAddrRemarkType[161]
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_Remark(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Remark, (Py_ssize_t)sizeof(data->Remark));
    return PyBytes_FromString(data->Remark);
}

static int PyCThostFtdcIpAddrParamFieldType_set_Remark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Remark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::Remark)) {
        PyErr_SetString(PyExc_ValueError, "Remark must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // memset(data->Remark, 0, sizeof(data->Remark));
    // memcpy(data->Remark, buf, len);
    strncpy(data->Remark, buf, sizeof(data->Remark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 站点
/// typedef char TThostFtdcSiteType[51]
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_Site(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Site, (Py_ssize_t)sizeof(data->Site));
    return PyBytes_FromString(data->Site);
}

static int PyCThostFtdcIpAddrParamFieldType_set_Site(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Site Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::Site)) {
        PyErr_SetString(PyExc_ValueError, "Site must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // memset(data->Site, 0, sizeof(data->Site));
    // memcpy(data->Site, buf, len);
    strncpy(data->Site, buf, sizeof(data->Site));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 网络运营商
/// typedef char TThostFtdcNetOperatorType[9]
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_NetOperator(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NetOperator, (Py_ssize_t)sizeof(data->NetOperator));
    return PyBytes_FromString(data->NetOperator);
}

static int PyCThostFtdcIpAddrParamFieldType_set_NetOperator(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NetOperator Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::NetOperator)) {
        PyErr_SetString(PyExc_ValueError, "NetOperator must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // memset(data->NetOperator, 0, sizeof(data->NetOperator));
    // memcpy(data->NetOperator, buf, len);
    strncpy(data->NetOperator, buf, sizeof(data->NetOperator));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 系统名称
/// typedef char TThostFtdcAddrNameType[65]
static PyObject *PyCThostFtdcIpAddrParamFieldType_get_SysName(PyObject *self, void *closure) {
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SysName, (Py_ssize_t)sizeof(data->SysName));
    return PyBytes_FromString(data->SysName);
}

static int PyCThostFtdcIpAddrParamFieldType_set_SysName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SysName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIpAddrParamField::SysName)) {
        PyErr_SetString(PyExc_ValueError, "SysName must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIpAddrParamFieldData>(self);
    CThostFtdcIpAddrParamField *data = &(extra->data);
    // memset(data->SysName, 0, sizeof(data->SysName));
    // memcpy(data->SysName, buf, len);
    strncpy(data->SysName, buf, sizeof(data->SysName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcIpAddrParamFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcIpAddrParamFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    /// 服务地址编号
    /// typedef int TThostFtdcCommonIntType
    {
        .name = "AddrNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcIpAddrParamFieldData, data.AddrNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("服务地址编号")
    },
    /// 是否是国密地址
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsSM",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcIpAddrParamFieldData, data.IsSM),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否是国密地址")
    },
    /// 是否是内网地址
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsLocalAddr",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcIpAddrParamFieldData, data.IsLocalAddr),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否是内网地址")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcIpAddrParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcIpAddrParamFieldType_get_BrokerID,
    .set = PyCThostFtdcIpAddrParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    {
    .name = "Address",
    .get = PyCThostFtdcIpAddrParamFieldType_get_Address,
    .set = PyCThostFtdcIpAddrParamFieldType_set_Address,
    .doc = PyDoc_STR("服务地址"),
    },
    /// 交易中心名称
    /// typedef char TThostFtdcDRIdentityNameType[65]
    {
    .name = "DRIdentityName",
    .get = PyCThostFtdcIpAddrParamFieldType_get_DRIdentityName,
    .set = PyCThostFtdcIpAddrParamFieldType_set_DRIdentityName,
    .doc = PyDoc_STR("交易中心名称"),
    },
    /// 交易地址OR行情地址
    /// typedef char TThostFtdcAddrSrvModeType
    {
    .name = "AddrSrvMode",
    .get = PyCThostFtdcIpAddrParamFieldType_get_AddrSrvMode,
    .set = PyCThostFtdcIpAddrParamFieldType_set_AddrSrvMode,
    .doc = PyDoc_STR("交易地址OR行情地址"),
    },
    /// 地址版本
    /// typedef char TThostFtdcAddrVerType
    {
    .name = "AddrVer",
    .get = PyCThostFtdcIpAddrParamFieldType_get_AddrVer,
    .set = PyCThostFtdcIpAddrParamFieldType_set_AddrVer,
    .doc = PyDoc_STR("地址版本"),
    },
    /// 服务地址名称
    /// typedef char TThostFtdcAddrNameType[65]
    {
    .name = "AddrName",
    .get = PyCThostFtdcIpAddrParamFieldType_get_AddrName,
    .set = PyCThostFtdcIpAddrParamFieldType_set_AddrName,
    .doc = PyDoc_STR("服务地址名称"),
    },
    /// 地址补充信息
    /// typedef char TThostFtdcAddrRemarkType[161]
    {
    .name = "Remark",
    .get = PyCThostFtdcIpAddrParamFieldType_get_Remark,
    .set = PyCThostFtdcIpAddrParamFieldType_set_Remark,
    .doc = PyDoc_STR("地址补充信息"),
    },
    /// 站点
    /// typedef char TThostFtdcSiteType[51]
    {
    .name = "Site",
    .get = PyCThostFtdcIpAddrParamFieldType_get_Site,
    .set = PyCThostFtdcIpAddrParamFieldType_set_Site,
    .doc = PyDoc_STR("站点"),
    },
    /// 网络运营商
    /// typedef char TThostFtdcNetOperatorType[9]
    {
    .name = "NetOperator",
    .get = PyCThostFtdcIpAddrParamFieldType_get_NetOperator,
    .set = PyCThostFtdcIpAddrParamFieldType_set_NetOperator,
    .doc = PyDoc_STR("网络运营商"),
    },
    /// 系统名称
    /// typedef char TThostFtdcAddrNameType[65]
    {
    .name = "SysName",
    .get = PyCThostFtdcIpAddrParamFieldType_get_SysName,
    .set = PyCThostFtdcIpAddrParamFieldType_set_SysName,
    .doc = PyDoc_STR("系统名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcIpAddrParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcIpAddrParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("服务地址参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcIpAddrParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcIpAddrParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcIpAddrParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcIpAddrParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcIpAddrParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcIpAddrParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("服务地址参数")},
    {Py_tp_members, PyCThostFtdcIpAddrParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcIpAddrParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcIpAddrParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcIpAddrParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcIpAddrParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcIpAddrParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcIpAddrParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcIpAddrParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcIpAddrParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcIpAddrParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcIpAddrParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcIpAddrParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcIpAddrParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcIpAddrParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcIpAddrParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcIpAddrParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}