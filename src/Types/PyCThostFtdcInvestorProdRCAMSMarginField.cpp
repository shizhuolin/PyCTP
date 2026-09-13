
#include "PyCThostFtdcInvestorProdRCAMSMarginField.h"

///投资者品种RCAMS保证金

static int PyCThostFtdcInvestorProdRCAMSMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "CombProductID", "HedgeFlag", "ProductGroupID", "RiskBeforeDiscount", "IntraInstrRisk", "BPosRisk", "SPosRisk", "IntraProdRisk", "NetRisk", "InterProdRisk", "ShortOptRiskAdj", "OptionRoyalty", "MMSACloseFrozenMargin", "CloseCombFrozenMargin", "CloseFrozenMargin", "MMSAOpenFrozenMargin", "DeliveryOpenFrozenMargin", "OpenFrozenMargin", "UseFrozenMargin", "MMSAExchMargin", "DeliveryExchMargin", "CombExchMargin", "ExchMargin", "UseMargin", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorProdRCAMSMarginField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorProdRCAMSMarginField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorProdRCAMSMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorProdRCAMSMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorProdRCAMSMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorProdRCAMSMarginField_InvestorID_length = 0;

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcInvestorProdRCAMSMarginField_CombProductID = NULL;
    Py_ssize_t CThostFtdcInvestorProdRCAMSMarginField_CombProductID_length = 0;

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInvestorProdRCAMSMarginField_HedgeFlag = 0;

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID_length = 0;

    /// 品种组合前风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_RiskBeforeDiscount = 0.0;

    /// 同合约对冲风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_IntraInstrRisk = 0.0;

    /// 品种买持仓风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_BPosRisk = 0.0;

    /// 品种卖持仓风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_SPosRisk = 0.0;

    /// 品种内对冲风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_IntraProdRisk = 0.0;

    /// 品种净持仓风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_NetRisk = 0.0;

    /// 品种间对冲风险
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_InterProdRisk = 0.0;

    /// 空头期权风险调整
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_ShortOptRiskAdj = 0.0;

    /// 空头期权权利金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_OptionRoyalty = 0.0;

    /// 大边组合平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_MMSACloseFrozenMargin = 0.0;

    /// 策略组合平仓/行权冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_CloseCombFrozenMargin = 0.0;

    /// 平仓/行权冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_CloseFrozenMargin = 0.0;

    /// 大边组合开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_MMSAOpenFrozenMargin = 0.0;

    /// 交割月期货开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin = 0.0;

    /// 开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_OpenFrozenMargin = 0.0;

    /// 投资者冻结保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_UseFrozenMargin = 0.0;

    /// 大边组合交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_MMSAExchMargin = 0.0;

    /// 交割月期货交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_DeliveryExchMargin = 0.0;

    /// 策略组合交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_CombExchMargin = 0.0;

    /// 交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_ExchMargin = 0.0;

    /// 投资者持仓保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorProdRCAMSMarginField_UseMargin = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#ddddddddddddddddddddd", (char **)kwlist
        , &CThostFtdcInvestorProdRCAMSMarginField_ExchangeID, &CThostFtdcInvestorProdRCAMSMarginField_ExchangeID_length
        , &CThostFtdcInvestorProdRCAMSMarginField_BrokerID, &CThostFtdcInvestorProdRCAMSMarginField_BrokerID_length
        , &CThostFtdcInvestorProdRCAMSMarginField_InvestorID, &CThostFtdcInvestorProdRCAMSMarginField_InvestorID_length
        , &CThostFtdcInvestorProdRCAMSMarginField_CombProductID, &CThostFtdcInvestorProdRCAMSMarginField_CombProductID_length
        , &CThostFtdcInvestorProdRCAMSMarginField_HedgeFlag
        , &CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID, &CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID_length
        , &CThostFtdcInvestorProdRCAMSMarginField_RiskBeforeDiscount
        , &CThostFtdcInvestorProdRCAMSMarginField_IntraInstrRisk
        , &CThostFtdcInvestorProdRCAMSMarginField_BPosRisk
        , &CThostFtdcInvestorProdRCAMSMarginField_SPosRisk
        , &CThostFtdcInvestorProdRCAMSMarginField_IntraProdRisk
        , &CThostFtdcInvestorProdRCAMSMarginField_NetRisk
        , &CThostFtdcInvestorProdRCAMSMarginField_InterProdRisk
        , &CThostFtdcInvestorProdRCAMSMarginField_ShortOptRiskAdj
        , &CThostFtdcInvestorProdRCAMSMarginField_OptionRoyalty
        , &CThostFtdcInvestorProdRCAMSMarginField_MMSACloseFrozenMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_CloseCombFrozenMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_CloseFrozenMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_MMSAOpenFrozenMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_OpenFrozenMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_UseFrozenMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_MMSAExchMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_DeliveryExchMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_CombExchMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_ExchMargin
        , &CThostFtdcInvestorProdRCAMSMarginField_UseMargin
    )) {
        return -1;
    }

    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorProdRCAMSMarginField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorProdRCAMSMarginField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorProdRCAMSMarginField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorProdRCAMSMarginField_ExchangeID, CThostFtdcInvestorProdRCAMSMarginField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorProdRCAMSMarginField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorProdRCAMSMarginField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorProdRCAMSMarginField_BrokerID != NULL ) {
        if(CThostFtdcInvestorProdRCAMSMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorProdRCAMSMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorProdRCAMSMarginField_BrokerID, CThostFtdcInvestorProdRCAMSMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorProdRCAMSMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorProdRCAMSMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorProdRCAMSMarginField_InvestorID != NULL ) {
        if(CThostFtdcInvestorProdRCAMSMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorProdRCAMSMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorProdRCAMSMarginField_InvestorID, CThostFtdcInvestorProdRCAMSMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorProdRCAMSMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorProdRCAMSMarginField_InvestorID = NULL;
    }

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcInvestorProdRCAMSMarginField_CombProductID != NULL ) {
        if(CThostFtdcInvestorProdRCAMSMarginField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcInvestorProdRCAMSMarginField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcInvestorProdRCAMSMarginField_CombProductID, CThostFtdcInvestorProdRCAMSMarginField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcInvestorProdRCAMSMarginField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcInvestorProdRCAMSMarginField_CombProductID = NULL;
    }

    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInvestorProdRCAMSMarginField_HedgeFlag;

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID != NULL ) {
        if(CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID, CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcInvestorProdRCAMSMarginField_ProductGroupID = NULL;
    }

    /// 品种组合前风险
    /// typedef double TThostFtdcMoneyType
    data->RiskBeforeDiscount = CThostFtdcInvestorProdRCAMSMarginField_RiskBeforeDiscount;

    /// 同合约对冲风险
    /// typedef double TThostFtdcMoneyType
    data->IntraInstrRisk = CThostFtdcInvestorProdRCAMSMarginField_IntraInstrRisk;

    /// 品种买持仓风险
    /// typedef double TThostFtdcMoneyType
    data->BPosRisk = CThostFtdcInvestorProdRCAMSMarginField_BPosRisk;

    /// 品种卖持仓风险
    /// typedef double TThostFtdcMoneyType
    data->SPosRisk = CThostFtdcInvestorProdRCAMSMarginField_SPosRisk;

    /// 品种内对冲风险
    /// typedef double TThostFtdcMoneyType
    data->IntraProdRisk = CThostFtdcInvestorProdRCAMSMarginField_IntraProdRisk;

    /// 品种净持仓风险
    /// typedef double TThostFtdcMoneyType
    data->NetRisk = CThostFtdcInvestorProdRCAMSMarginField_NetRisk;

    /// 品种间对冲风险
    /// typedef double TThostFtdcMoneyType
    data->InterProdRisk = CThostFtdcInvestorProdRCAMSMarginField_InterProdRisk;

    /// 空头期权风险调整
    /// typedef double TThostFtdcMoneyType
    data->ShortOptRiskAdj = CThostFtdcInvestorProdRCAMSMarginField_ShortOptRiskAdj;

    /// 空头期权权利金
    /// typedef double TThostFtdcMoneyType
    data->OptionRoyalty = CThostFtdcInvestorProdRCAMSMarginField_OptionRoyalty;

    /// 大边组合平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->MMSACloseFrozenMargin = CThostFtdcInvestorProdRCAMSMarginField_MMSACloseFrozenMargin;

    /// 策略组合平仓/行权冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->CloseCombFrozenMargin = CThostFtdcInvestorProdRCAMSMarginField_CloseCombFrozenMargin;

    /// 平仓/行权冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->CloseFrozenMargin = CThostFtdcInvestorProdRCAMSMarginField_CloseFrozenMargin;

    /// 大边组合开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->MMSAOpenFrozenMargin = CThostFtdcInvestorProdRCAMSMarginField_MMSAOpenFrozenMargin;

    /// 交割月期货开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->DeliveryOpenFrozenMargin = CThostFtdcInvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin;

    /// 开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->OpenFrozenMargin = CThostFtdcInvestorProdRCAMSMarginField_OpenFrozenMargin;

    /// 投资者冻结保证金
    /// typedef double TThostFtdcMoneyType
    data->UseFrozenMargin = CThostFtdcInvestorProdRCAMSMarginField_UseFrozenMargin;

    /// 大边组合交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    data->MMSAExchMargin = CThostFtdcInvestorProdRCAMSMarginField_MMSAExchMargin;

    /// 交割月期货交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    data->DeliveryExchMargin = CThostFtdcInvestorProdRCAMSMarginField_DeliveryExchMargin;

    /// 策略组合交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->CombExchMargin = CThostFtdcInvestorProdRCAMSMarginField_CombExchMargin;

    /// 交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcInvestorProdRCAMSMarginField_ExchMargin;

    /// 投资者持仓保证金
    /// typedef double TThostFtdcMoneyType
    data->UseMargin = CThostFtdcInvestorProdRCAMSMarginField_UseMargin;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "HedgeFlag", data->HedgeFlag
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
        , "RiskBeforeDiscount", data->RiskBeforeDiscount
        , "IntraInstrRisk", data->IntraInstrRisk
        , "BPosRisk", data->BPosRisk
        , "SPosRisk", data->SPosRisk
        , "IntraProdRisk", data->IntraProdRisk
        , "NetRisk", data->NetRisk
        , "InterProdRisk", data->InterProdRisk
        , "ShortOptRiskAdj", data->ShortOptRiskAdj
        , "OptionRoyalty", data->OptionRoyalty
        , "MMSACloseFrozenMargin", data->MMSACloseFrozenMargin
        , "CloseCombFrozenMargin", data->CloseCombFrozenMargin
        , "CloseFrozenMargin", data->CloseFrozenMargin
        , "MMSAOpenFrozenMargin", data->MMSAOpenFrozenMargin
        , "DeliveryOpenFrozenMargin", data->DeliveryOpenFrozenMargin
        , "OpenFrozenMargin", data->OpenFrozenMargin
        , "UseFrozenMargin", data->UseFrozenMargin
        , "MMSAExchMargin", data->MMSAExchMargin
        , "DeliveryExchMargin", data->DeliveryExchMargin
        , "CombExchMargin", data->CombExchMargin
        , "ExchMargin", data->ExchMargin
        , "UseMargin", data->UseMargin
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdRCAMSMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdRCAMSMarginField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRCAMSMarginField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRCAMSMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRCAMSMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRCAMSMarginField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投套标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorProdRCAMSMarginField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorProdRCAMSMarginField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorProdRCAMSMarginFieldType_members[] = {
    /// 品种组合前风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "RiskBeforeDiscount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.RiskBeforeDiscount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种组合前风险")
    },
    /// 同合约对冲风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "IntraInstrRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.IntraInstrRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("同合约对冲风险")
    },
    /// 品种买持仓风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "BPosRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.BPosRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种买持仓风险")
    },
    /// 品种卖持仓风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SPosRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.SPosRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种卖持仓风险")
    },
    /// 品种内对冲风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "IntraProdRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.IntraProdRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内对冲风险")
    },
    /// 品种净持仓风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "NetRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.NetRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种净持仓风险")
    },
    /// 品种间对冲风险
    /// typedef double TThostFtdcMoneyType
    {
        .name = "InterProdRisk",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.InterProdRisk),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种间对冲风险")
    },
    /// 空头期权风险调整
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ShortOptRiskAdj",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.ShortOptRiskAdj),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头期权风险调整")
    },
    /// 空头期权权利金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "OptionRoyalty",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.OptionRoyalty),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("空头期权权利金")
    },
    /// 大边组合平仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MMSACloseFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.MMSACloseFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("大边组合平仓冻结保证金")
    },
    /// 策略组合平仓/行权冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseCombFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.CloseCombFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("策略组合平仓/行权冻结保证金")
    },
    /// 平仓/行权冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CloseFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.CloseFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓/行权冻结保证金")
    },
    /// 大边组合开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MMSAOpenFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.MMSAOpenFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("大边组合开仓冻结保证金")
    },
    /// 交割月期货开仓冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "DeliveryOpenFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.DeliveryOpenFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交割月期货开仓冻结保证金")
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
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.OpenFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓冻结保证金")
    },
    /// 投资者冻结保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "UseFrozenMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.UseFrozenMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者冻结保证金")
    },
    /// 大边组合交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "MMSAExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.MMSAExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("大边组合交易所持仓保证金")
    },
    /// 交割月期货交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "DeliveryExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.DeliveryExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交割月期货交易所持仓保证金")
    },
    /// 策略组合交易所保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "CombExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.CombExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("策略组合交易所保证金")
    },
    /// 交易所持仓保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.ExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所持仓保证金")
    },
    /// 投资者持仓保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "UseMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorProdRCAMSMarginFieldData, data.UseMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者持仓保证金")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorProdRCAMSMarginFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_CombProductID,
    .set = PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_CombProductID,
    .doc = PyDoc_STR("产品组合代码"),
    },
    /// 投套标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投套标志"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcInvestorProdRCAMSMarginFieldType_get_ProductGroupID,
    .set = PyCThostFtdcInvestorProdRCAMSMarginFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorProdRCAMSMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorProdRCAMSMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者品种RCAMS保证金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorProdRCAMSMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorProdRCAMSMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorProdRCAMSMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorProdRCAMSMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorProdRCAMSMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorProdRCAMSMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者品种RCAMS保证金")},
    {Py_tp_members, PyCThostFtdcInvestorProdRCAMSMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorProdRCAMSMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorProdRCAMSMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorProdRCAMSMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorProdRCAMSMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorProdRCAMSMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorProdRCAMSMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorProdRCAMSMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorProdRCAMSMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorProdRCAMSMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorProdRCAMSMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorProdRCAMSMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorProdRCAMSMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorProdRCAMSMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdRCAMSMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}