
#include "PyCThostFtdcSyncDeltaRULEInterParameterField.h"

///风险结算追平RULE跨品种抵扣参数

static int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "SpreadId", "InterRate", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "Leg1PropFactor", "Leg2PropFactor", "CommodityGroupID", "CommodityGroupName", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaRULEInterParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInterParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID_length = 0;

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    int CThostFtdcSyncDeltaRULEInterParameterField_SpreadId = 0;

    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaRULEInterParameterField_InterRate = 0.0;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_length = 0;

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_length = 0;

    /// 腿1比例系数
    /// typedef int TThostFtdcCommonIntType
    int CThostFtdcSyncDeltaRULEInterParameterField_Leg1PropFactor = 0;

    /// 腿2比例系数
    /// typedef int TThostFtdcCommonIntType
    int CThostFtdcSyncDeltaRULEInterParameterField_Leg2PropFactor = 0;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    int CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupID = 0;

    /// 商品群名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    char *CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName = NULL;
    Py_ssize_t CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaRULEInterParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaRULEInterParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#iiiy#ci", (char **)kwlist
        , &CThostFtdcSyncDeltaRULEInterParameterField_TradingDay, &CThostFtdcSyncDeltaRULEInterParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID, &CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaRULEInterParameterField_SpreadId
        , &CThostFtdcSyncDeltaRULEInterParameterField_InterRate
        , &CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode, &CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_length
        , &CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode, &CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_length
        , &CThostFtdcSyncDeltaRULEInterParameterField_Leg1PropFactor
        , &CThostFtdcSyncDeltaRULEInterParameterField_Leg2PropFactor
        , &CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupID
        , &CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName, &CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName_length
        , &CThostFtdcSyncDeltaRULEInterParameterField_ActionDirection
        , &CThostFtdcSyncDeltaRULEInterParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaRULEInterParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaRULEInterParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRULEInterParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaRULEInterParameterField_TradingDay, CThostFtdcSyncDeltaRULEInterParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaRULEInterParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaRULEInterParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID, CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaRULEInterParameterField_ExchangeID = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    data->SpreadId = CThostFtdcSyncDeltaRULEInterParameterField_SpreadId;

    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->InterRate = CThostFtdcSyncDeltaRULEInterParameterField_InterRate;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
        // memcpy(data->Leg1ProdFamilyCode, CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode, CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode_length);
        strncpy(data->Leg1ProdFamilyCode, CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode, sizeof(data->Leg1ProdFamilyCode));
        CThostFtdcSyncDeltaRULEInterParameterField_Leg1ProdFamilyCode = NULL;
    }

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
        // memcpy(data->Leg2ProdFamilyCode, CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode, CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode_length);
        strncpy(data->Leg2ProdFamilyCode, CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode, sizeof(data->Leg2ProdFamilyCode));
        CThostFtdcSyncDeltaRULEInterParameterField_Leg2ProdFamilyCode = NULL;
    }

    /// 腿1比例系数
    /// typedef int TThostFtdcCommonIntType
    data->Leg1PropFactor = CThostFtdcSyncDeltaRULEInterParameterField_Leg1PropFactor;

    /// 腿2比例系数
    /// typedef int TThostFtdcCommonIntType
    data->Leg2PropFactor = CThostFtdcSyncDeltaRULEInterParameterField_Leg2PropFactor;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    data->CommodityGroupID = CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupID;

    /// 商品群名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    if( CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName != NULL ) {
        if(CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName_length >= (Py_ssize_t)sizeof(data->CommodityGroupName)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupName too long: length=%zd (max allowed is 20)", CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName_length);
            return -1;
        }
        // memset(data->CommodityGroupName, 0, sizeof(data->CommodityGroupName));
        // memcpy(data->CommodityGroupName, CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName, CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName_length);
        strncpy(data->CommodityGroupName, CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName, sizeof(data->CommodityGroupName));
        CThostFtdcSyncDeltaRULEInterParameterField_CommodityGroupName = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaRULEInterParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaRULEInterParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:i,s:i,s:i,s:y,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SpreadId", data->SpreadId
        , "InterRate", data->InterRate
        , "Leg1ProdFamilyCode", data->Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)
        , "Leg2ProdFamilyCode", data->Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)
        , "Leg1PropFactor", data->Leg1PropFactor
        , "Leg2PropFactor", data->Leg2PropFactor
        , "CommodityGroupID", data->CommodityGroupID
        , "CommodityGroupName", data->CommodityGroupName//, (Py_ssize_t)sizeof(data->CommodityGroupName)
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInterParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_Leg1ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg1ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode));
    return PyBytes_FromString(data->Leg1ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_Leg1ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInterParameterField::Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
    // memcpy(data->Leg1ProdFamilyCode, buf, len);
    strncpy(data->Leg1ProdFamilyCode, buf, sizeof(data->Leg1ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_Leg2ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg2ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode));
    return PyBytes_FromString(data->Leg2ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_Leg2ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInterParameterField::Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
    // memcpy(data->Leg2ProdFamilyCode, buf, len);
    strncpy(data->Leg2ProdFamilyCode, buf, sizeof(data->Leg2ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群名称
/// typedef char TThostFtdcInstrumentNameType[21]
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_CommodityGroupName(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupName, (Py_ssize_t)sizeof(data->CommodityGroupName));
    return PyBytes_FromString(data->CommodityGroupName);
}

static int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_CommodityGroupName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInterParameterField::CommodityGroupName)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupName must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    // memset(data->CommodityGroupName, 0, sizeof(data->CommodityGroupName));
    // memcpy(data->CommodityGroupName, buf, len);
    strncpy(data->CommodityGroupName, buf, sizeof(data->CommodityGroupName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaRULEInterParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaRULEInterParameterFieldData>(self);
    CThostFtdcSyncDeltaRULEInterParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaRULEInterParameterFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    {
        .name = "SpreadId",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData, data.SpreadId),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "InterRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData, data.InterRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种间对锁仓费率折扣比例")
    },
    /// 腿1比例系数
    /// typedef int TThostFtdcCommonIntType
    {
        .name = "Leg1PropFactor",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData, data.Leg1PropFactor),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("腿1比例系数")
    },
    /// 腿2比例系数
    /// typedef int TThostFtdcCommonIntType
    {
        .name = "Leg2PropFactor",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData, data.Leg2PropFactor),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("腿2比例系数")
    },
    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    {
        .name = "CommodityGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData, data.CommodityGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群号")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaRULEInterParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg1ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_Leg1ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_Leg1ProdFamilyCode,
    .doc = PyDoc_STR("第一腿构成品种"),
    },
    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg2ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_Leg2ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_Leg2ProdFamilyCode,
    .doc = PyDoc_STR("第二腿构成品种"),
    },
    /// 商品群名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    {
    .name = "CommodityGroupName",
    .get = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_CommodityGroupName,
    .set = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_CommodityGroupName,
    .doc = PyDoc_STR("商品群名称"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaRULEInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaRULEInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平RULE跨品种抵扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaRULEInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaRULEInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaRULEInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaRULEInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaRULEInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平RULE跨品种抵扣参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaRULEInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaRULEInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaRULEInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaRULEInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaRULEInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaRULEInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaRULEInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaRULEInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaRULEInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaRULEInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaRULEInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaRULEInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRULEInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRULEInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}