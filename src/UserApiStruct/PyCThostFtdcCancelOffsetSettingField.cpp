
#include "PyCThostFtdcCancelOffsetSettingField.h"

///撤销对冲设置

static PyObject *PyCThostFtdcCancelOffsetSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCancelOffsetSettingField *self = (PyCThostFtdcCancelOffsetSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCancelOffsetSettingField_init(PyCThostFtdcCancelOffsetSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress", "ExchangeInstID", "ExchangeSerialNo", "ExchangeProductID", "TraderID", "InstallID", "ParticipantID", "ClientID", "OrderActionStatus", "StatusMsg", "ActionLocalID", "ActionDate", "ActionTime",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *CancelOffsetSettingField_BrokerID = NULL;
    Py_ssize_t CancelOffsetSettingField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *CancelOffsetSettingField_InvestorID = NULL;
    Py_ssize_t CancelOffsetSettingField_InvestorID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *CancelOffsetSettingField_InstrumentID = NULL;
    Py_ssize_t CancelOffsetSettingField_InstrumentID_len = 0;
            
    ///标的期货合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *CancelOffsetSettingField_UnderlyingInstrID = NULL;
    Py_ssize_t CancelOffsetSettingField_UnderlyingInstrID_len = 0;
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    const char *CancelOffsetSettingField_ProductID = NULL;
    Py_ssize_t CancelOffsetSettingField_ProductID_len = 0;
            
    ///对冲类型
    // TThostFtdcOffsetTypeType char
    char CancelOffsetSettingField_OffsetType = 0;
            
    ///申请对冲的合约数量
    // TThostFtdcVolumeType int
    int CancelOffsetSettingField_Volume = 0;
        
    ///是否对冲
    // TThostFtdcBoolType int
    int CancelOffsetSettingField_IsOffset = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int CancelOffsetSettingField_RequestID = 0;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *CancelOffsetSettingField_UserID = NULL;
    Py_ssize_t CancelOffsetSettingField_UserID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *CancelOffsetSettingField_ExchangeID = NULL;
    Py_ssize_t CancelOffsetSettingField_ExchangeID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *CancelOffsetSettingField_IPAddress = NULL;
    Py_ssize_t CancelOffsetSettingField_IPAddress_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *CancelOffsetSettingField_MacAddress = NULL;
    Py_ssize_t CancelOffsetSettingField_MacAddress_len = 0;
            
    ///交易所合约代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *CancelOffsetSettingField_ExchangeInstID = NULL;
    Py_ssize_t CancelOffsetSettingField_ExchangeInstID_len = 0;
            
    ///交易所期权系列号
    // TThostFtdcExchangeInstIDType char[81]
    const char *CancelOffsetSettingField_ExchangeSerialNo = NULL;
    Py_ssize_t CancelOffsetSettingField_ExchangeSerialNo_len = 0;
            
    ///交易所产品代码
    // TThostFtdcProductIDType char[41]
    const char *CancelOffsetSettingField_ExchangeProductID = NULL;
    Py_ssize_t CancelOffsetSettingField_ExchangeProductID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *CancelOffsetSettingField_TraderID = NULL;
    Py_ssize_t CancelOffsetSettingField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int CancelOffsetSettingField_InstallID = 0;
        
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *CancelOffsetSettingField_ParticipantID = NULL;
    Py_ssize_t CancelOffsetSettingField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *CancelOffsetSettingField_ClientID = NULL;
    Py_ssize_t CancelOffsetSettingField_ClientID_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char CancelOffsetSettingField_OrderActionStatus = 0;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    const char *CancelOffsetSettingField_StatusMsg = NULL;
    Py_ssize_t CancelOffsetSettingField_StatusMsg_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *CancelOffsetSettingField_ActionLocalID = NULL;
    Py_ssize_t CancelOffsetSettingField_ActionLocalID_len = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *CancelOffsetSettingField_ActionDate = NULL;
    Py_ssize_t CancelOffsetSettingField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *CancelOffsetSettingField_ActionTime = NULL;
    Py_ssize_t CancelOffsetSettingField_ActionTime_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#y#y#y#y#iy#y#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciiis#s#s#s#s#s#s#s#is#s#cs#s#s#s#", (char **)kwlist
#endif

        , &CancelOffsetSettingField_BrokerID, &CancelOffsetSettingField_BrokerID_len 
        , &CancelOffsetSettingField_InvestorID, &CancelOffsetSettingField_InvestorID_len 
        , &CancelOffsetSettingField_InstrumentID, &CancelOffsetSettingField_InstrumentID_len 
        , &CancelOffsetSettingField_UnderlyingInstrID, &CancelOffsetSettingField_UnderlyingInstrID_len 
        , &CancelOffsetSettingField_ProductID, &CancelOffsetSettingField_ProductID_len 
        , &CancelOffsetSettingField_OffsetType 
        , &CancelOffsetSettingField_Volume 
        , &CancelOffsetSettingField_IsOffset 
        , &CancelOffsetSettingField_RequestID 
        , &CancelOffsetSettingField_UserID, &CancelOffsetSettingField_UserID_len 
        , &CancelOffsetSettingField_ExchangeID, &CancelOffsetSettingField_ExchangeID_len 
        , &CancelOffsetSettingField_IPAddress, &CancelOffsetSettingField_IPAddress_len 
        , &CancelOffsetSettingField_MacAddress, &CancelOffsetSettingField_MacAddress_len 
        , &CancelOffsetSettingField_ExchangeInstID, &CancelOffsetSettingField_ExchangeInstID_len 
        , &CancelOffsetSettingField_ExchangeSerialNo, &CancelOffsetSettingField_ExchangeSerialNo_len 
        , &CancelOffsetSettingField_ExchangeProductID, &CancelOffsetSettingField_ExchangeProductID_len 
        , &CancelOffsetSettingField_TraderID, &CancelOffsetSettingField_TraderID_len 
        , &CancelOffsetSettingField_InstallID 
        , &CancelOffsetSettingField_ParticipantID, &CancelOffsetSettingField_ParticipantID_len 
        , &CancelOffsetSettingField_ClientID, &CancelOffsetSettingField_ClientID_len 
        , &CancelOffsetSettingField_OrderActionStatus 
        , &CancelOffsetSettingField_StatusMsg, &CancelOffsetSettingField_StatusMsg_len 
        , &CancelOffsetSettingField_ActionLocalID, &CancelOffsetSettingField_ActionLocalID_len 
        , &CancelOffsetSettingField_ActionDate, &CancelOffsetSettingField_ActionDate_len 
        , &CancelOffsetSettingField_ActionTime, &CancelOffsetSettingField_ActionTime_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( CancelOffsetSettingField_BrokerID != NULL ) {
        if(CancelOffsetSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, CancelOffsetSettingField_BrokerID, CancelOffsetSettingField_BrokerID_len);        
        strncpy(self->data.BrokerID, CancelOffsetSettingField_BrokerID, sizeof(self->data.BrokerID) );
        CancelOffsetSettingField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( CancelOffsetSettingField_InvestorID != NULL ) {
        if(CancelOffsetSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, CancelOffsetSettingField_InvestorID, CancelOffsetSettingField_InvestorID_len);        
        strncpy(self->data.InvestorID, CancelOffsetSettingField_InvestorID, sizeof(self->data.InvestorID) );
        CancelOffsetSettingField_InvestorID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( CancelOffsetSettingField_InstrumentID != NULL ) {
        if(CancelOffsetSettingField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, CancelOffsetSettingField_InstrumentID, CancelOffsetSettingField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, CancelOffsetSettingField_InstrumentID, sizeof(self->data.InstrumentID) );
        CancelOffsetSettingField_InstrumentID = NULL;
    }
            
    ///标的期货合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( CancelOffsetSettingField_UnderlyingInstrID != NULL ) {
        if(CancelOffsetSettingField_UnderlyingInstrID_len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
            PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_UnderlyingInstrID_len, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
            return -1;
        }
        // memset(self->data.UnderlyingInstrID, 0, sizeof(self->data.UnderlyingInstrID));
        // memcpy(self->data.UnderlyingInstrID, CancelOffsetSettingField_UnderlyingInstrID, CancelOffsetSettingField_UnderlyingInstrID_len);        
        strncpy(self->data.UnderlyingInstrID, CancelOffsetSettingField_UnderlyingInstrID, sizeof(self->data.UnderlyingInstrID) );
        CancelOffsetSettingField_UnderlyingInstrID = NULL;
    }
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    if( CancelOffsetSettingField_ProductID != NULL ) {
        if(CancelOffsetSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, CancelOffsetSettingField_ProductID, CancelOffsetSettingField_ProductID_len);        
        strncpy(self->data.ProductID, CancelOffsetSettingField_ProductID, sizeof(self->data.ProductID) );
        CancelOffsetSettingField_ProductID = NULL;
    }
            
    ///对冲类型
    // TThostFtdcOffsetTypeType char
    self->data.OffsetType = CancelOffsetSettingField_OffsetType;
            
    ///申请对冲的合约数量
    // TThostFtdcVolumeType int
    self->data.Volume = CancelOffsetSettingField_Volume;
        
    ///是否对冲
    // TThostFtdcBoolType int
    self->data.IsOffset = CancelOffsetSettingField_IsOffset;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = CancelOffsetSettingField_RequestID;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( CancelOffsetSettingField_UserID != NULL ) {
        if(CancelOffsetSettingField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, CancelOffsetSettingField_UserID, CancelOffsetSettingField_UserID_len);        
        strncpy(self->data.UserID, CancelOffsetSettingField_UserID, sizeof(self->data.UserID) );
        CancelOffsetSettingField_UserID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( CancelOffsetSettingField_ExchangeID != NULL ) {
        if(CancelOffsetSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, CancelOffsetSettingField_ExchangeID, CancelOffsetSettingField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, CancelOffsetSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
        CancelOffsetSettingField_ExchangeID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( CancelOffsetSettingField_IPAddress != NULL ) {
        if(CancelOffsetSettingField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, CancelOffsetSettingField_IPAddress, CancelOffsetSettingField_IPAddress_len);        
        strncpy(self->data.IPAddress, CancelOffsetSettingField_IPAddress, sizeof(self->data.IPAddress) );
        CancelOffsetSettingField_IPAddress = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( CancelOffsetSettingField_MacAddress != NULL ) {
        if(CancelOffsetSettingField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, CancelOffsetSettingField_MacAddress, CancelOffsetSettingField_MacAddress_len);        
        strncpy(self->data.MacAddress, CancelOffsetSettingField_MacAddress, sizeof(self->data.MacAddress) );
        CancelOffsetSettingField_MacAddress = NULL;
    }
            
    ///交易所合约代码
    // TThostFtdcExchangeInstIDType char[81]
    if( CancelOffsetSettingField_ExchangeInstID != NULL ) {
        if(CancelOffsetSettingField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, CancelOffsetSettingField_ExchangeInstID, CancelOffsetSettingField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, CancelOffsetSettingField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        CancelOffsetSettingField_ExchangeInstID = NULL;
    }
            
    ///交易所期权系列号
    // TThostFtdcExchangeInstIDType char[81]
    if( CancelOffsetSettingField_ExchangeSerialNo != NULL ) {
        if(CancelOffsetSettingField_ExchangeSerialNo_len > (Py_ssize_t)sizeof(self->data.ExchangeSerialNo)) {
            PyErr_Format(PyExc_ValueError, "ExchangeSerialNo too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ExchangeSerialNo_len, (Py_ssize_t)sizeof(self->data.ExchangeSerialNo));
            return -1;
        }
        // memset(self->data.ExchangeSerialNo, 0, sizeof(self->data.ExchangeSerialNo));
        // memcpy(self->data.ExchangeSerialNo, CancelOffsetSettingField_ExchangeSerialNo, CancelOffsetSettingField_ExchangeSerialNo_len);        
        strncpy(self->data.ExchangeSerialNo, CancelOffsetSettingField_ExchangeSerialNo, sizeof(self->data.ExchangeSerialNo) );
        CancelOffsetSettingField_ExchangeSerialNo = NULL;
    }
            
    ///交易所产品代码
    // TThostFtdcProductIDType char[41]
    if( CancelOffsetSettingField_ExchangeProductID != NULL ) {
        if(CancelOffsetSettingField_ExchangeProductID_len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ExchangeProductID_len, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
            return -1;
        }
        // memset(self->data.ExchangeProductID, 0, sizeof(self->data.ExchangeProductID));
        // memcpy(self->data.ExchangeProductID, CancelOffsetSettingField_ExchangeProductID, CancelOffsetSettingField_ExchangeProductID_len);        
        strncpy(self->data.ExchangeProductID, CancelOffsetSettingField_ExchangeProductID, sizeof(self->data.ExchangeProductID) );
        CancelOffsetSettingField_ExchangeProductID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( CancelOffsetSettingField_TraderID != NULL ) {
        if(CancelOffsetSettingField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, CancelOffsetSettingField_TraderID, CancelOffsetSettingField_TraderID_len);        
        strncpy(self->data.TraderID, CancelOffsetSettingField_TraderID, sizeof(self->data.TraderID) );
        CancelOffsetSettingField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = CancelOffsetSettingField_InstallID;
        
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( CancelOffsetSettingField_ParticipantID != NULL ) {
        if(CancelOffsetSettingField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, CancelOffsetSettingField_ParticipantID, CancelOffsetSettingField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, CancelOffsetSettingField_ParticipantID, sizeof(self->data.ParticipantID) );
        CancelOffsetSettingField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( CancelOffsetSettingField_ClientID != NULL ) {
        if(CancelOffsetSettingField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, CancelOffsetSettingField_ClientID, CancelOffsetSettingField_ClientID_len);        
        strncpy(self->data.ClientID, CancelOffsetSettingField_ClientID, sizeof(self->data.ClientID) );
        CancelOffsetSettingField_ClientID = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = CancelOffsetSettingField_OrderActionStatus;
            
    ///状态信息
    // TThostFtdcErrorMsgType char[81]
    if( CancelOffsetSettingField_StatusMsg != NULL ) {
        if(CancelOffsetSettingField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
            return -1;
        }
        // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
        // memcpy(self->data.StatusMsg, CancelOffsetSettingField_StatusMsg, CancelOffsetSettingField_StatusMsg_len);        
        strncpy(self->data.StatusMsg, CancelOffsetSettingField_StatusMsg, sizeof(self->data.StatusMsg) );
        CancelOffsetSettingField_StatusMsg = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( CancelOffsetSettingField_ActionLocalID != NULL ) {
        if(CancelOffsetSettingField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, CancelOffsetSettingField_ActionLocalID, CancelOffsetSettingField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, CancelOffsetSettingField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        CancelOffsetSettingField_ActionLocalID = NULL;
    }
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( CancelOffsetSettingField_ActionDate != NULL ) {
        if(CancelOffsetSettingField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, CancelOffsetSettingField_ActionDate, CancelOffsetSettingField_ActionDate_len);        
        strncpy(self->data.ActionDate, CancelOffsetSettingField_ActionDate, sizeof(self->data.ActionDate) );
        CancelOffsetSettingField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( CancelOffsetSettingField_ActionTime != NULL ) {
        if(CancelOffsetSettingField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", CancelOffsetSettingField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, CancelOffsetSettingField_ActionTime, CancelOffsetSettingField_ActionTime_len);        
        strncpy(self->data.ActionTime, CancelOffsetSettingField_ActionTime, sizeof(self->data.ActionTime) );
        CancelOffsetSettingField_ActionTime = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcCancelOffsetSettingField_dealloc(PyCThostFtdcCancelOffsetSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_repr(PyCThostFtdcCancelOffsetSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"UnderlyingInstrID", self->data.UnderlyingInstrID//, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"OffsetType", self->data.OffsetType 
        ,"Volume", self->data.Volume 
        ,"IsOffset", self->data.IsOffset 
        ,"RequestID", self->data.RequestID 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"ExchangeSerialNo", self->data.ExchangeSerialNo//, (Py_ssize_t)sizeof(self->data.ExchangeSerialNo) 
        ,"ExchangeProductID", self->data.ExchangeProductID//, (Py_ssize_t)sizeof(self->data.ExchangeProductID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"StatusMsg", self->data.StatusMsg//, (Py_ssize_t)sizeof(self->data.StatusMsg) 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCancelOffsetSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_BrokerID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcCancelOffsetSettingField_set_BrokerID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_InvestorID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcCancelOffsetSettingField_set_InvestorID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_InstrumentID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcCancelOffsetSettingField_set_InstrumentID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///标的期货合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_UnderlyingInstrID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UnderlyingInstrID, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
    return PyBytes_FromString(self->data.UnderlyingInstrID);
}

///标的期货合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcCancelOffsetSettingField_set_UnderlyingInstrID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
        PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.UnderlyingInstrID, 0, sizeof(self->data.UnderlyingInstrID));
    // memcpy(self->data.UnderlyingInstrID, buf, len);
    strncpy(self->data.UnderlyingInstrID, buf, sizeof(self->data.UnderlyingInstrID));
    return 0;
}
            
///产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ProductID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcCancelOffsetSettingField_set_ProductID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///对冲类型
// TThostFtdcOffsetTypeType char
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_OffsetType(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

///对冲类型
// TThostFtdcOffsetTypeType char
static int PyCThostFtdcCancelOffsetSettingField_set_OffsetType(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetType = *buf;
    return 0;
}
            
///申请对冲的合约数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_Volume(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///申请对冲的合约数量
// TThostFtdcVolumeType int
static int PyCThostFtdcCancelOffsetSettingField_set_Volume(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the Volume value out of range for C int");
        return -1;
    }
    self->data.Volume = (int)buf;
    return 0;
}
        
///是否对冲
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_IsOffset(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsOffset);
#else
    return PyInt_FromLong(self->data.IsOffset);
#endif
}

///是否对冲
// TThostFtdcBoolType int
static int PyCThostFtdcCancelOffsetSettingField_set_IsOffset(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the IsOffset value out of range for C int");
        return -1;
    }
    self->data.IsOffset = (int)buf;
    return 0;
}
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_RequestID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcCancelOffsetSettingField_set_RequestID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the RequestID value out of range for C int");
        return -1;
    }
    self->data.RequestID = (int)buf;
    return 0;
}
        
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_UserID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcCancelOffsetSettingField_set_UserID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ExchangeID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcCancelOffsetSettingField_set_ExchangeID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_IPAddress(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcCancelOffsetSettingField_set_IPAddress(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_MacAddress(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcCancelOffsetSettingField_set_MacAddress(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            
///交易所合约代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ExchangeInstID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///交易所合约代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcCancelOffsetSettingField_set_ExchangeInstID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///交易所期权系列号
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ExchangeSerialNo(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeSerialNo, (Py_ssize_t)sizeof(self->data.ExchangeSerialNo));
    return PyBytes_FromString(self->data.ExchangeSerialNo);
}

///交易所期权系列号
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcCancelOffsetSettingField_set_ExchangeSerialNo(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeSerialNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeSerialNo)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeSerialNo must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeSerialNo, 0, sizeof(self->data.ExchangeSerialNo));
    // memcpy(self->data.ExchangeSerialNo, buf, len);
    strncpy(self->data.ExchangeSerialNo, buf, sizeof(self->data.ExchangeSerialNo));
    return 0;
}
            
///交易所产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ExchangeProductID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeProductID, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
    return PyBytes_FromString(self->data.ExchangeProductID);
}

///交易所产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcCancelOffsetSettingField_set_ExchangeProductID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ExchangeProductID, 0, sizeof(self->data.ExchangeProductID));
    // memcpy(self->data.ExchangeProductID, buf, len);
    strncpy(self->data.ExchangeProductID, buf, sizeof(self->data.ExchangeProductID));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_TraderID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcCancelOffsetSettingField_set_TraderID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
    // memcpy(self->data.TraderID, buf, len);
    strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
    return 0;
}
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_InstallID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcCancelOffsetSettingField_set_InstallID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the InstallID value out of range for C int");
        return -1;
    }
    self->data.InstallID = (int)buf;
    return 0;
}
        
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ParticipantID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcCancelOffsetSettingField_set_ParticipantID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
    // memcpy(self->data.ParticipantID, buf, len);
    strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
    return 0;
}
            
///客户代码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ClientID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcCancelOffsetSettingField_set_ClientID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///报单操作状态
// TThostFtdcOrderActionStatusType char
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_OrderActionStatus(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcCancelOffsetSettingField_set_OrderActionStatus(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    self->data.OrderActionStatus = *buf;
    return 0;
}
            
///状态信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_StatusMsg(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StatusMsg, (Py_ssize_t)sizeof(self->data.StatusMsg));
    return PyBytes_FromString(self->data.StatusMsg);
}

///状态信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcCancelOffsetSettingField_set_StatusMsg(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.StatusMsg, 0, sizeof(self->data.StatusMsg));
    // memcpy(self->data.StatusMsg, buf, len);
    strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
    return 0;
}
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ActionLocalID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcCancelOffsetSettingField_set_ActionLocalID(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
    // memcpy(self->data.ActionLocalID, buf, len);
    strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
    return 0;
}
            
///操作日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ActionDate(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcCancelOffsetSettingField_set_ActionDate(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
    // memcpy(self->data.ActionDate, buf, len);
    strncpy(self->data.ActionDate, buf, sizeof(self->data.ActionDate));
    return 0;
}
            
///操作时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ActionTime(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcCancelOffsetSettingField_set_ActionTime(PyCThostFtdcCancelOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
    // memcpy(self->data.ActionTime, buf, len);
    strncpy(self->data.ActionTime, buf, sizeof(self->data.ActionTime));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcCancelOffsetSettingField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcCancelOffsetSettingField_get_BrokerID, (setter)PyCThostFtdcCancelOffsetSettingField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcCancelOffsetSettingField_get_InvestorID, (setter)PyCThostFtdcCancelOffsetSettingField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcCancelOffsetSettingField_get_InstrumentID, (setter)PyCThostFtdcCancelOffsetSettingField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///标的期货合约代码 
    {(char *)"UnderlyingInstrID", (getter)PyCThostFtdcCancelOffsetSettingField_get_UnderlyingInstrID, (setter)PyCThostFtdcCancelOffsetSettingField_set_UnderlyingInstrID, (char *)"UnderlyingInstrID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ProductID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ProductID, (char *)"ProductID", NULL},
    ///对冲类型 
    {(char *)"OffsetType", (getter)PyCThostFtdcCancelOffsetSettingField_get_OffsetType, (setter)PyCThostFtdcCancelOffsetSettingField_set_OffsetType, (char *)"OffsetType", NULL},
    ///申请对冲的合约数量 
    {(char *)"Volume", (getter)PyCThostFtdcCancelOffsetSettingField_get_Volume, (setter)PyCThostFtdcCancelOffsetSettingField_set_Volume, (char *)"Volume", NULL},
    ///是否对冲 
    {(char *)"IsOffset", (getter)PyCThostFtdcCancelOffsetSettingField_get_IsOffset, (setter)PyCThostFtdcCancelOffsetSettingField_set_IsOffset, (char *)"IsOffset", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcCancelOffsetSettingField_get_RequestID, (setter)PyCThostFtdcCancelOffsetSettingField_set_RequestID, (char *)"RequestID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcCancelOffsetSettingField_get_UserID, (setter)PyCThostFtdcCancelOffsetSettingField_set_UserID, (char *)"UserID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ExchangeID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcCancelOffsetSettingField_get_IPAddress, (setter)PyCThostFtdcCancelOffsetSettingField_set_IPAddress, (char *)"IPAddress", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcCancelOffsetSettingField_get_MacAddress, (setter)PyCThostFtdcCancelOffsetSettingField_set_MacAddress, (char *)"MacAddress", NULL},
    ///交易所合约代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ExchangeInstID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///交易所期权系列号 
    {(char *)"ExchangeSerialNo", (getter)PyCThostFtdcCancelOffsetSettingField_get_ExchangeSerialNo, (setter)PyCThostFtdcCancelOffsetSettingField_set_ExchangeSerialNo, (char *)"ExchangeSerialNo", NULL},
    ///交易所产品代码 
    {(char *)"ExchangeProductID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ExchangeProductID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ExchangeProductID, (char *)"ExchangeProductID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcCancelOffsetSettingField_get_TraderID, (setter)PyCThostFtdcCancelOffsetSettingField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcCancelOffsetSettingField_get_InstallID, (setter)PyCThostFtdcCancelOffsetSettingField_set_InstallID, (char *)"InstallID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ParticipantID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ClientID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ClientID, (char *)"ClientID", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcCancelOffsetSettingField_get_OrderActionStatus, (setter)PyCThostFtdcCancelOffsetSettingField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///状态信息 
    {(char *)"StatusMsg", (getter)PyCThostFtdcCancelOffsetSettingField_get_StatusMsg, (setter)PyCThostFtdcCancelOffsetSettingField_set_StatusMsg, (char *)"StatusMsg", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ActionLocalID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcCancelOffsetSettingField_get_ActionDate, (setter)PyCThostFtdcCancelOffsetSettingField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcCancelOffsetSettingField_get_ActionTime, (setter)PyCThostFtdcCancelOffsetSettingField_set_ActionTime, (char *)"ActionTime", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCancelOffsetSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCancelOffsetSettingField",	/* tp_name */
	sizeof(PyCThostFtdcCancelOffsetSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCancelOffsetSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCancelOffsetSettingField_repr,   /* tp_repr */
	0,                          /* tp_as_number */
	0,                          /* tp_as_sequence */
	0,                          /* tp_as_mapping */
	0,                          /* tp_hash  */
	0,                          /* tp_call */
	0,                          /* tp_str */
	0,                          /* tp_getattro */
	0,                          /* tp_setattro */
	0,                          /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT,         /* tp_flags */
	"CThostFtdcCancelOffsetSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCancelOffsetSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCancelOffsetSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCancelOffsetSettingField_new,       /* tp_new */
};

int PyCThostFtdcCancelOffsetSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCancelOffsetSettingField  */
	if (PyType_Ready(&PyCThostFtdcCancelOffsetSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCancelOffsetSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCancelOffsetSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCancelOffsetSettingField", (PyObject *)&PyCThostFtdcCancelOffsetSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCancelOffsetSettingField to module");
        Py_DECREF(&PyCThostFtdcCancelOffsetSettingFieldType);
		return -1;
    }

    return 0;
}
