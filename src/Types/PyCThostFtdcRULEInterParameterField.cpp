
#include "PyCThostFtdcRULEInterParameterField.h"

///RULE跨品种抵扣参数

static int PyCThostFtdcRULEInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "SpreadId", "InterRate", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "Leg1PropFactor", "Leg2PropFactor", "CommodityGroupID", "CommodityGroupName", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRULEInterParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRULEInterParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRULEInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRULEInterParameterField_ExchangeID_length = 0;

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    int CThostFtdcRULEInterParameterField_SpreadId = 0;

    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRULEInterParameterField_InterRate = 0.0;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode_length = 0;

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode_length = 0;

    /// 腿1比例系数
    /// typedef int TThostFtdcCommonIntType
    int CThostFtdcRULEInterParameterField_Leg1PropFactor = 0;

    /// 腿2比例系数
    /// typedef int TThostFtdcCommonIntType
    int CThostFtdcRULEInterParameterField_Leg2PropFactor = 0;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    int CThostFtdcRULEInterParameterField_CommodityGroupID = 0;

    /// 商品群名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    char *CThostFtdcRULEInterParameterField_CommodityGroupName = NULL;
    Py_ssize_t CThostFtdcRULEInterParameterField_CommodityGroupName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#iiiy#", (char **)kwlist
        , &CThostFtdcRULEInterParameterField_TradingDay, &CThostFtdcRULEInterParameterField_TradingDay_length
        , &CThostFtdcRULEInterParameterField_ExchangeID, &CThostFtdcRULEInterParameterField_ExchangeID_length
        , &CThostFtdcRULEInterParameterField_SpreadId
        , &CThostFtdcRULEInterParameterField_InterRate
        , &CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode, &CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode_length
        , &CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode, &CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode_length
        , &CThostFtdcRULEInterParameterField_Leg1PropFactor
        , &CThostFtdcRULEInterParameterField_Leg2PropFactor
        , &CThostFtdcRULEInterParameterField_CommodityGroupID
        , &CThostFtdcRULEInterParameterField_CommodityGroupName, &CThostFtdcRULEInterParameterField_CommodityGroupName_length
    )) {
        return -1;
    }

    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRULEInterParameterField_TradingDay != NULL ) {
        if(CThostFtdcRULEInterParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRULEInterParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRULEInterParameterField_TradingDay, CThostFtdcRULEInterParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRULEInterParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRULEInterParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRULEInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcRULEInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRULEInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRULEInterParameterField_ExchangeID, CThostFtdcRULEInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRULEInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRULEInterParameterField_ExchangeID = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    data->SpreadId = CThostFtdcRULEInterParameterField_SpreadId;

    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->InterRate = CThostFtdcRULEInterParameterField_InterRate;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
        // memcpy(data->Leg1ProdFamilyCode, CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode, CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode_length);
        strncpy(data->Leg1ProdFamilyCode, CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode, sizeof(data->Leg1ProdFamilyCode));
        CThostFtdcRULEInterParameterField_Leg1ProdFamilyCode = NULL;
    }

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
        // memcpy(data->Leg2ProdFamilyCode, CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode, CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode_length);
        strncpy(data->Leg2ProdFamilyCode, CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode, sizeof(data->Leg2ProdFamilyCode));
        CThostFtdcRULEInterParameterField_Leg2ProdFamilyCode = NULL;
    }

    /// 腿1比例系数
    /// typedef int TThostFtdcCommonIntType
    data->Leg1PropFactor = CThostFtdcRULEInterParameterField_Leg1PropFactor;

    /// 腿2比例系数
    /// typedef int TThostFtdcCommonIntType
    data->Leg2PropFactor = CThostFtdcRULEInterParameterField_Leg2PropFactor;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    data->CommodityGroupID = CThostFtdcRULEInterParameterField_CommodityGroupID;

    /// 商品群名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    if( CThostFtdcRULEInterParameterField_CommodityGroupName != NULL ) {
        if(CThostFtdcRULEInterParameterField_CommodityGroupName_length >= (Py_ssize_t)sizeof(data->CommodityGroupName)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupName too long: length=%zd (max allowed is 20)", CThostFtdcRULEInterParameterField_CommodityGroupName_length);
            return -1;
        }
        // memset(data->CommodityGroupName, 0, sizeof(data->CommodityGroupName));
        // memcpy(data->CommodityGroupName, CThostFtdcRULEInterParameterField_CommodityGroupName, CThostFtdcRULEInterParameterField_CommodityGroupName_length);
        strncpy(data->CommodityGroupName, CThostFtdcRULEInterParameterField_CommodityGroupName, sizeof(data->CommodityGroupName));
        CThostFtdcRULEInterParameterField_CommodityGroupName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRULEInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:i,s:i,s:i,s:y}"
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRULEInterParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRULEInterParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInterParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRULEInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRULEInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRULEInterParameterFieldType_get_Leg1ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg1ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode));
    return PyBytes_FromString(data->Leg1ProdFamilyCode);
}

static int PyCThostFtdcRULEInterParameterFieldType_set_Leg1ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInterParameterField::Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
    // memcpy(data->Leg1ProdFamilyCode, buf, len);
    strncpy(data->Leg1ProdFamilyCode, buf, sizeof(data->Leg1ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRULEInterParameterFieldType_get_Leg2ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg2ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode));
    return PyBytes_FromString(data->Leg2ProdFamilyCode);
}

static int PyCThostFtdcRULEInterParameterFieldType_set_Leg2ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInterParameterField::Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
    // memcpy(data->Leg2ProdFamilyCode, buf, len);
    strncpy(data->Leg2ProdFamilyCode, buf, sizeof(data->Leg2ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群名称
/// typedef char TThostFtdcInstrumentNameType[21]
static PyObject *PyCThostFtdcRULEInterParameterFieldType_get_CommodityGroupName(PyObject *self, void *closure) {
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupName, (Py_ssize_t)sizeof(data->CommodityGroupName));
    return PyBytes_FromString(data->CommodityGroupName);
}

static int PyCThostFtdcRULEInterParameterFieldType_set_CommodityGroupName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInterParameterField::CommodityGroupName)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupName must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(self);
    CThostFtdcRULEInterParameterField *data = &(extra->data);
    // memset(data->CommodityGroupName, 0, sizeof(data->CommodityGroupName));
    // memcpy(data->CommodityGroupName, buf, len);
    strncpy(data->CommodityGroupName, buf, sizeof(data->CommodityGroupName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRULEInterParameterFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    {
        .name = "SpreadId",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEInterParameterFieldData, data.SpreadId),
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
        .offset = offsetof(PyCThostFtdcRULEInterParameterFieldData, data.InterRate),
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
        .offset = offsetof(PyCThostFtdcRULEInterParameterFieldData, data.Leg1PropFactor),
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
        .offset = offsetof(PyCThostFtdcRULEInterParameterFieldData, data.Leg2PropFactor),
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
        .offset = offsetof(PyCThostFtdcRULEInterParameterFieldData, data.CommodityGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRULEInterParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRULEInterParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcRULEInterParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRULEInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcRULEInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg1ProdFamilyCode",
    .get = PyCThostFtdcRULEInterParameterFieldType_get_Leg1ProdFamilyCode,
    .set = PyCThostFtdcRULEInterParameterFieldType_set_Leg1ProdFamilyCode,
    .doc = PyDoc_STR("第一腿构成品种"),
    },
    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg2ProdFamilyCode",
    .get = PyCThostFtdcRULEInterParameterFieldType_get_Leg2ProdFamilyCode,
    .set = PyCThostFtdcRULEInterParameterFieldType_set_Leg2ProdFamilyCode,
    .doc = PyDoc_STR("第二腿构成品种"),
    },
    /// 商品群名称
    /// typedef char TThostFtdcInstrumentNameType[21]
    {
    .name = "CommodityGroupName",
    .get = PyCThostFtdcRULEInterParameterFieldType_get_CommodityGroupName,
    .set = PyCThostFtdcRULEInterParameterFieldType_set_CommodityGroupName,
    .doc = PyDoc_STR("商品群名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRULEInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRULEInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RULE跨品种抵扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRULEInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRULEInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRULEInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRULEInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRULEInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRULEInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RULE跨品种抵扣参数")},
    {Py_tp_members, PyCThostFtdcRULEInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcRULEInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRULEInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRULEInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRULEInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcRULEInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRULEInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRULEInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRULEInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRULEInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRULEInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRULEInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRULEInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRULEInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRULEInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}