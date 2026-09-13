
#include "PyCThostFtdcSyncDeltaInitInvstMarginField.h"

///投资者风险结算总保证金

static int PyCThostFtdcSyncDeltaInitInvstMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "LastRiskTotalInvstMargin", "LastRiskTotalExchMargin", "ThisSyncInvstMargin", "ThisSyncExchMargin", "RemainRiskInvstMargin", "RemainRiskExchMargin", "LastRiskSpecTotalInvstMargin", "LastRiskSpecTotalExchMargin", "ThisSyncSpecInvstMargin", "ThisSyncSpecExchMargin", "RemainRiskSpecInvstMargin", "RemainRiskSpecExchMargin", "SyncDeltaSequenceNo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaInitInvstMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInitInvstMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaInitInvstMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInitInvstMarginField_InvestorID_length = 0;

    /// 追平前总风险保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_LastRiskTotalInvstMargin = 0.0;

    /// 追平前交易所总风险保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_LastRiskTotalExchMargin = 0.0;

    /// 本次追平品种总保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncInvstMargin = 0.0;

    /// 本次追平品种交易所总保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncExchMargin = 0.0;

    /// 本次未追平品种总保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskInvstMargin = 0.0;

    /// 本次未追平品种交易所总保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskExchMargin = 0.0;

    /// 追平前总特殊产品风险保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_LastRiskSpecTotalInvstMargin = 0.0;

    /// 追平前总特殊产品交易所风险保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_LastRiskSpecTotalExchMargin = 0.0;

    /// 本次追平品种特殊产品总保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncSpecInvstMargin = 0.0;

    /// 本次追平品种特殊产品交易所总保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncSpecExchMargin = 0.0;

    /// 本次未追平品种特殊产品总保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskSpecInvstMargin = 0.0;

    /// 本次未追平品种特殊产品交易所总保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskSpecExchMargin = 0.0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaInitInvstMarginField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ddddddddddddi", (char **)kwlist
        , &CThostFtdcSyncDeltaInitInvstMarginField_BrokerID, &CThostFtdcSyncDeltaInitInvstMarginField_BrokerID_length
        , &CThostFtdcSyncDeltaInitInvstMarginField_InvestorID, &CThostFtdcSyncDeltaInitInvstMarginField_InvestorID_length
        , &CThostFtdcSyncDeltaInitInvstMarginField_LastRiskTotalInvstMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_LastRiskTotalExchMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncInvstMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncExchMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskInvstMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskExchMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_LastRiskSpecTotalInvstMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_LastRiskSpecTotalExchMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncSpecInvstMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncSpecExchMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskSpecInvstMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskSpecExchMargin
        , &CThostFtdcSyncDeltaInitInvstMarginField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaInitInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInitInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaInitInvstMarginField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaInitInvstMarginField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaInitInvstMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaInitInvstMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaInitInvstMarginField_BrokerID, CThostFtdcSyncDeltaInitInvstMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaInitInvstMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaInitInvstMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaInitInvstMarginField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaInitInvstMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaInitInvstMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaInitInvstMarginField_InvestorID, CThostFtdcSyncDeltaInitInvstMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaInitInvstMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaInitInvstMarginField_InvestorID = NULL;
    }

    /// 追平前总风险保证金
    /// typedef double TThostFtdcMoneyType
    data->LastRiskTotalInvstMargin = CThostFtdcSyncDeltaInitInvstMarginField_LastRiskTotalInvstMargin;

    /// 追平前交易所总风险保证金
    /// typedef double TThostFtdcMoneyType
    data->LastRiskTotalExchMargin = CThostFtdcSyncDeltaInitInvstMarginField_LastRiskTotalExchMargin;

    /// 本次追平品种总保证金
    /// typedef double TThostFtdcMoneyType
    data->ThisSyncInvstMargin = CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncInvstMargin;

    /// 本次追平品种交易所总保证金
    /// typedef double TThostFtdcMoneyType
    data->ThisSyncExchMargin = CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncExchMargin;

    /// 本次未追平品种总保证金
    /// typedef double TThostFtdcMoneyType
    data->RemainRiskInvstMargin = CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskInvstMargin;

    /// 本次未追平品种交易所总保证金
    /// typedef double TThostFtdcMoneyType
    data->RemainRiskExchMargin = CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskExchMargin;

    /// 追平前总特殊产品风险保证金
    /// typedef double TThostFtdcMoneyType
    data->LastRiskSpecTotalInvstMargin = CThostFtdcSyncDeltaInitInvstMarginField_LastRiskSpecTotalInvstMargin;

    /// 追平前总特殊产品交易所风险保证金
    /// typedef double TThostFtdcMoneyType
    data->LastRiskSpecTotalExchMargin = CThostFtdcSyncDeltaInitInvstMarginField_LastRiskSpecTotalExchMargin;

    /// 本次追平品种特殊产品总保证金
    /// typedef double TThostFtdcMoneyType
    data->ThisSyncSpecInvstMargin = CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncSpecInvstMargin;

    /// 本次追平品种特殊产品交易所总保证金
    /// typedef double TThostFtdcMoneyType
    data->ThisSyncSpecExchMargin = CThostFtdcSyncDeltaInitInvstMarginField_ThisSyncSpecExchMargin;

    /// 本次未追平品种特殊产品总保证金
    /// typedef double TThostFtdcMoneyType
    data->RemainRiskSpecInvstMargin = CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskSpecInvstMargin;

    /// 本次未追平品种特殊产品交易所总保证金
    /// typedef double TThostFtdcMoneyType
    data->RemainRiskSpecExchMargin = CThostFtdcSyncDeltaInitInvstMarginField_RemainRiskSpecExchMargin;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaInitInvstMarginField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaInitInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInitInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaInitInvstMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "LastRiskTotalInvstMargin", data->LastRiskTotalInvstMargin
        , "LastRiskTotalExchMargin", data->LastRiskTotalExchMargin
        , "ThisSyncInvstMargin", data->ThisSyncInvstMargin
        , "ThisSyncExchMargin", data->ThisSyncExchMargin
        , "RemainRiskInvstMargin", data->RemainRiskInvstMargin
        , "RemainRiskExchMargin", data->RemainRiskExchMargin
        , "LastRiskSpecTotalInvstMargin", data->LastRiskSpecTotalInvstMargin
        , "LastRiskSpecTotalExchMargin", data->LastRiskSpecTotalExchMargin
        , "ThisSyncSpecInvstMargin", data->ThisSyncSpecInvstMargin
        , "ThisSyncSpecExchMargin", data->ThisSyncSpecExchMargin
        , "RemainRiskSpecInvstMargin", data->RemainRiskSpecInvstMargin
        , "RemainRiskSpecExchMargin", data->RemainRiskSpecExchMargin
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInitInvstMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInitInvstMarginField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInitInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInitInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaInitInvstMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaInitInvstMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInitInvstMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInitInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInitInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaInitInvstMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInitInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInitInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaInitInvstMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaInitInvstMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInitInvstMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInitInvstMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInitInvstMarginFieldData>(self);
    CThostFtdcSyncDeltaInitInvstMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaInitInvstMarginFieldType_members[] = {
    /// 追平前总风险保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LastRiskTotalInvstMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.LastRiskTotalInvstMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平前总风险保证金")
    },
    /// 追平前交易所总风险保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LastRiskTotalExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.LastRiskTotalExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平前交易所总风险保证金")
    },
    /// 本次追平品种总保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ThisSyncInvstMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.ThisSyncInvstMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次追平品种总保证金")
    },
    /// 本次追平品种交易所总保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ThisSyncExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.ThisSyncExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次追平品种交易所总保证金")
    },
    /// 本次未追平品种总保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "RemainRiskInvstMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.RemainRiskInvstMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次未追平品种总保证金")
    },
    /// 本次未追平品种交易所总保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "RemainRiskExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.RemainRiskExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次未追平品种交易所总保证金")
    },
    /// 追平前总特殊产品风险保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LastRiskSpecTotalInvstMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.LastRiskSpecTotalInvstMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平前总特殊产品风险保证金")
    },
    /// 追平前总特殊产品交易所风险保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "LastRiskSpecTotalExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.LastRiskSpecTotalExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平前总特殊产品交易所风险保证金")
    },
    /// 本次追平品种特殊产品总保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ThisSyncSpecInvstMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.ThisSyncSpecInvstMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次追平品种特殊产品总保证金")
    },
    /// 本次追平品种特殊产品交易所总保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ThisSyncSpecExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.ThisSyncSpecExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次追平品种特殊产品交易所总保证金")
    },
    /// 本次未追平品种特殊产品总保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "RemainRiskSpecInvstMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.RemainRiskSpecInvstMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次未追平品种特殊产品总保证金")
    },
    /// 本次未追平品种特殊产品交易所总保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "RemainRiskSpecExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.RemainRiskSpecExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("本次未追平品种特殊产品交易所总保证金")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaInitInvstMarginFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaInitInvstMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaInitInvstMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaInitInvstMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaInitInvstMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaInitInvstMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaInitInvstMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者风险结算总保证金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaInitInvstMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaInitInvstMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaInitInvstMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaInitInvstMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaInitInvstMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者风险结算总保证金")},
    {Py_tp_members, PyCThostFtdcSyncDeltaInitInvstMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaInitInvstMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaInitInvstMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaInitInvstMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaInitInvstMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaInitInvstMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInitInvstMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaInitInvstMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaInitInvstMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaInitInvstMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaInitInvstMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaInitInvstMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaInitInvstMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInitInvstMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInitInvstMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}