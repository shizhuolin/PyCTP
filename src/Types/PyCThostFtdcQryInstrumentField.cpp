
#include "PyCThostFtdcQryInstrumentField.h"

///查询合约

static int PyCThostFtdcQryInstrumentFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "ExchangeID", "reserve2", "reserve3", "InstrumentID", "ExchangeInstID", "ProductID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInstrumentField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInstrumentField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInstrumentField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcQryInstrumentField_reserve2 = NULL;
    Py_ssize_t CThostFtdcQryInstrumentField_reserve2_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInstrumentField_reserve3 = NULL;
    Py_ssize_t CThostFtdcQryInstrumentField_reserve3_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInstrumentField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcQryInstrumentField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentField_ExchangeInstID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInstrumentField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInstrumentField_reserve1, &CThostFtdcQryInstrumentField_reserve1_length
        , &CThostFtdcQryInstrumentField_ExchangeID, &CThostFtdcQryInstrumentField_ExchangeID_length
        , &CThostFtdcQryInstrumentField_reserve2, &CThostFtdcQryInstrumentField_reserve2_length
        , &CThostFtdcQryInstrumentField_reserve3, &CThostFtdcQryInstrumentField_reserve3_length
        , &CThostFtdcQryInstrumentField_InstrumentID, &CThostFtdcQryInstrumentField_InstrumentID_length
        , &CThostFtdcQryInstrumentField_ExchangeInstID, &CThostFtdcQryInstrumentField_ExchangeInstID_length
        , &CThostFtdcQryInstrumentField_ProductID, &CThostFtdcQryInstrumentField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInstrumentField_reserve1 != NULL ) {
        if(CThostFtdcQryInstrumentField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInstrumentField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInstrumentField_reserve1, CThostFtdcQryInstrumentField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInstrumentField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInstrumentField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInstrumentField_ExchangeID != NULL ) {
        if(CThostFtdcQryInstrumentField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInstrumentField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInstrumentField_ExchangeID, CThostFtdcQryInstrumentField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInstrumentField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInstrumentField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcQryInstrumentField_reserve2 != NULL ) {
        if(CThostFtdcQryInstrumentField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcQryInstrumentField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcQryInstrumentField_reserve2, CThostFtdcQryInstrumentField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcQryInstrumentField_reserve2, sizeof(data->reserve2));
        CThostFtdcQryInstrumentField_reserve2 = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInstrumentField_reserve3 != NULL ) {
        if(CThostFtdcQryInstrumentField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 30)", CThostFtdcQryInstrumentField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcQryInstrumentField_reserve3, CThostFtdcQryInstrumentField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcQryInstrumentField_reserve3, sizeof(data->reserve3));
        CThostFtdcQryInstrumentField_reserve3 = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInstrumentField_InstrumentID != NULL ) {
        if(CThostFtdcQryInstrumentField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryInstrumentField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryInstrumentField_InstrumentID, CThostFtdcQryInstrumentField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryInstrumentField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryInstrumentField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcQryInstrumentField_ExchangeInstID != NULL ) {
        if(CThostFtdcQryInstrumentField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcQryInstrumentField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcQryInstrumentField_ExchangeInstID, CThostFtdcQryInstrumentField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcQryInstrumentField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcQryInstrumentField_ExchangeInstID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInstrumentField_ProductID != NULL ) {
        if(CThostFtdcQryInstrumentField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcQryInstrumentField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryInstrumentField_ProductID, CThostFtdcQryInstrumentField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryInstrumentField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryInstrumentField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInstrumentFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "reserve3", data->reserve3//, (Py_ssize_t)sizeof(data->reserve3)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInstrumentFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInstrumentFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInstrumentFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInstrumentFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcQryInstrumentFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcQryInstrumentFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInstrumentFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcQryInstrumentFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInstrumentFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryInstrumentFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcQryInstrumentFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcQryInstrumentFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInstrumentFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryInstrumentFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(self);
    CThostFtdcQryInstrumentField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInstrumentFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInstrumentFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInstrumentFieldType_get_reserve1,
    .set = PyCThostFtdcQryInstrumentFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInstrumentFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInstrumentFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcQryInstrumentFieldType_get_reserve2,
    .set = PyCThostFtdcQryInstrumentFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve3",
    .get = PyCThostFtdcQryInstrumentFieldType_get_reserve3,
    .set = PyCThostFtdcQryInstrumentFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryInstrumentFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryInstrumentFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcQryInstrumentFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcQryInstrumentFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryInstrumentFieldType_get_ProductID,
    .set = PyCThostFtdcQryInstrumentFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInstrumentFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInstrumentField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询合约")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInstrumentFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInstrumentFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInstrumentFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInstrumentFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInstrumentFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInstrumentFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询合约")},
    {Py_tp_members, PyCThostFtdcQryInstrumentFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInstrumentFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInstrumentFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInstrumentFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInstrumentFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInstrumentField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInstrumentFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInstrumentFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInstrumentFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInstrumentFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInstrumentFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInstrumentFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}