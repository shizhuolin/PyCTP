
#include "PyCThostFtdcInvestorProdSPBMDetailField.h"

///投资者产品SPBM明细

static int PyCThostFtdcInvestorProdSPBMDetailFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "IntraInstrMargin", "BCollectingMargin", "SCollectingMargin", "IntraProdMargin", "NetMargin", "InterProdMargin", "SingleMargin", "AddOnMargin", "DeliveryMargin", "CallOptionMinRisk", "PutOptionMinRisk", "OptionMinRisk", "OptionValueOffset", "OptionRoyalty", "RealOptionValueOffset", "Margin", "ExchMargin", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorProdSPBMDetailField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorProdSPBMDetailField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorProdSPBMDetailField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorProdSPBMDetailField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorProdSPBMDetailField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorProdSPBMDetailField_InvestorID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode_length = 0;

    /// 合约内对锁保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_IntraInstrMargin = 0.0;

    /// 买归集保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_BCollectingMargin = 0.0;

    /// 卖归集保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_SCollectingMargin = 0.0;

    /// 品种内合约间对锁保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_IntraProdMargin = 0.0;

    /// 净保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_NetMargin = 0.0;

    /// 产品间对锁保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_InterProdMargin = 0.0;

    /// 裸保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_SingleMargin = 0.0;

    /// 附加保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_AddOnMargin = 0.0;

    /// 交割月保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_DeliveryMargin = 0.0;

    /// 看涨期权最低风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_CallOptionMinRisk = 0.0;

    /// 看跌期权最低风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_PutOptionMinRisk = 0.0;

    /// 卖方期权最低风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_OptionMinRisk = 0.0;

    /// 买方期权冲抵价值
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_OptionValueOffset = 0.0;

    /// 卖方期权权利金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_OptionRoyalty = 0.0;

    /// 价值冲抵
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_RealOptionValueOffset = 0.0;

    /// 保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_Margin = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdSPBMDetailField_ExchMargin = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddd", (char **)kwlist
        , &CThostFtdcInvestorProdSPBMDetailField_ExchangeID, &CThostFtdcInvestorProdSPBMDetailField_ExchangeID_length
        , &CThostFtdcInvestorProdSPBMDetailField_BrokerID, &CThostFtdcInvestorProdSPBMDetailField_BrokerID_length
        , &CThostFtdcInvestorProdSPBMDetailField_InvestorID, &CThostFtdcInvestorProdSPBMDetailField_InvestorID_length
        , &CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode, &CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode_length
        , &CThostFtdcInvestorProdSPBMDetailField_IntraInstrMargin
        , &CThostFtdcInvestorProdSPBMDetailField_BCollectingMargin
        , &CThostFtdcInvestorProdSPBMDetailField_SCollectingMargin
        , &CThostFtdcInvestorProdSPBMDetailField_IntraProdMargin
        , &CThostFtdcInvestorProdSPBMDetailField_NetMargin
        , &CThostFtdcInvestorProdSPBMDetailField_InterProdMargin
        , &CThostFtdcInvestorProdSPBMDetailField_SingleMargin
        , &CThostFtdcInvestorProdSPBMDetailField_AddOnMargin
        , &CThostFtdcInvestorProdSPBMDetailField_DeliveryMargin
        , &CThostFtdcInvestorProdSPBMDetailField_CallOptionMinRisk
        , &CThostFtdcInvestorProdSPBMDetailField_PutOptionMinRisk
        , &CThostFtdcInvestorProdSPBMDetailField_OptionMinRisk
        , &CThostFtdcInvestorProdSPBMDetailField_OptionValueOffset
        , &CThostFtdcInvestorProdSPBMDetailField_OptionRoyalty
        , &CThostFtdcInvestorProdSPBMDetailField_RealOptionValueOffset
        , &CThostFtdcInvestorProdSPBMDetailField_Margin
        , &CThostFtdcInvestorProdSPBMDetailField_ExchMargin
    )) {
        return -1;
    }

    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorProdSPBMDetailField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorProdSPBMDetailField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorProdSPBMDetailField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorProdSPBMDetailField_ExchangeID, CThostFtdcInvestorProdSPBMDetailField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorProdSPBMDetailField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorProdSPBMDetailField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorProdSPBMDetailField_BrokerID != NULL ) {
        if(CThostFtdcInvestorProdSPBMDetailField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorProdSPBMDetailField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorProdSPBMDetailField_BrokerID, CThostFtdcInvestorProdSPBMDetailField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorProdSPBMDetailField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorProdSPBMDetailField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorProdSPBMDetailField_InvestorID != NULL ) {
        if(CThostFtdcInvestorProdSPBMDetailField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorProdSPBMDetailField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorProdSPBMDetailField_InvestorID, CThostFtdcInvestorProdSPBMDetailField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorProdSPBMDetailField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorProdSPBMDetailField_InvestorID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode != NULL ) {
        if(CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode, CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
    }

    /// 合约内对锁保证金
    /// typedef double TThostFtdcMoneyType
    data->IntraInstrMargin = CThostFtdcInvestorProdSPBMDetailField_IntraInstrMargin;

    /// 买归集保证金
    /// typedef double TThostFtdcMoneyType
    data->BCollectingMargin = CThostFtdcInvestorProdSPBMDetailField_BCollectingMargin;

    /// 卖归集保证金
    /// typedef double TThostFtdcMoneyType
    data->SCollectingMargin = CThostFtdcInvestorProdSPBMDetailField_SCollectingMargin;

    /// 品种内合约间对锁保证金
    /// typedef double TThostFtdcMoneyType
    data->IntraProdMargin = CThostFtdcInvestorProdSPBMDetailField_IntraProdMargin;

    /// 净保证金
    /// typedef double TThostFtdcMoneyType
    data->NetMargin = CThostFtdcInvestorProdSPBMDetailField_NetMargin;

    /// 产品间对锁保证金
    /// typedef double TThostFtdcMoneyType
    data->InterProdMargin = CThostFtdcInvestorProdSPBMDetailField_InterProdMargin;

    /// 裸保证金
    /// typedef double TThostFtdcMoneyType
    data->SingleMargin = CThostFtdcInvestorProdSPBMDetailField_SingleMargin;

    /// 附加保证金
    /// typedef double TThostFtdcMoneyType
    data->AddOnMargin = CThostFtdcInvestorProdSPBMDetailField_AddOnMargin;

    /// 交割月保证金
    /// typedef double TThostFtdcMoneyType
    data->DeliveryMargin = CThostFtdcInvestorProdSPBMDetailField_DeliveryMargin;

    /// 看涨期权最低风险
    /// typedef double TThostFtdcMoneyType
    data->CallOptionMinRisk = CThostFtdcInvestorProdSPBMDetailField_CallOptionMinRisk;

    /// 看跌期权最低风险
    /// typedef double TThostFtdcMoneyType
    data->PutOptionMinRisk = CThostFtdcInvestorProdSPBMDetailField_PutOptionMinRisk;

    /// 卖方期权最低风险
    /// typedef double TThostFtdcMoneyType
    data->OptionMinRisk = CThostFtdcInvestorProdSPBMDetailField_OptionMinRisk;

    /// 买方期权冲抵价值
    /// typedef double TThostFtdcMoneyType
    data->OptionValueOffset = CThostFtdcInvestorProdSPBMDetailField_OptionValueOffset;

    /// 卖方期权权利金
    /// typedef double TThostFtdcMoneyType
    data->OptionRoyalty = CThostFtdcInvestorProdSPBMDetailField_OptionRoyalty;

    /// 价值冲抵
    /// typedef double TThostFtdcMoneyType
    data->RealOptionValueOffset = CThostFtdcInvestorProdSPBMDetailField_RealOptionValueOffset;

    /// 保证金
    /// typedef double TThostFtdcMoneyType
    data->Margin = CThostFtdcInvestorProdSPBMDetailField_Margin;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcInvestorProdSPBMDetailField_ExchMargin;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorProdSPBMDetailFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "IntraInstrMargin", data->IntraInstrMargin
        , "BCollectingMargin", data->BCollectingMargin
        , "SCollectingMargin", data->SCollectingMargin
        , "IntraProdMargin", data->IntraProdMargin
        , "NetMargin", data->NetMargin
        , "InterProdMargin", data->InterProdMargin
        , "SingleMargin", data->SingleMargin
        , "AddOnMargin", data->AddOnMargin
        , "DeliveryMargin", data->DeliveryMargin
        , "CallOptionMinRisk", data->CallOptionMinRisk
        , "PutOptionMinRisk", data->PutOptionMinRisk
        , "OptionMinRisk", data->OptionMinRisk
        , "OptionValueOffset", data->OptionValueOffset
        , "OptionRoyalty", data->OptionRoyalty
        , "RealOptionValueOffset", data->RealOptionValueOffset
        , "Margin", data->Margin
        , "ExchMargin", data->ExchMargin
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdSPBMDetailField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdSPBMDetailField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorProdSPBMDetailFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorProdSPBMDetailFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdSPBMDetailField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorProdSPBMDetailFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorProdSPBMDetailFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdSPBMDetailField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorProdSPBMDetailFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorProdSPBMDetailFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdSPBMDetailField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorProdSPBMDetailFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcInvestorProdSPBMDetailFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdSPBMDetailField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(self);
    CThostFtdcInvestorProdSPBMDetailField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorProdSPBMDetailFieldType_members[] = {
    /// 合约内对锁保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "IntraInstrMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.IntraInstrMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("合约内对锁保证金")
    },
    /// 买归集保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "BCollectingMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.BCollectingMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买归集保证金")
    },
    /// 卖归集保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SCollectingMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.SCollectingMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖归集保证金")
    },
    /// 品种内合约间对锁保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "IntraProdMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.IntraProdMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内合约间对锁保证金")
    },
    /// 净保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "NetMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.NetMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("净保证金")
    },
    /// 产品间对锁保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "InterProdMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.InterProdMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("产品间对锁保证金")
    },
    /// 裸保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SingleMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.SingleMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("裸保证金")
    },
    /// 附加保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "AddOnMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.AddOnMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("附加保证金")
    },
    /// 交割月保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "DeliveryMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.DeliveryMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交割月保证金")
    },
    /// 看涨期权最低风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CallOptionMinRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.CallOptionMinRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("看涨期权最低风险")
    },
    /// 看跌期权最低风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "PutOptionMinRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.PutOptionMinRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("看跌期权最低风险")
    },
    /// 卖方期权最低风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OptionMinRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.OptionMinRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖方期权最低风险")
    },
    /// 买方期权冲抵价值
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OptionValueOffset",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.OptionValueOffset),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买方期权冲抵价值")
    },
    /// 卖方期权权利金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OptionRoyalty",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.OptionRoyalty),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖方期权权利金")
    },
    /// 价值冲抵
    /// typedef double TThostFtdcMoneyType
    {
        .name = "RealOptionValueOffset",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.RealOptionValueOffset),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("价值冲抵")
    },
    /// 保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Margin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.Margin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保证金")
    },
    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdSPBMDetailFieldData, data.ExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorProdSPBMDetailFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorProdSPBMDetailFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorProdSPBMDetailFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorProdSPBMDetailFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorProdSPBMDetailFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorProdSPBMDetailFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorProdSPBMDetailFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcInvestorProdSPBMDetailFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcInvestorProdSPBMDetailFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorProdSPBMDetailFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorProdSPBMDetailField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者产品SPBM明细")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorProdSPBMDetailFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorProdSPBMDetailFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorProdSPBMDetailFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorProdSPBMDetailFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorProdSPBMDetailFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorProdSPBMDetailFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者产品SPBM明细")},
    {Py_tp_members, PyCThostFtdcInvestorProdSPBMDetailFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorProdSPBMDetailFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorProdSPBMDetailFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorProdSPBMDetailFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorProdSPBMDetailFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorProdSPBMDetailField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorProdSPBMDetailFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorProdSPBMDetailFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorProdSPBMDetailFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorProdSPBMDetailFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorProdSPBMDetailFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorProdSPBMDetailFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorProdSPBMDetailFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorProdSPBMDetailFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorProdSPBMDetailField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdSPBMDetailField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}