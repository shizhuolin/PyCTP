
#include "PyCThostFtdcBulletinField.h"

///交易所公告

static int PyCThostFtdcBulletinFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "TradingDay", "BulletinID", "SequenceNo", "NewsType", "NewsUrgency", "SendTime", "Abstract", "ComeFrom", "Content", "URLLink", "MarketID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcBulletinField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcBulletinField_ExchangeID_length = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcBulletinField_TradingDay = NULL;
    Py_ssize_t CThostFtdcBulletinField_TradingDay_length = 0;

    /// 公告编号
    /// typedef int TThostFtdcBulletinIDType
    int CThostFtdcBulletinField_BulletinID = 0;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcBulletinField_SequenceNo = 0;

    /// 公告类型
    /// typedef char TThostFtdcNewsTypeType[3]
    char *CThostFtdcBulletinField_NewsType = NULL;
    Py_ssize_t CThostFtdcBulletinField_NewsType_length = 0;

    /// 紧急程度
    /// typedef char TThostFtdcNewsUrgencyType
    char CThostFtdcBulletinField_NewsUrgency = 0;

    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcBulletinField_SendTime = NULL;
    Py_ssize_t CThostFtdcBulletinField_SendTime_length = 0;

    /// 消息摘要
    /// typedef char TThostFtdcAbstractType[81]
    char *CThostFtdcBulletinField_Abstract = NULL;
    Py_ssize_t CThostFtdcBulletinField_Abstract_length = 0;

    /// 消息来源
    /// typedef char TThostFtdcComeFromType[21]
    char *CThostFtdcBulletinField_ComeFrom = NULL;
    Py_ssize_t CThostFtdcBulletinField_ComeFrom_length = 0;

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    char *CThostFtdcBulletinField_Content = NULL;
    Py_ssize_t CThostFtdcBulletinField_Content_length = 0;

    /// WEB地址
    /// typedef char TThostFtdcURLLinkType[201]
    char *CThostFtdcBulletinField_URLLink = NULL;
    Py_ssize_t CThostFtdcBulletinField_URLLink_length = 0;

    /// 市场代码
    /// typedef char TThostFtdcMarketIDType[31]
    char *CThostFtdcBulletinField_MarketID = NULL;
    Py_ssize_t CThostFtdcBulletinField_MarketID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiy#cy#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcBulletinField_ExchangeID, &CThostFtdcBulletinField_ExchangeID_length
        , &CThostFtdcBulletinField_TradingDay, &CThostFtdcBulletinField_TradingDay_length
        , &CThostFtdcBulletinField_BulletinID
        , &CThostFtdcBulletinField_SequenceNo
        , &CThostFtdcBulletinField_NewsType, &CThostFtdcBulletinField_NewsType_length
        , &CThostFtdcBulletinField_NewsUrgency
        , &CThostFtdcBulletinField_SendTime, &CThostFtdcBulletinField_SendTime_length
        , &CThostFtdcBulletinField_Abstract, &CThostFtdcBulletinField_Abstract_length
        , &CThostFtdcBulletinField_ComeFrom, &CThostFtdcBulletinField_ComeFrom_length
        , &CThostFtdcBulletinField_Content, &CThostFtdcBulletinField_Content_length
        , &CThostFtdcBulletinField_URLLink, &CThostFtdcBulletinField_URLLink_length
        , &CThostFtdcBulletinField_MarketID, &CThostFtdcBulletinField_MarketID_length
    )) {
        return -1;
    }

    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcBulletinField_ExchangeID != NULL ) {
        if(CThostFtdcBulletinField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcBulletinField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcBulletinField_ExchangeID, CThostFtdcBulletinField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcBulletinField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcBulletinField_ExchangeID = NULL;
    }

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcBulletinField_TradingDay != NULL ) {
        if(CThostFtdcBulletinField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcBulletinField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcBulletinField_TradingDay, CThostFtdcBulletinField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcBulletinField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcBulletinField_TradingDay = NULL;
    }

    /// 公告编号
    /// typedef int TThostFtdcBulletinIDType
    data->BulletinID = CThostFtdcBulletinField_BulletinID;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcBulletinField_SequenceNo;

    /// 公告类型
    /// typedef char TThostFtdcNewsTypeType[3]
    if( CThostFtdcBulletinField_NewsType != NULL ) {
        if(CThostFtdcBulletinField_NewsType_length >= (Py_ssize_t)sizeof(data->NewsType)) {
            PyErr_Format(PyExc_ValueError, "NewsType too long: length=%zd (max allowed is 2)", CThostFtdcBulletinField_NewsType_length);
            return -1;
        }
        // memset(data->NewsType, 0, sizeof(data->NewsType));
        // memcpy(data->NewsType, CThostFtdcBulletinField_NewsType, CThostFtdcBulletinField_NewsType_length);
        strncpy(data->NewsType, CThostFtdcBulletinField_NewsType, sizeof(data->NewsType));
        CThostFtdcBulletinField_NewsType = NULL;
    }

    /// 紧急程度
    /// typedef char TThostFtdcNewsUrgencyType
    data->NewsUrgency = CThostFtdcBulletinField_NewsUrgency;

    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcBulletinField_SendTime != NULL ) {
        if(CThostFtdcBulletinField_SendTime_length >= (Py_ssize_t)sizeof(data->SendTime)) {
            PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is 8)", CThostFtdcBulletinField_SendTime_length);
            return -1;
        }
        // memset(data->SendTime, 0, sizeof(data->SendTime));
        // memcpy(data->SendTime, CThostFtdcBulletinField_SendTime, CThostFtdcBulletinField_SendTime_length);
        strncpy(data->SendTime, CThostFtdcBulletinField_SendTime, sizeof(data->SendTime));
        CThostFtdcBulletinField_SendTime = NULL;
    }

    /// 消息摘要
    /// typedef char TThostFtdcAbstractType[81]
    if( CThostFtdcBulletinField_Abstract != NULL ) {
        if(CThostFtdcBulletinField_Abstract_length >= (Py_ssize_t)sizeof(data->Abstract)) {
            PyErr_Format(PyExc_ValueError, "Abstract too long: length=%zd (max allowed is 80)", CThostFtdcBulletinField_Abstract_length);
            return -1;
        }
        // memset(data->Abstract, 0, sizeof(data->Abstract));
        // memcpy(data->Abstract, CThostFtdcBulletinField_Abstract, CThostFtdcBulletinField_Abstract_length);
        strncpy(data->Abstract, CThostFtdcBulletinField_Abstract, sizeof(data->Abstract));
        CThostFtdcBulletinField_Abstract = NULL;
    }

    /// 消息来源
    /// typedef char TThostFtdcComeFromType[21]
    if( CThostFtdcBulletinField_ComeFrom != NULL ) {
        if(CThostFtdcBulletinField_ComeFrom_length >= (Py_ssize_t)sizeof(data->ComeFrom)) {
            PyErr_Format(PyExc_ValueError, "ComeFrom too long: length=%zd (max allowed is 20)", CThostFtdcBulletinField_ComeFrom_length);
            return -1;
        }
        // memset(data->ComeFrom, 0, sizeof(data->ComeFrom));
        // memcpy(data->ComeFrom, CThostFtdcBulletinField_ComeFrom, CThostFtdcBulletinField_ComeFrom_length);
        strncpy(data->ComeFrom, CThostFtdcBulletinField_ComeFrom, sizeof(data->ComeFrom));
        CThostFtdcBulletinField_ComeFrom = NULL;
    }

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    if( CThostFtdcBulletinField_Content != NULL ) {
        if(CThostFtdcBulletinField_Content_length >= (Py_ssize_t)sizeof(data->Content)) {
            PyErr_Format(PyExc_ValueError, "Content too long: length=%zd (max allowed is 500)", CThostFtdcBulletinField_Content_length);
            return -1;
        }
        // memset(data->Content, 0, sizeof(data->Content));
        // memcpy(data->Content, CThostFtdcBulletinField_Content, CThostFtdcBulletinField_Content_length);
        strncpy(data->Content, CThostFtdcBulletinField_Content, sizeof(data->Content));
        CThostFtdcBulletinField_Content = NULL;
    }

    /// WEB地址
    /// typedef char TThostFtdcURLLinkType[201]
    if( CThostFtdcBulletinField_URLLink != NULL ) {
        if(CThostFtdcBulletinField_URLLink_length >= (Py_ssize_t)sizeof(data->URLLink)) {
            PyErr_Format(PyExc_ValueError, "URLLink too long: length=%zd (max allowed is 200)", CThostFtdcBulletinField_URLLink_length);
            return -1;
        }
        // memset(data->URLLink, 0, sizeof(data->URLLink));
        // memcpy(data->URLLink, CThostFtdcBulletinField_URLLink, CThostFtdcBulletinField_URLLink_length);
        strncpy(data->URLLink, CThostFtdcBulletinField_URLLink, sizeof(data->URLLink));
        CThostFtdcBulletinField_URLLink = NULL;
    }

    /// 市场代码
    /// typedef char TThostFtdcMarketIDType[31]
    if( CThostFtdcBulletinField_MarketID != NULL ) {
        if(CThostFtdcBulletinField_MarketID_length >= (Py_ssize_t)sizeof(data->MarketID)) {
            PyErr_Format(PyExc_ValueError, "MarketID too long: length=%zd (max allowed is 30)", CThostFtdcBulletinField_MarketID_length);
            return -1;
        }
        // memset(data->MarketID, 0, sizeof(data->MarketID));
        // memcpy(data->MarketID, CThostFtdcBulletinField_MarketID, CThostFtdcBulletinField_MarketID_length);
        strncpy(data->MarketID, CThostFtdcBulletinField_MarketID, sizeof(data->MarketID));
        CThostFtdcBulletinField_MarketID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBulletinFieldType_repr(PyObject *self) {

    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BulletinID", data->BulletinID
        , "SequenceNo", data->SequenceNo
        , "NewsType", data->NewsType//, (Py_ssize_t)sizeof(data->NewsType)
        , "NewsUrgency", data->NewsUrgency
        , "SendTime", data->SendTime//, (Py_ssize_t)sizeof(data->SendTime)
        , "Abstract", data->Abstract//, (Py_ssize_t)sizeof(data->Abstract)
        , "ComeFrom", data->ComeFrom//, (Py_ssize_t)sizeof(data->ComeFrom)
        , "Content", data->Content//, (Py_ssize_t)sizeof(data->Content)
        , "URLLink", data->URLLink//, (Py_ssize_t)sizeof(data->URLLink)
        , "MarketID", data->MarketID//, (Py_ssize_t)sizeof(data->MarketID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBulletinField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBulletinField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcBulletinFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcBulletinFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcBulletinFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcBulletinFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 公告类型
/// typedef char TThostFtdcNewsTypeType[3]
static PyObject *PyCThostFtdcBulletinFieldType_get_NewsType(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewsType, (Py_ssize_t)sizeof(data->NewsType));
    return PyBytes_FromString(data->NewsType);
}

static int PyCThostFtdcBulletinFieldType_set_NewsType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewsType Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::NewsType)) {
        PyErr_SetString(PyExc_ValueError, "NewsType must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->NewsType, 0, sizeof(data->NewsType));
    // memcpy(data->NewsType, buf, len);
    strncpy(data->NewsType, buf, sizeof(data->NewsType));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 紧急程度
/// typedef char TThostFtdcNewsUrgencyType
static PyObject *PyCThostFtdcBulletinFieldType_get_NewsUrgency(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->NewsUrgency), 1);
}

static int PyCThostFtdcBulletinFieldType_set_NewsUrgency(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewsUrgency Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBulletinField::NewsUrgency)) {
        PyErr_SetString(PyExc_ValueError, "NewsUrgency must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    data->NewsUrgency = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发送时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcBulletinFieldType_get_SendTime(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SendTime, (Py_ssize_t)sizeof(data->SendTime));
    return PyBytes_FromString(data->SendTime);
}

static int PyCThostFtdcBulletinFieldType_set_SendTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SendTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::SendTime)) {
        PyErr_SetString(PyExc_ValueError, "SendTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->SendTime, 0, sizeof(data->SendTime));
    // memcpy(data->SendTime, buf, len);
    strncpy(data->SendTime, buf, sizeof(data->SendTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 消息摘要
/// typedef char TThostFtdcAbstractType[81]
static PyObject *PyCThostFtdcBulletinFieldType_get_Abstract(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Abstract, (Py_ssize_t)sizeof(data->Abstract));
    return PyBytes_FromString(data->Abstract);
}

static int PyCThostFtdcBulletinFieldType_set_Abstract(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Abstract Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::Abstract)) {
        PyErr_SetString(PyExc_ValueError, "Abstract must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->Abstract, 0, sizeof(data->Abstract));
    // memcpy(data->Abstract, buf, len);
    strncpy(data->Abstract, buf, sizeof(data->Abstract));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 消息来源
/// typedef char TThostFtdcComeFromType[21]
static PyObject *PyCThostFtdcBulletinFieldType_get_ComeFrom(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ComeFrom, (Py_ssize_t)sizeof(data->ComeFrom));
    return PyBytes_FromString(data->ComeFrom);
}

static int PyCThostFtdcBulletinFieldType_set_ComeFrom(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ComeFrom Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::ComeFrom)) {
        PyErr_SetString(PyExc_ValueError, "ComeFrom must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->ComeFrom, 0, sizeof(data->ComeFrom));
    // memcpy(data->ComeFrom, buf, len);
    strncpy(data->ComeFrom, buf, sizeof(data->ComeFrom));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 消息正文
/// typedef char TThostFtdcContentType[501]
static PyObject *PyCThostFtdcBulletinFieldType_get_Content(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Content, (Py_ssize_t)sizeof(data->Content));
    return PyBytes_FromString(data->Content);
}

static int PyCThostFtdcBulletinFieldType_set_Content(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Content Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::Content)) {
        PyErr_SetString(PyExc_ValueError, "Content must be less than 500 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->Content, 0, sizeof(data->Content));
    // memcpy(data->Content, buf, len);
    strncpy(data->Content, buf, sizeof(data->Content));
    extra = NULL;
    data = NULL;
    return 0;
}

/// WEB地址
/// typedef char TThostFtdcURLLinkType[201]
static PyObject *PyCThostFtdcBulletinFieldType_get_URLLink(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->URLLink, (Py_ssize_t)sizeof(data->URLLink));
    return PyBytes_FromString(data->URLLink);
}

static int PyCThostFtdcBulletinFieldType_set_URLLink(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "URLLink Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::URLLink)) {
        PyErr_SetString(PyExc_ValueError, "URLLink must be less than 200 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->URLLink, 0, sizeof(data->URLLink));
    // memcpy(data->URLLink, buf, len);
    strncpy(data->URLLink, buf, sizeof(data->URLLink));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 市场代码
/// typedef char TThostFtdcMarketIDType[31]
static PyObject *PyCThostFtdcBulletinFieldType_get_MarketID(PyObject *self, void *closure) {
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MarketID, (Py_ssize_t)sizeof(data->MarketID));
    return PyBytes_FromString(data->MarketID);
}

static int PyCThostFtdcBulletinFieldType_set_MarketID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarketID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBulletinField::MarketID)) {
        PyErr_SetString(PyExc_ValueError, "MarketID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(self);
    CThostFtdcBulletinField *data = &(extra->data);
    // memset(data->MarketID, 0, sizeof(data->MarketID));
    // memcpy(data->MarketID, buf, len);
    strncpy(data->MarketID, buf, sizeof(data->MarketID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBulletinFieldType_members[] = {
    /// 公告编号
    /// typedef int TThostFtdcBulletinIDType
    {
        .name = "BulletinID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBulletinFieldData, data.BulletinID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("公告编号")
    },
    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBulletinFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序列号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBulletinFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcBulletinFieldType_get_ExchangeID,
    .set = PyCThostFtdcBulletinFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcBulletinFieldType_get_TradingDay,
    .set = PyCThostFtdcBulletinFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 公告类型
    /// typedef char TThostFtdcNewsTypeType[3]
    {
    .name = "NewsType",
    .get = PyCThostFtdcBulletinFieldType_get_NewsType,
    .set = PyCThostFtdcBulletinFieldType_set_NewsType,
    .doc = PyDoc_STR("公告类型"),
    },
    /// 紧急程度
    /// typedef char TThostFtdcNewsUrgencyType
    {
    .name = "NewsUrgency",
    .get = PyCThostFtdcBulletinFieldType_get_NewsUrgency,
    .set = PyCThostFtdcBulletinFieldType_set_NewsUrgency,
    .doc = PyDoc_STR("紧急程度"),
    },
    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SendTime",
    .get = PyCThostFtdcBulletinFieldType_get_SendTime,
    .set = PyCThostFtdcBulletinFieldType_set_SendTime,
    .doc = PyDoc_STR("发送时间"),
    },
    /// 消息摘要
    /// typedef char TThostFtdcAbstractType[81]
    {
    .name = "Abstract",
    .get = PyCThostFtdcBulletinFieldType_get_Abstract,
    .set = PyCThostFtdcBulletinFieldType_set_Abstract,
    .doc = PyDoc_STR("消息摘要"),
    },
    /// 消息来源
    /// typedef char TThostFtdcComeFromType[21]
    {
    .name = "ComeFrom",
    .get = PyCThostFtdcBulletinFieldType_get_ComeFrom,
    .set = PyCThostFtdcBulletinFieldType_set_ComeFrom,
    .doc = PyDoc_STR("消息来源"),
    },
    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    {
    .name = "Content",
    .get = PyCThostFtdcBulletinFieldType_get_Content,
    .set = PyCThostFtdcBulletinFieldType_set_Content,
    .doc = PyDoc_STR("消息正文"),
    },
    /// WEB地址
    /// typedef char TThostFtdcURLLinkType[201]
    {
    .name = "URLLink",
    .get = PyCThostFtdcBulletinFieldType_get_URLLink,
    .set = PyCThostFtdcBulletinFieldType_set_URLLink,
    .doc = PyDoc_STR("WEB地址"),
    },
    /// 市场代码
    /// typedef char TThostFtdcMarketIDType[31]
    {
    .name = "MarketID",
    .get = PyCThostFtdcBulletinFieldType_get_MarketID,
    .set = PyCThostFtdcBulletinFieldType_set_MarketID,
    .doc = PyDoc_STR("市场代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBulletinFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBulletinField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所公告")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBulletinFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBulletinFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBulletinFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBulletinFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBulletinFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBulletinFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所公告")},
    {Py_tp_members, PyCThostFtdcBulletinFieldType_members},
    {Py_tp_getset, PyCThostFtdcBulletinFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBulletinFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBulletinFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBulletinFieldType_spec = {
    .name = "PyCTP.CThostFtdcBulletinField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBulletinFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBulletinFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBulletinFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBulletinFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBulletinFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBulletinFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBulletinFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBulletinFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBulletinField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBulletinField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}