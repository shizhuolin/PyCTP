
#include "PyCThostFtdcExchangeForQuoteField.h"

///交易所询价信息

static PyObject *PyCThostFtdcExchangeForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeForQuoteField *self = (PyCThostFtdcExchangeForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeForQuoteField_init(PyCThostFtdcExchangeForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ForQuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "InsertDate", "InsertTime", "ForQuoteStatus", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress",  NULL};


    ///本地询价编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeForQuoteField_ForQuoteLocalID = NULL;
    Py_ssize_t ExchangeForQuoteField_ForQuoteLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeForQuoteField_ExchangeID = NULL;
    Py_ssize_t ExchangeForQuoteField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeForQuoteField_ParticipantID = NULL;
    Py_ssize_t ExchangeForQuoteField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeForQuoteField_ClientID = NULL;
    Py_ssize_t ExchangeForQuoteField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeForQuoteField_reserve1 = NULL;
    Py_ssize_t ExchangeForQuoteField_reserve1_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeForQuoteField_TraderID = NULL;
    Py_ssize_t ExchangeForQuoteField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeForQuoteField_InstallID = 0;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *ExchangeForQuoteField_InsertDate = NULL;
    Py_ssize_t ExchangeForQuoteField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeForQuoteField_InsertTime = NULL;
    Py_ssize_t ExchangeForQuoteField_InsertTime_len = 0;
            
    ///询价状态
    // TThostFtdcForQuoteStatusType char
    char ExchangeForQuoteField_ForQuoteStatus = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeForQuoteField_reserve2 = NULL;
    Py_ssize_t ExchangeForQuoteField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeForQuoteField_MacAddress = NULL;
    Py_ssize_t ExchangeForQuoteField_MacAddress_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeForQuoteField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeForQuoteField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeForQuoteField_IPAddress = NULL;
    Py_ssize_t ExchangeForQuoteField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#iy#y#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#is#s#cs#s#s#s#", (char **)kwlist
#endif

        , &ExchangeForQuoteField_ForQuoteLocalID, &ExchangeForQuoteField_ForQuoteLocalID_len 
        , &ExchangeForQuoteField_ExchangeID, &ExchangeForQuoteField_ExchangeID_len 
        , &ExchangeForQuoteField_ParticipantID, &ExchangeForQuoteField_ParticipantID_len 
        , &ExchangeForQuoteField_ClientID, &ExchangeForQuoteField_ClientID_len 
        , &ExchangeForQuoteField_reserve1, &ExchangeForQuoteField_reserve1_len 
        , &ExchangeForQuoteField_TraderID, &ExchangeForQuoteField_TraderID_len 
        , &ExchangeForQuoteField_InstallID 
        , &ExchangeForQuoteField_InsertDate, &ExchangeForQuoteField_InsertDate_len 
        , &ExchangeForQuoteField_InsertTime, &ExchangeForQuoteField_InsertTime_len 
        , &ExchangeForQuoteField_ForQuoteStatus 
        , &ExchangeForQuoteField_reserve2, &ExchangeForQuoteField_reserve2_len 
        , &ExchangeForQuoteField_MacAddress, &ExchangeForQuoteField_MacAddress_len 
        , &ExchangeForQuoteField_ExchangeInstID, &ExchangeForQuoteField_ExchangeInstID_len 
        , &ExchangeForQuoteField_IPAddress, &ExchangeForQuoteField_IPAddress_len 


    )) {
        return -1;
    }


    ///本地询价编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeForQuoteField_ForQuoteLocalID != NULL ) {
        if(ExchangeForQuoteField_ForQuoteLocalID_len > (Py_ssize_t)sizeof(self->data.ForQuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteLocalID too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_ForQuoteLocalID_len, (Py_ssize_t)sizeof(self->data.ForQuoteLocalID));
            return -1;
        }
        // memset(self->data.ForQuoteLocalID, 0, sizeof(self->data.ForQuoteLocalID));
        // memcpy(self->data.ForQuoteLocalID, ExchangeForQuoteField_ForQuoteLocalID, ExchangeForQuoteField_ForQuoteLocalID_len);        
        strncpy(self->data.ForQuoteLocalID, ExchangeForQuoteField_ForQuoteLocalID, sizeof(self->data.ForQuoteLocalID) );
        ExchangeForQuoteField_ForQuoteLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeForQuoteField_ExchangeID != NULL ) {
        if(ExchangeForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeForQuoteField_ExchangeID, ExchangeForQuoteField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeForQuoteField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeForQuoteField_ParticipantID != NULL ) {
        if(ExchangeForQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeForQuoteField_ParticipantID, ExchangeForQuoteField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeForQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeForQuoteField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeForQuoteField_ClientID != NULL ) {
        if(ExchangeForQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeForQuoteField_ClientID, ExchangeForQuoteField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeForQuoteField_ClientID, sizeof(self->data.ClientID) );
        ExchangeForQuoteField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeForQuoteField_reserve1 != NULL ) {
        if(ExchangeForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeForQuoteField_reserve1, ExchangeForQuoteField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeForQuoteField_reserve1, sizeof(self->data.reserve1) );
        ExchangeForQuoteField_reserve1 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeForQuoteField_TraderID != NULL ) {
        if(ExchangeForQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeForQuoteField_TraderID, ExchangeForQuoteField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeForQuoteField_TraderID, sizeof(self->data.TraderID) );
        ExchangeForQuoteField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeForQuoteField_InstallID;
        
    ///报单日期
    // TThostFtdcDateType char[9]
    if( ExchangeForQuoteField_InsertDate != NULL ) {
        if(ExchangeForQuoteField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, ExchangeForQuoteField_InsertDate, ExchangeForQuoteField_InsertDate_len);        
        strncpy(self->data.InsertDate, ExchangeForQuoteField_InsertDate, sizeof(self->data.InsertDate) );
        ExchangeForQuoteField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( ExchangeForQuoteField_InsertTime != NULL ) {
        if(ExchangeForQuoteField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, ExchangeForQuoteField_InsertTime, ExchangeForQuoteField_InsertTime_len);        
        strncpy(self->data.InsertTime, ExchangeForQuoteField_InsertTime, sizeof(self->data.InsertTime) );
        ExchangeForQuoteField_InsertTime = NULL;
    }
            
    ///询价状态
    // TThostFtdcForQuoteStatusType char
    self->data.ForQuoteStatus = ExchangeForQuoteField_ForQuoteStatus;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeForQuoteField_reserve2 != NULL ) {
        if(ExchangeForQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExchangeForQuoteField_reserve2, ExchangeForQuoteField_reserve2_len);        
        strncpy(self->data.reserve2, ExchangeForQuoteField_reserve2, sizeof(self->data.reserve2) );
        ExchangeForQuoteField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeForQuoteField_MacAddress != NULL ) {
        if(ExchangeForQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeForQuoteField_MacAddress, ExchangeForQuoteField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeForQuoteField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeForQuoteField_MacAddress = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeForQuoteField_ExchangeInstID != NULL ) {
        if(ExchangeForQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeForQuoteField_ExchangeInstID, ExchangeForQuoteField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeForQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeForQuoteField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeForQuoteField_IPAddress != NULL ) {
        if(ExchangeForQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeForQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeForQuoteField_IPAddress, ExchangeForQuoteField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeForQuoteField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeForQuoteField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeForQuoteField_dealloc(PyCThostFtdcExchangeForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_repr(PyCThostFtdcExchangeForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

        ,"ForQuoteLocalID", self->data.ForQuoteLocalID//, (Py_ssize_t)sizeof(self->data.ForQuoteLocalID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"InsertDate", self->data.InsertDate//, (Py_ssize_t)sizeof(self->data.InsertDate) 
        ,"InsertTime", self->data.InsertTime//, (Py_ssize_t)sizeof(self->data.InsertTime) 
        ,"ForQuoteStatus", self->data.ForQuoteStatus 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///本地询价编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_ForQuoteLocalID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteLocalID, (Py_ssize_t)sizeof(self->data.ForQuoteLocalID));
    return PyBytes_FromString(self->data.ForQuoteLocalID);
}

///本地询价编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeForQuoteField_set_ForQuoteLocalID(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ForQuoteLocalID, 0, sizeof(self->data.ForQuoteLocalID));
    // memcpy(self->data.ForQuoteLocalID, buf, len);
    strncpy(self->data.ForQuoteLocalID, buf, sizeof(self->data.ForQuoteLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_ExchangeID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeForQuoteField_set_ExchangeID(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_ParticipantID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeForQuoteField_set_ParticipantID(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeForQuoteField_get_ClientID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeForQuoteField_set_ClientID(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_reserve1(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeForQuoteField_set_reserve1(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_TraderID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeForQuoteField_set_TraderID(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeForQuoteField_get_InstallID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeForQuoteField_set_InstallID(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
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
        
///报单日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_InsertDate(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeForQuoteField_set_InsertDate(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
    // memcpy(self->data.InsertDate, buf, len);
    strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
    return 0;
}
            
///插入时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_InsertTime(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeForQuoteField_set_InsertTime(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
    // memcpy(self->data.InsertTime, buf, len);
    strncpy(self->data.InsertTime, buf, sizeof(self->data.InsertTime));
    return 0;
}
            
///询价状态
// TThostFtdcForQuoteStatusType char
static PyObject *PyCThostFtdcExchangeForQuoteField_get_ForQuoteStatus(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ForQuoteStatus), 1);
}

///询价状态
// TThostFtdcForQuoteStatusType char
static int PyCThostFtdcExchangeForQuoteField_set_ForQuoteStatus(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteStatus)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteStatus must be equal 1 bytes");
        return -1;
    }
    self->data.ForQuoteStatus = *buf;
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_reserve2(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeForQuoteField_set_reserve2(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_MacAddress(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeForQuoteField_set_MacAddress(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_ExchangeInstID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeForQuoteField_set_ExchangeInstID(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcExchangeForQuoteField_get_IPAddress(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeForQuoteField_set_IPAddress(PyCThostFtdcExchangeForQuoteField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeForQuoteField_getset[] = {
    ///本地询价编号 
    {(char *)"ForQuoteLocalID", (getter)PyCThostFtdcExchangeForQuoteField_get_ForQuoteLocalID, (setter)PyCThostFtdcExchangeForQuoteField_set_ForQuoteLocalID, (char *)"ForQuoteLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeForQuoteField_get_ExchangeID, (setter)PyCThostFtdcExchangeForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeForQuoteField_get_ParticipantID, (setter)PyCThostFtdcExchangeForQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeForQuoteField_get_ClientID, (setter)PyCThostFtdcExchangeForQuoteField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeForQuoteField_get_reserve1, (setter)PyCThostFtdcExchangeForQuoteField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeForQuoteField_get_TraderID, (setter)PyCThostFtdcExchangeForQuoteField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeForQuoteField_get_InstallID, (setter)PyCThostFtdcExchangeForQuoteField_set_InstallID, (char *)"InstallID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcExchangeForQuoteField_get_InsertDate, (setter)PyCThostFtdcExchangeForQuoteField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcExchangeForQuoteField_get_InsertTime, (setter)PyCThostFtdcExchangeForQuoteField_set_InsertTime, (char *)"InsertTime", NULL},
    ///询价状态 
    {(char *)"ForQuoteStatus", (getter)PyCThostFtdcExchangeForQuoteField_get_ForQuoteStatus, (setter)PyCThostFtdcExchangeForQuoteField_set_ForQuoteStatus, (char *)"ForQuoteStatus", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExchangeForQuoteField_get_reserve2, (setter)PyCThostFtdcExchangeForQuoteField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeForQuoteField_get_MacAddress, (setter)PyCThostFtdcExchangeForQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeForQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeForQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeForQuoteField_get_IPAddress, (setter)PyCThostFtdcExchangeForQuoteField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcExchangeForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcExchangeForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeForQuoteField", (PyObject *)&PyCThostFtdcExchangeForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeForQuoteField to module");
        Py_DECREF(&PyCThostFtdcExchangeForQuoteFieldType);
		return -1;
    }

    return 0;
}
