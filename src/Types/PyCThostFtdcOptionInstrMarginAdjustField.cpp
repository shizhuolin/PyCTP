
#include "PyCThostFtdcOptionInstrMarginAdjustField.h"

///当前期权合约保证金调整系数

static int PyCThostFtdcOptionInstrMarginAdjustFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "SShortMarginRatioByMoney", "SShortMarginRatioByVolume", "HShortMarginRatioByMoney", "HShortMarginRatioByVolume", "AShortMarginRatioByMoney", "AShortMarginRatioByVolume", "IsRelative", "MShortMarginRatioByMoney", "MShortMarginRatioByVolume", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOptionInstrMarginAdjustField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOptionInstrMarginAdjustField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcOptionInstrMarginAdjustField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOptionInstrMarginAdjustField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOptionInstrMarginAdjustField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOptionInstrMarginAdjustField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOptionInstrMarginAdjustField_InvestorID_length = 0;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrMarginAdjustField_SShortMarginRatioByMoney = 0.0;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrMarginAdjustField_SShortMarginRatioByVolume = 0.0;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrMarginAdjustField_HShortMarginRatioByMoney = 0.0;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrMarginAdjustField_HShortMarginRatioByVolume = 0.0;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrMarginAdjustField_AShortMarginRatioByMoney = 0.0;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrMarginAdjustField_AShortMarginRatioByVolume = 0.0;

    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    int CThostFtdcOptionInstrMarginAdjustField_IsRelative = 0;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcOptionInstrMarginAdjustField_MShortMarginRatioByMoney = 0.0;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcOptionInstrMarginAdjustField_MShortMarginRatioByVolume = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOptionInstrMarginAdjustField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOptionInstrMarginAdjustField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddiddy#", (char **)kwlist
        , &CThostFtdcOptionInstrMarginAdjustField_reserve1, &CThostFtdcOptionInstrMarginAdjustField_reserve1_length
        , &CThostFtdcOptionInstrMarginAdjustField_InvestorRange
        , &CThostFtdcOptionInstrMarginAdjustField_BrokerID, &CThostFtdcOptionInstrMarginAdjustField_BrokerID_length
        , &CThostFtdcOptionInstrMarginAdjustField_InvestorID, &CThostFtdcOptionInstrMarginAdjustField_InvestorID_length
        , &CThostFtdcOptionInstrMarginAdjustField_SShortMarginRatioByMoney
        , &CThostFtdcOptionInstrMarginAdjustField_SShortMarginRatioByVolume
        , &CThostFtdcOptionInstrMarginAdjustField_HShortMarginRatioByMoney
        , &CThostFtdcOptionInstrMarginAdjustField_HShortMarginRatioByVolume
        , &CThostFtdcOptionInstrMarginAdjustField_AShortMarginRatioByMoney
        , &CThostFtdcOptionInstrMarginAdjustField_AShortMarginRatioByVolume
        , &CThostFtdcOptionInstrMarginAdjustField_IsRelative
        , &CThostFtdcOptionInstrMarginAdjustField_MShortMarginRatioByMoney
        , &CThostFtdcOptionInstrMarginAdjustField_MShortMarginRatioByVolume
        , &CThostFtdcOptionInstrMarginAdjustField_InstrumentID, &CThostFtdcOptionInstrMarginAdjustField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOptionInstrMarginAdjustField_reserve1 != NULL ) {
        if(CThostFtdcOptionInstrMarginAdjustField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOptionInstrMarginAdjustField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOptionInstrMarginAdjustField_reserve1, CThostFtdcOptionInstrMarginAdjustField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOptionInstrMarginAdjustField_reserve1, sizeof(data->reserve1));
        CThostFtdcOptionInstrMarginAdjustField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcOptionInstrMarginAdjustField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOptionInstrMarginAdjustField_BrokerID != NULL ) {
        if(CThostFtdcOptionInstrMarginAdjustField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOptionInstrMarginAdjustField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOptionInstrMarginAdjustField_BrokerID, CThostFtdcOptionInstrMarginAdjustField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOptionInstrMarginAdjustField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOptionInstrMarginAdjustField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOptionInstrMarginAdjustField_InvestorID != NULL ) {
        if(CThostFtdcOptionInstrMarginAdjustField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOptionInstrMarginAdjustField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOptionInstrMarginAdjustField_InvestorID, CThostFtdcOptionInstrMarginAdjustField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOptionInstrMarginAdjustField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOptionInstrMarginAdjustField_InvestorID = NULL;
    }

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->SShortMarginRatioByMoney = CThostFtdcOptionInstrMarginAdjustField_SShortMarginRatioByMoney;

    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->SShortMarginRatioByVolume = CThostFtdcOptionInstrMarginAdjustField_SShortMarginRatioByVolume;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->HShortMarginRatioByMoney = CThostFtdcOptionInstrMarginAdjustField_HShortMarginRatioByMoney;

    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->HShortMarginRatioByVolume = CThostFtdcOptionInstrMarginAdjustField_HShortMarginRatioByVolume;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->AShortMarginRatioByMoney = CThostFtdcOptionInstrMarginAdjustField_AShortMarginRatioByMoney;

    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->AShortMarginRatioByVolume = CThostFtdcOptionInstrMarginAdjustField_AShortMarginRatioByVolume;

    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    data->IsRelative = CThostFtdcOptionInstrMarginAdjustField_IsRelative;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    data->MShortMarginRatioByMoney = CThostFtdcOptionInstrMarginAdjustField_MShortMarginRatioByMoney;

    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    data->MShortMarginRatioByVolume = CThostFtdcOptionInstrMarginAdjustField_MShortMarginRatioByVolume;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOptionInstrMarginAdjustField_InstrumentID != NULL ) {
        if(CThostFtdcOptionInstrMarginAdjustField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOptionInstrMarginAdjustField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOptionInstrMarginAdjustField_InstrumentID, CThostFtdcOptionInstrMarginAdjustField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOptionInstrMarginAdjustField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOptionInstrMarginAdjustField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOptionInstrMarginAdjustFieldType_repr(PyObject *self) {

    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "SShortMarginRatioByMoney", data->SShortMarginRatioByMoney
        , "SShortMarginRatioByVolume", data->SShortMarginRatioByVolume
        , "HShortMarginRatioByMoney", data->HShortMarginRatioByMoney
        , "HShortMarginRatioByVolume", data->HShortMarginRatioByVolume
        , "AShortMarginRatioByMoney", data->AShortMarginRatioByMoney
        , "AShortMarginRatioByVolume", data->AShortMarginRatioByVolume
        , "IsRelative", data->IsRelative
        , "MShortMarginRatioByMoney", data->MShortMarginRatioByMoney
        , "MShortMarginRatioByVolume", data->MShortMarginRatioByVolume
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrMarginAdjustField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrMarginAdjustField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOptionInstrMarginAdjustFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOptionInstrMarginAdjustFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrMarginAdjustField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcOptionInstrMarginAdjustFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcOptionInstrMarginAdjustFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionInstrMarginAdjustField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOptionInstrMarginAdjustFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOptionInstrMarginAdjustFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrMarginAdjustField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOptionInstrMarginAdjustFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOptionInstrMarginAdjustFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrMarginAdjustField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOptionInstrMarginAdjustFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOptionInstrMarginAdjustFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionInstrMarginAdjustField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionInstrMarginAdjustFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionInstrMarginAdjustFieldData>(self);
    CThostFtdcOptionInstrMarginAdjustField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOptionInstrMarginAdjustFieldType_members[] = {
    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "SShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.SShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投机空头保证金调整系数")
    },
    /// 投机空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.SShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投机空头保证金调整系数")
    },
    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "HShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.HShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保值空头保证金调整系数")
    },
    /// 保值空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "HShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.HShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保值空头保证金调整系数")
    },
    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "AShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.AShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套利空头保证金调整系数")
    },
    /// 套利空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "AShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.AShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套利空头保证金调整系数")
    },
    /// 是否跟随交易所收取
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsRelative",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.IsRelative),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否跟随交易所收取")
    },
    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "MShortMarginRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.MShortMarginRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("做市商空头保证金调整系数")
    },
    /// 做市商空头保证金调整系数
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MShortMarginRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionInstrMarginAdjustFieldData, data.MShortMarginRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("做市商空头保证金调整系数")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOptionInstrMarginAdjustFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOptionInstrMarginAdjustFieldType_get_reserve1,
    .set = PyCThostFtdcOptionInstrMarginAdjustFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcOptionInstrMarginAdjustFieldType_get_InvestorRange,
    .set = PyCThostFtdcOptionInstrMarginAdjustFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOptionInstrMarginAdjustFieldType_get_BrokerID,
    .set = PyCThostFtdcOptionInstrMarginAdjustFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOptionInstrMarginAdjustFieldType_get_InvestorID,
    .set = PyCThostFtdcOptionInstrMarginAdjustFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOptionInstrMarginAdjustFieldType_get_InstrumentID,
    .set = PyCThostFtdcOptionInstrMarginAdjustFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOptionInstrMarginAdjustFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOptionInstrMarginAdjustField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前期权合约保证金调整系数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOptionInstrMarginAdjustFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOptionInstrMarginAdjustFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOptionInstrMarginAdjustFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOptionInstrMarginAdjustFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOptionInstrMarginAdjustFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOptionInstrMarginAdjustFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前期权合约保证金调整系数")},
    {Py_tp_members, PyCThostFtdcOptionInstrMarginAdjustFieldType_members},
    {Py_tp_getset, PyCThostFtdcOptionInstrMarginAdjustFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOptionInstrMarginAdjustFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOptionInstrMarginAdjustFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOptionInstrMarginAdjustFieldType_spec = {
    .name = "PyCTP.CThostFtdcOptionInstrMarginAdjustField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOptionInstrMarginAdjustFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOptionInstrMarginAdjustFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOptionInstrMarginAdjustFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOptionInstrMarginAdjustFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOptionInstrMarginAdjustFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOptionInstrMarginAdjustFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOptionInstrMarginAdjustFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOptionInstrMarginAdjustFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOptionInstrMarginAdjustField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrMarginAdjustField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}