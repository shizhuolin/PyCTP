
#include "PyCThostFtdcInvestorProdRULEMarginField.h"

///投资者产品RULE保证金

static int PyCThostFtdcInvestorProdRULEMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "InstrumentClass", "CommodityGroupID", "BStdPosition", "SStdPosition", "BStdOpenFrozen", "SStdOpenFrozen", "BStdCloseFrozen", "SStdCloseFrozen", "IntraProdStdPosition", "NetStdPosition", "InterProdStdPosition", "SingleStdPosition", "IntraProdMargin", "InterProdMargin", "SingleMargin", "NonCombMargin", "AddOnMargin", "ExchMargin", "AddOnFrozenMargin", "OpenFrozenMargin", "CloseFrozenMargin", "Margin", "FrozenMargin", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorProdRULEMarginField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorProdRULEMarginField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorProdRULEMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorProdRULEMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorProdRULEMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorProdRULEMarginField_InvestorID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode_length = 0;

    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    char CThostFtdcInvestorProdRULEMarginField_InstrumentClass = 0;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    int CThostFtdcInvestorProdRULEMarginField_CommodityGroupID = 0;

    /// 买标准持仓
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_BStdPosition = 0.0;

    /// 卖标准持仓
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_SStdPosition = 0.0;

    /// 买标准开仓冻结
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_BStdOpenFrozen = 0.0;

    /// 卖标准开仓冻结
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_SStdOpenFrozen = 0.0;

    /// 买标准平仓冻结
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_BStdCloseFrozen = 0.0;

    /// 卖标准平仓冻结
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_SStdCloseFrozen = 0.0;

    /// 品种内对冲标准持仓
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_IntraProdStdPosition = 0.0;

    /// 品种内单腿标准持仓
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_NetStdPosition = 0.0;

    /// 品种间对冲标准持仓
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_InterProdStdPosition = 0.0;

    /// 单腿标准持仓
    /// typedef double TThostFtdcStdPositionType
    double CThostFtdcInvestorProdRULEMarginField_SingleStdPosition = 0.0;

    /// 品种内对锁保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_IntraProdMargin = 0.0;

    /// 品种间对锁保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_InterProdMargin = 0.0;

    /// 跨品种单腿保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_SingleMargin = 0.0;

    /// 非组合合约保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_NonCombMargin = 0.0;

    /// 附加保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_AddOnMargin = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_ExchMargin = 0.0;

    /// 附加冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_AddOnFrozenMargin = 0.0;

    /// 开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_OpenFrozenMargin = 0.0;

    /// 平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_CloseFrozenMargin = 0.0;

    /// 品种保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_Margin = 0.0;

    /// 冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRULEMarginField_FrozenMargin = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ciddddddddddddddddddddd", (char **)kwlist
        , &CThostFtdcInvestorProdRULEMarginField_ExchangeID, &CThostFtdcInvestorProdRULEMarginField_ExchangeID_length
        , &CThostFtdcInvestorProdRULEMarginField_BrokerID, &CThostFtdcInvestorProdRULEMarginField_BrokerID_length
        , &CThostFtdcInvestorProdRULEMarginField_InvestorID, &CThostFtdcInvestorProdRULEMarginField_InvestorID_length
        , &CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode, &CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode_length
        , &CThostFtdcInvestorProdRULEMarginField_InstrumentClass
        , &CThostFtdcInvestorProdRULEMarginField_CommodityGroupID
        , &CThostFtdcInvestorProdRULEMarginField_BStdPosition
        , &CThostFtdcInvestorProdRULEMarginField_SStdPosition
        , &CThostFtdcInvestorProdRULEMarginField_BStdOpenFrozen
        , &CThostFtdcInvestorProdRULEMarginField_SStdOpenFrozen
        , &CThostFtdcInvestorProdRULEMarginField_BStdCloseFrozen
        , &CThostFtdcInvestorProdRULEMarginField_SStdCloseFrozen
        , &CThostFtdcInvestorProdRULEMarginField_IntraProdStdPosition
        , &CThostFtdcInvestorProdRULEMarginField_NetStdPosition
        , &CThostFtdcInvestorProdRULEMarginField_InterProdStdPosition
        , &CThostFtdcInvestorProdRULEMarginField_SingleStdPosition
        , &CThostFtdcInvestorProdRULEMarginField_IntraProdMargin
        , &CThostFtdcInvestorProdRULEMarginField_InterProdMargin
        , &CThostFtdcInvestorProdRULEMarginField_SingleMargin
        , &CThostFtdcInvestorProdRULEMarginField_NonCombMargin
        , &CThostFtdcInvestorProdRULEMarginField_AddOnMargin
        , &CThostFtdcInvestorProdRULEMarginField_ExchMargin
        , &CThostFtdcInvestorProdRULEMarginField_AddOnFrozenMargin
        , &CThostFtdcInvestorProdRULEMarginField_OpenFrozenMargin
        , &CThostFtdcInvestorProdRULEMarginField_CloseFrozenMargin
        , &CThostFtdcInvestorProdRULEMarginField_Margin
        , &CThostFtdcInvestorProdRULEMarginField_FrozenMargin
    )) {
        return -1;
    }

    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorProdRULEMarginField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorProdRULEMarginField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorProdRULEMarginField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorProdRULEMarginField_ExchangeID, CThostFtdcInvestorProdRULEMarginField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorProdRULEMarginField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorProdRULEMarginField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorProdRULEMarginField_BrokerID != NULL ) {
        if(CThostFtdcInvestorProdRULEMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorProdRULEMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorProdRULEMarginField_BrokerID, CThostFtdcInvestorProdRULEMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorProdRULEMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorProdRULEMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorProdRULEMarginField_InvestorID != NULL ) {
        if(CThostFtdcInvestorProdRULEMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorProdRULEMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorProdRULEMarginField_InvestorID, CThostFtdcInvestorProdRULEMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorProdRULEMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorProdRULEMarginField_InvestorID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode != NULL ) {
        if(CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode, CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcInvestorProdRULEMarginField_ProdFamilyCode = NULL;
    }

    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    data->InstrumentClass = CThostFtdcInvestorProdRULEMarginField_InstrumentClass;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    data->CommodityGroupID = CThostFtdcInvestorProdRULEMarginField_CommodityGroupID;

    /// 买标准持仓
    /// typedef double TThostFtdcStdPositionType
    data->BStdPosition = CThostFtdcInvestorProdRULEMarginField_BStdPosition;

    /// 卖标准持仓
    /// typedef double TThostFtdcStdPositionType
    data->SStdPosition = CThostFtdcInvestorProdRULEMarginField_SStdPosition;

    /// 买标准开仓冻结
    /// typedef double TThostFtdcStdPositionType
    data->BStdOpenFrozen = CThostFtdcInvestorProdRULEMarginField_BStdOpenFrozen;

    /// 卖标准开仓冻结
    /// typedef double TThostFtdcStdPositionType
    data->SStdOpenFrozen = CThostFtdcInvestorProdRULEMarginField_SStdOpenFrozen;

    /// 买标准平仓冻结
    /// typedef double TThostFtdcStdPositionType
    data->BStdCloseFrozen = CThostFtdcInvestorProdRULEMarginField_BStdCloseFrozen;

    /// 卖标准平仓冻结
    /// typedef double TThostFtdcStdPositionType
    data->SStdCloseFrozen = CThostFtdcInvestorProdRULEMarginField_SStdCloseFrozen;

    /// 品种内对冲标准持仓
    /// typedef double TThostFtdcStdPositionType
    data->IntraProdStdPosition = CThostFtdcInvestorProdRULEMarginField_IntraProdStdPosition;

    /// 品种内单腿标准持仓
    /// typedef double TThostFtdcStdPositionType
    data->NetStdPosition = CThostFtdcInvestorProdRULEMarginField_NetStdPosition;

    /// 品种间对冲标准持仓
    /// typedef double TThostFtdcStdPositionType
    data->InterProdStdPosition = CThostFtdcInvestorProdRULEMarginField_InterProdStdPosition;

    /// 单腿标准持仓
    /// typedef double TThostFtdcStdPositionType
    data->SingleStdPosition = CThostFtdcInvestorProdRULEMarginField_SingleStdPosition;

    /// 品种内对锁保证金
    /// typedef double TThostFtdcMoneyType
    data->IntraProdMargin = CThostFtdcInvestorProdRULEMarginField_IntraProdMargin;

    /// 品种间对锁保证金
    /// typedef double TThostFtdcMoneyType
    data->InterProdMargin = CThostFtdcInvestorProdRULEMarginField_InterProdMargin;

    /// 跨品种单腿保证金
    /// typedef double TThostFtdcMoneyType
    data->SingleMargin = CThostFtdcInvestorProdRULEMarginField_SingleMargin;

    /// 非组合合约保证金
    /// typedef double TThostFtdcMoneyType
    data->NonCombMargin = CThostFtdcInvestorProdRULEMarginField_NonCombMargin;

    /// 附加保证金
    /// typedef double TThostFtdcMoneyType
    data->AddOnMargin = CThostFtdcInvestorProdRULEMarginField_AddOnMargin;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcInvestorProdRULEMarginField_ExchMargin;

    /// 附加冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->AddOnFrozenMargin = CThostFtdcInvestorProdRULEMarginField_AddOnFrozenMargin;

    /// 开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->OpenFrozenMargin = CThostFtdcInvestorProdRULEMarginField_OpenFrozenMargin;

    /// 平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->CloseFrozenMargin = CThostFtdcInvestorProdRULEMarginField_CloseFrozenMargin;

    /// 品种保证金
    /// typedef double TThostFtdcMoneyType
    data->Margin = CThostFtdcInvestorProdRULEMarginField_Margin;

    /// 冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->FrozenMargin = CThostFtdcInvestorProdRULEMarginField_FrozenMargin;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorProdRULEMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "InstrumentClass", data->InstrumentClass
        , "CommodityGroupID", data->CommodityGroupID
        , "BStdPosition", data->BStdPosition
        , "SStdPosition", data->SStdPosition
        , "BStdOpenFrozen", data->BStdOpenFrozen
        , "SStdOpenFrozen", data->SStdOpenFrozen
        , "BStdCloseFrozen", data->BStdCloseFrozen
        , "SStdCloseFrozen", data->SStdCloseFrozen
        , "IntraProdStdPosition", data->IntraProdStdPosition
        , "NetStdPosition", data->NetStdPosition
        , "InterProdStdPosition", data->InterProdStdPosition
        , "SingleStdPosition", data->SingleStdPosition
        , "IntraProdMargin", data->IntraProdMargin
        , "InterProdMargin", data->InterProdMargin
        , "SingleMargin", data->SingleMargin
        , "NonCombMargin", data->NonCombMargin
        , "AddOnMargin", data->AddOnMargin
        , "ExchMargin", data->ExchMargin
        , "AddOnFrozenMargin", data->AddOnFrozenMargin
        , "OpenFrozenMargin", data->OpenFrozenMargin
        , "CloseFrozenMargin", data->CloseFrozenMargin
        , "Margin", data->Margin
        , "FrozenMargin", data->FrozenMargin
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdRULEMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdRULEMarginField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorProdRULEMarginFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorProdRULEMarginFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRULEMarginField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorProdRULEMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorProdRULEMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRULEMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorProdRULEMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorProdRULEMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRULEMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorProdRULEMarginFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcInvestorProdRULEMarginFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRULEMarginField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约类型
/// typedef char TThostFtdcInstrumentClassType
static PyObject *PyCThostFtdcInvestorProdRULEMarginFieldType_get_InstrumentClass(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InstrumentClass), 1);
}

static int PyCThostFtdcInvestorProdRULEMarginFieldType_set_InstrumentClass(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentClass Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorProdRULEMarginField::InstrumentClass)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentClass must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRULEMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(self);
    CThostFtdcInvestorProdRULEMarginField *data = &(extra->data);
    data->InstrumentClass = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorProdRULEMarginFieldType_members[] = {
    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    {
        .name = "CommodityGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.CommodityGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群号")
    },
    /// 买标准持仓
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "BStdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.BStdPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买标准持仓")
    },
    /// 卖标准持仓
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "SStdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.SStdPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖标准持仓")
    },
    /// 买标准开仓冻结
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "BStdOpenFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.BStdOpenFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买标准开仓冻结")
    },
    /// 卖标准开仓冻结
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "SStdOpenFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.SStdOpenFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖标准开仓冻结")
    },
    /// 买标准平仓冻结
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "BStdCloseFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.BStdCloseFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买标准平仓冻结")
    },
    /// 卖标准平仓冻结
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "SStdCloseFrozen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.SStdCloseFrozen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖标准平仓冻结")
    },
    /// 品种内对冲标准持仓
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "IntraProdStdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.IntraProdStdPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内对冲标准持仓")
    },
    /// 品种内单腿标准持仓
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "NetStdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.NetStdPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内单腿标准持仓")
    },
    /// 品种间对冲标准持仓
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "InterProdStdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.InterProdStdPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种间对冲标准持仓")
    },
    /// 单腿标准持仓
    /// typedef double TThostFtdcStdPositionType
    {
        .name = "SingleStdPosition",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.SingleStdPosition),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿标准持仓")
    },
    /// 品种内对锁保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "IntraProdMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.IntraProdMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内对锁保证金")
    },
    /// 品种间对锁保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "InterProdMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.InterProdMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种间对锁保证金")
    },
    /// 跨品种单腿保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SingleMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.SingleMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("跨品种单腿保证金")
    },
    /// 非组合合约保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "NonCombMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.NonCombMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("非组合合约保证金")
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
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.AddOnMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("附加保证金")
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
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.ExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
    },
    /// 附加冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "AddOnFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.AddOnFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("附加冻结保证金")
    },
    /// 开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OpenFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.OpenFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓冻结保证金")
    },
    /// 平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.CloseFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓冻结保证金")
    },
    /// 品种保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Margin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.Margin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种保证金")
    },
    /// 冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRULEMarginFieldData, data.FrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("冻结保证金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorProdRULEMarginFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorProdRULEMarginFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorProdRULEMarginFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorProdRULEMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorProdRULEMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorProdRULEMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorProdRULEMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcInvestorProdRULEMarginFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcInvestorProdRULEMarginFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    {
    .name = "InstrumentClass",
    .get = PyCThostFtdcInvestorProdRULEMarginFieldType_get_InstrumentClass,
    .set = PyCThostFtdcInvestorProdRULEMarginFieldType_set_InstrumentClass,
    .doc = PyDoc_STR("合约类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorProdRULEMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorProdRULEMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者产品RULE保证金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorProdRULEMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorProdRULEMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorProdRULEMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorProdRULEMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorProdRULEMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorProdRULEMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者产品RULE保证金")},
    {Py_tp_members, PyCThostFtdcInvestorProdRULEMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorProdRULEMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorProdRULEMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorProdRULEMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorProdRULEMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorProdRULEMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorProdRULEMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorProdRULEMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorProdRULEMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorProdRULEMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorProdRULEMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorProdRULEMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorProdRULEMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorProdRULEMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorProdRULEMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdRULEMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}