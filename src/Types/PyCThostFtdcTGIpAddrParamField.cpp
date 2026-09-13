
#include "PyCThostFtdcTGIpAddrParamField.h"

///服务地址参数

static int PyCThostFtdcTGIpAddrParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "Address", "DRIdentityID", "DRIdentityName", "AddrSrvMode", "AddrVer", "AddrNo", "AddrName", "IsSM", "IsLocalAddr", "Remark", "Site", "NetOperator", "SysName", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTGIpAddrParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcTGIpAddrParamField_UserID = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_UserID_length = 0;

    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    char *CThostFtdcTGIpAddrParamField_Address = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_Address_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcTGIpAddrParamField_DRIdentityID = 0;

    /// 交易中心名称
    /// typedef char TThostFtdcDRIdentityNameType[65]
    char *CThostFtdcTGIpAddrParamField_DRIdentityName = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_DRIdentityName_length = 0;

    /// 交易地址OR行情地址
    /// typedef char TThostFtdcAddrSrvModeType
    char CThostFtdcTGIpAddrParamField_AddrSrvMode = 0;

    /// 地址版本
    /// typedef char TThostFtdcAddrVerType
    char CThostFtdcTGIpAddrParamField_AddrVer = 0;

    /// 服务地址编号
    /// typedef int TThostFtdcCommonIntType
    int CThostFtdcTGIpAddrParamField_AddrNo = 0;

    /// 服务地址名称
    /// typedef char TThostFtdcAddrNameType[65]
    char *CThostFtdcTGIpAddrParamField_AddrName = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_AddrName_length = 0;

    /// 是否是国密地址
    /// typedef int TThostFtdcBoolType
    int CThostFtdcTGIpAddrParamField_IsSM = 0;

    /// 是否是内网地址
    /// typedef int TThostFtdcBoolType
    int CThostFtdcTGIpAddrParamField_IsLocalAddr = 0;

    /// 地址补充信息
    /// typedef char TThostFtdcAddrRemarkType[161]
    char *CThostFtdcTGIpAddrParamField_Remark = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_Remark_length = 0;

    /// 站点
    /// typedef char TThostFtdcSiteType[51]
    char *CThostFtdcTGIpAddrParamField_Site = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_Site_length = 0;

    /// 网络运营商
    /// typedef char TThostFtdcNetOperatorType[9]
    char *CThostFtdcTGIpAddrParamField_NetOperator = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_NetOperator_length = 0;

    /// 系统名称
    /// typedef char TThostFtdcAddrNameType[65]
    char *CThostFtdcTGIpAddrParamField_SysName = NULL;
    Py_ssize_t CThostFtdcTGIpAddrParamField_SysName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#cciy#iiy#y#y#y#", (char **)kwlist
        , &CThostFtdcTGIpAddrParamField_BrokerID, &CThostFtdcTGIpAddrParamField_BrokerID_length
        , &CThostFtdcTGIpAddrParamField_UserID, &CThostFtdcTGIpAddrParamField_UserID_length
        , &CThostFtdcTGIpAddrParamField_Address, &CThostFtdcTGIpAddrParamField_Address_length
        , &CThostFtdcTGIpAddrParamField_DRIdentityID
        , &CThostFtdcTGIpAddrParamField_DRIdentityName, &CThostFtdcTGIpAddrParamField_DRIdentityName_length
        , &CThostFtdcTGIpAddrParamField_AddrSrvMode
        , &CThostFtdcTGIpAddrParamField_AddrVer
        , &CThostFtdcTGIpAddrParamField_AddrNo
        , &CThostFtdcTGIpAddrParamField_AddrName, &CThostFtdcTGIpAddrParamField_AddrName_length
        , &CThostFtdcTGIpAddrParamField_IsSM
        , &CThostFtdcTGIpAddrParamField_IsLocalAddr
        , &CThostFtdcTGIpAddrParamField_Remark, &CThostFtdcTGIpAddrParamField_Remark_length
        , &CThostFtdcTGIpAddrParamField_Site, &CThostFtdcTGIpAddrParamField_Site_length
        , &CThostFtdcTGIpAddrParamField_NetOperator, &CThostFtdcTGIpAddrParamField_NetOperator_length
        , &CThostFtdcTGIpAddrParamField_SysName, &CThostFtdcTGIpAddrParamField_SysName_length
    )) {
        return -1;
    }

    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTGIpAddrParamField_BrokerID != NULL ) {
        if(CThostFtdcTGIpAddrParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTGIpAddrParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTGIpAddrParamField_BrokerID, CThostFtdcTGIpAddrParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTGIpAddrParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTGIpAddrParamField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcTGIpAddrParamField_UserID != NULL ) {
        if(CThostFtdcTGIpAddrParamField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcTGIpAddrParamField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcTGIpAddrParamField_UserID, CThostFtdcTGIpAddrParamField_UserID_length);
        strncpy(data->UserID, CThostFtdcTGIpAddrParamField_UserID, sizeof(data->UserID));
        CThostFtdcTGIpAddrParamField_UserID = NULL;
    }

    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    if( CThostFtdcTGIpAddrParamField_Address != NULL ) {
        if(CThostFtdcTGIpAddrParamField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 128)", CThostFtdcTGIpAddrParamField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcTGIpAddrParamField_Address, CThostFtdcTGIpAddrParamField_Address_length);
        strncpy(data->Address, CThostFtdcTGIpAddrParamField_Address, sizeof(data->Address));
        CThostFtdcTGIpAddrParamField_Address = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcTGIpAddrParamField_DRIdentityID;

    /// 交易中心名称
    /// typedef char TThostFtdcDRIdentityNameType[65]
    if( CThostFtdcTGIpAddrParamField_DRIdentityName != NULL ) {
        if(CThostFtdcTGIpAddrParamField_DRIdentityName_length >= (Py_ssize_t)sizeof(data->DRIdentityName)) {
            PyErr_Format(PyExc_ValueError, "DRIdentityName too long: length=%zd (max allowed is 64)", CThostFtdcTGIpAddrParamField_DRIdentityName_length);
            return -1;
        }
        // memset(data->DRIdentityName, 0, sizeof(data->DRIdentityName));
        // memcpy(data->DRIdentityName, CThostFtdcTGIpAddrParamField_DRIdentityName, CThostFtdcTGIpAddrParamField_DRIdentityName_length);
        strncpy(data->DRIdentityName, CThostFtdcTGIpAddrParamField_DRIdentityName, sizeof(data->DRIdentityName));
        CThostFtdcTGIpAddrParamField_DRIdentityName = NULL;
    }

    /// 交易地址OR行情地址
    /// typedef char TThostFtdcAddrSrvModeType
    data->AddrSrvMode = CThostFtdcTGIpAddrParamField_AddrSrvMode;

    /// 地址版本
    /// typedef char TThostFtdcAddrVerType
    data->AddrVer = CThostFtdcTGIpAddrParamField_AddrVer;

    /// 服务地址编号
    /// typedef int TThostFtdcCommonIntType
    data->AddrNo = CThostFtdcTGIpAddrParamField_AddrNo;

    /// 服务地址名称
    /// typedef char TThostFtdcAddrNameType[65]
    if( CThostFtdcTGIpAddrParamField_AddrName != NULL ) {
        if(CThostFtdcTGIpAddrParamField_AddrName_length >= (Py_ssize_t)sizeof(data->AddrName)) {
            PyErr_Format(PyExc_ValueError, "AddrName too long: length=%zd (max allowed is 64)", CThostFtdcTGIpAddrParamField_AddrName_length);
            return -1;
        }
        // memset(data->AddrName, 0, sizeof(data->AddrName));
        // memcpy(data->AddrName, CThostFtdcTGIpAddrParamField_AddrName, CThostFtdcTGIpAddrParamField_AddrName_length);
        strncpy(data->AddrName, CThostFtdcTGIpAddrParamField_AddrName, sizeof(data->AddrName));
        CThostFtdcTGIpAddrParamField_AddrName = NULL;
    }

    /// 是否是国密地址
    /// typedef int TThostFtdcBoolType
    data->IsSM = CThostFtdcTGIpAddrParamField_IsSM;

    /// 是否是内网地址
    /// typedef int TThostFtdcBoolType
    data->IsLocalAddr = CThostFtdcTGIpAddrParamField_IsLocalAddr;

    /// 地址补充信息
    /// typedef char TThostFtdcAddrRemarkType[161]
    if( CThostFtdcTGIpAddrParamField_Remark != NULL ) {
        if(CThostFtdcTGIpAddrParamField_Remark_length >= (Py_ssize_t)sizeof(data->Remark)) {
            PyErr_Format(PyExc_ValueError, "Remark too long: length=%zd (max allowed is 160)", CThostFtdcTGIpAddrParamField_Remark_length);
            return -1;
        }
        // memset(data->Remark, 0, sizeof(data->Remark));
        // memcpy(data->Remark, CThostFtdcTGIpAddrParamField_Remark, CThostFtdcTGIpAddrParamField_Remark_length);
        strncpy(data->Remark, CThostFtdcTGIpAddrParamField_Remark, sizeof(data->Remark));
        CThostFtdcTGIpAddrParamField_Remark = NULL;
    }

    /// 站点
    /// typedef char TThostFtdcSiteType[51]
    if( CThostFtdcTGIpAddrParamField_Site != NULL ) {
        if(CThostFtdcTGIpAddrParamField_Site_length >= (Py_ssize_t)sizeof(data->Site)) {
            PyErr_Format(PyExc_ValueError, "Site too long: length=%zd (max allowed is 50)", CThostFtdcTGIpAddrParamField_Site_length);
            return -1;
        }
        // memset(data->Site, 0, sizeof(data->Site));
        // memcpy(data->Site, CThostFtdcTGIpAddrParamField_Site, CThostFtdcTGIpAddrParamField_Site_length);
        strncpy(data->Site, CThostFtdcTGIpAddrParamField_Site, sizeof(data->Site));
        CThostFtdcTGIpAddrParamField_Site = NULL;
    }

    /// 网络运营商
    /// typedef char TThostFtdcNetOperatorType[9]
    if( CThostFtdcTGIpAddrParamField_NetOperator != NULL ) {
        if(CThostFtdcTGIpAddrParamField_NetOperator_length >= (Py_ssize_t)sizeof(data->NetOperator)) {
            PyErr_Format(PyExc_ValueError, "NetOperator too long: length=%zd (max allowed is 8)", CThostFtdcTGIpAddrParamField_NetOperator_length);
            return -1;
        }
        // memset(data->NetOperator, 0, sizeof(data->NetOperator));
        // memcpy(data->NetOperator, CThostFtdcTGIpAddrParamField_NetOperator, CThostFtdcTGIpAddrParamField_NetOperator_length);
        strncpy(data->NetOperator, CThostFtdcTGIpAddrParamField_NetOperator, sizeof(data->NetOperator));
        CThostFtdcTGIpAddrParamField_NetOperator = NULL;
    }

    /// 系统名称
    /// typedef char TThostFtdcAddrNameType[65]
    if( CThostFtdcTGIpAddrParamField_SysName != NULL ) {
        if(CThostFtdcTGIpAddrParamField_SysName_length >= (Py_ssize_t)sizeof(data->SysName)) {
            PyErr_Format(PyExc_ValueError, "SysName too long: length=%zd (max allowed is 64)", CThostFtdcTGIpAddrParamField_SysName_length);
            return -1;
        }
        // memset(data->SysName, 0, sizeof(data->SysName));
        // memcpy(data->SysName, CThostFtdcTGIpAddrParamField_SysName, CThostFtdcTGIpAddrParamField_SysName_length);
        strncpy(data->SysName, CThostFtdcTGIpAddrParamField_SysName, sizeof(data->SysName));
        CThostFtdcTGIpAddrParamField_SysName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTGIpAddrParamFieldType_repr(PyObject *self) {

    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:c,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTGIpAddrParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTGIpAddrParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 服务地址
/// typedef char TThostFtdcIpAddrType[129]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易中心名称
/// typedef char TThostFtdcDRIdentityNameType[65]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_DRIdentityName(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DRIdentityName, (Py_ssize_t)sizeof(data->DRIdentityName));
    return PyBytes_FromString(data->DRIdentityName);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_DRIdentityName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::DRIdentityName)) {
        PyErr_SetString(PyExc_ValueError, "DRIdentityName must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->DRIdentityName, 0, sizeof(data->DRIdentityName));
    // memcpy(data->DRIdentityName, buf, len);
    strncpy(data->DRIdentityName, buf, sizeof(data->DRIdentityName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易地址OR行情地址
/// typedef char TThostFtdcAddrSrvModeType
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_AddrSrvMode(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AddrSrvMode), 1);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_AddrSrvMode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AddrSrvMode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::AddrSrvMode)) {
        PyErr_SetString(PyExc_ValueError, "AddrSrvMode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    data->AddrSrvMode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址版本
/// typedef char TThostFtdcAddrVerType
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_AddrVer(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AddrVer), 1);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_AddrVer(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AddrVer Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::AddrVer)) {
        PyErr_SetString(PyExc_ValueError, "AddrVer must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    data->AddrVer = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 服务地址名称
/// typedef char TThostFtdcAddrNameType[65]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_AddrName(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AddrName, (Py_ssize_t)sizeof(data->AddrName));
    return PyBytes_FromString(data->AddrName);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_AddrName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AddrName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::AddrName)) {
        PyErr_SetString(PyExc_ValueError, "AddrName must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->AddrName, 0, sizeof(data->AddrName));
    // memcpy(data->AddrName, buf, len);
    strncpy(data->AddrName, buf, sizeof(data->AddrName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址补充信息
/// typedef char TThostFtdcAddrRemarkType[161]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_Remark(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Remark, (Py_ssize_t)sizeof(data->Remark));
    return PyBytes_FromString(data->Remark);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_Remark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Remark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::Remark)) {
        PyErr_SetString(PyExc_ValueError, "Remark must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->Remark, 0, sizeof(data->Remark));
    // memcpy(data->Remark, buf, len);
    strncpy(data->Remark, buf, sizeof(data->Remark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 站点
/// typedef char TThostFtdcSiteType[51]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_Site(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Site, (Py_ssize_t)sizeof(data->Site));
    return PyBytes_FromString(data->Site);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_Site(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Site Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::Site)) {
        PyErr_SetString(PyExc_ValueError, "Site must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->Site, 0, sizeof(data->Site));
    // memcpy(data->Site, buf, len);
    strncpy(data->Site, buf, sizeof(data->Site));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 网络运营商
/// typedef char TThostFtdcNetOperatorType[9]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_NetOperator(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NetOperator, (Py_ssize_t)sizeof(data->NetOperator));
    return PyBytes_FromString(data->NetOperator);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_NetOperator(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NetOperator Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::NetOperator)) {
        PyErr_SetString(PyExc_ValueError, "NetOperator must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->NetOperator, 0, sizeof(data->NetOperator));
    // memcpy(data->NetOperator, buf, len);
    strncpy(data->NetOperator, buf, sizeof(data->NetOperator));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 系统名称
/// typedef char TThostFtdcAddrNameType[65]
static PyObject *PyCThostFtdcTGIpAddrParamFieldType_get_SysName(PyObject *self, void *closure) {
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SysName, (Py_ssize_t)sizeof(data->SysName));
    return PyBytes_FromString(data->SysName);
}

static int PyCThostFtdcTGIpAddrParamFieldType_set_SysName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SysName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTGIpAddrParamField::SysName)) {
        PyErr_SetString(PyExc_ValueError, "SysName must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGIpAddrParamFieldData>(self);
    CThostFtdcTGIpAddrParamField *data = &(extra->data);
    // memset(data->SysName, 0, sizeof(data->SysName));
    // memcpy(data->SysName, buf, len);
    strncpy(data->SysName, buf, sizeof(data->SysName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTGIpAddrParamFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTGIpAddrParamFieldData, data.DRIdentityID),
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
        .offset = offsetof(PyCThostFtdcTGIpAddrParamFieldData, data.AddrNo),
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
        .offset = offsetof(PyCThostFtdcTGIpAddrParamFieldData, data.IsSM),
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
        .offset = offsetof(PyCThostFtdcTGIpAddrParamFieldData, data.IsLocalAddr),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否是内网地址")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTGIpAddrParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_BrokerID,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_UserID,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    {
    .name = "Address",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_Address,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_Address,
    .doc = PyDoc_STR("服务地址"),
    },
    /// 交易中心名称
    /// typedef char TThostFtdcDRIdentityNameType[65]
    {
    .name = "DRIdentityName",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_DRIdentityName,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_DRIdentityName,
    .doc = PyDoc_STR("交易中心名称"),
    },
    /// 交易地址OR行情地址
    /// typedef char TThostFtdcAddrSrvModeType
    {
    .name = "AddrSrvMode",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_AddrSrvMode,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_AddrSrvMode,
    .doc = PyDoc_STR("交易地址OR行情地址"),
    },
    /// 地址版本
    /// typedef char TThostFtdcAddrVerType
    {
    .name = "AddrVer",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_AddrVer,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_AddrVer,
    .doc = PyDoc_STR("地址版本"),
    },
    /// 服务地址名称
    /// typedef char TThostFtdcAddrNameType[65]
    {
    .name = "AddrName",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_AddrName,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_AddrName,
    .doc = PyDoc_STR("服务地址名称"),
    },
    /// 地址补充信息
    /// typedef char TThostFtdcAddrRemarkType[161]
    {
    .name = "Remark",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_Remark,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_Remark,
    .doc = PyDoc_STR("地址补充信息"),
    },
    /// 站点
    /// typedef char TThostFtdcSiteType[51]
    {
    .name = "Site",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_Site,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_Site,
    .doc = PyDoc_STR("站点"),
    },
    /// 网络运营商
    /// typedef char TThostFtdcNetOperatorType[9]
    {
    .name = "NetOperator",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_NetOperator,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_NetOperator,
    .doc = PyDoc_STR("网络运营商"),
    },
    /// 系统名称
    /// typedef char TThostFtdcAddrNameType[65]
    {
    .name = "SysName",
    .get = PyCThostFtdcTGIpAddrParamFieldType_get_SysName,
    .set = PyCThostFtdcTGIpAddrParamFieldType_set_SysName,
    .doc = PyDoc_STR("系统名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTGIpAddrParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTGIpAddrParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("服务地址参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTGIpAddrParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTGIpAddrParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTGIpAddrParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTGIpAddrParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTGIpAddrParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTGIpAddrParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("服务地址参数")},
    {Py_tp_members, PyCThostFtdcTGIpAddrParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcTGIpAddrParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTGIpAddrParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTGIpAddrParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTGIpAddrParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcTGIpAddrParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTGIpAddrParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTGIpAddrParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTGIpAddrParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTGIpAddrParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTGIpAddrParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTGIpAddrParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTGIpAddrParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTGIpAddrParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTGIpAddrParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTGIpAddrParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}