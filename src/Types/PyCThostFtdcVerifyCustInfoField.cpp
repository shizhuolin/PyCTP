
#include "PyCThostFtdcVerifyCustInfoField.h"

///验证客户信息

static int PyCThostFtdcVerifyCustInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "LongCustomerName", NULL };


    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcVerifyCustInfoField_CustomerName = NULL;
    Py_ssize_t CThostFtdcVerifyCustInfoField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcVerifyCustInfoField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcVerifyCustInfoField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcVerifyCustInfoField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcVerifyCustInfoField_CustType = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcVerifyCustInfoField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcVerifyCustInfoField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#cy#", (char **)kwlist
        , &CThostFtdcVerifyCustInfoField_CustomerName, &CThostFtdcVerifyCustInfoField_CustomerName_length
        , &CThostFtdcVerifyCustInfoField_IdCardType
        , &CThostFtdcVerifyCustInfoField_IdentifiedCardNo, &CThostFtdcVerifyCustInfoField_IdentifiedCardNo_length
        , &CThostFtdcVerifyCustInfoField_CustType
        , &CThostFtdcVerifyCustInfoField_LongCustomerName, &CThostFtdcVerifyCustInfoField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);


    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcVerifyCustInfoField_CustomerName != NULL ) {
        if(CThostFtdcVerifyCustInfoField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcVerifyCustInfoField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcVerifyCustInfoField_CustomerName, CThostFtdcVerifyCustInfoField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcVerifyCustInfoField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcVerifyCustInfoField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcVerifyCustInfoField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcVerifyCustInfoField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcVerifyCustInfoField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcVerifyCustInfoField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcVerifyCustInfoField_IdentifiedCardNo, CThostFtdcVerifyCustInfoField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcVerifyCustInfoField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcVerifyCustInfoField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcVerifyCustInfoField_CustType;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcVerifyCustInfoField_LongCustomerName != NULL ) {
        if(CThostFtdcVerifyCustInfoField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcVerifyCustInfoField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcVerifyCustInfoField_LongCustomerName, CThostFtdcVerifyCustInfoField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcVerifyCustInfoField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcVerifyCustInfoField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcVerifyCustInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:c,s:y}"
        , "CustomerName", data->CustomerName//, (Py_ssize_t)sizeof(data->CustomerName)
        , "IdCardType", data->IdCardType
        , "IdentifiedCardNo", data->IdentifiedCardNo//, (Py_ssize_t)sizeof(data->IdentifiedCardNo)
        , "CustType", data->CustType
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyCustInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyCustInfoField repr");
        return NULL;
    }

    return repr;
}


/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcVerifyCustInfoFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcVerifyCustInfoFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyCustInfoField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcVerifyCustInfoFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcVerifyCustInfoFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcVerifyCustInfoField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcVerifyCustInfoFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcVerifyCustInfoFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyCustInfoField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcVerifyCustInfoFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcVerifyCustInfoFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcVerifyCustInfoField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcVerifyCustInfoFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcVerifyCustInfoFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyCustInfoField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyCustInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyCustInfoFieldData>(self);
    CThostFtdcVerifyCustInfoField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcVerifyCustInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcVerifyCustInfoFieldType_getsets[] = {
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcVerifyCustInfoFieldType_get_CustomerName,
    .set = PyCThostFtdcVerifyCustInfoFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcVerifyCustInfoFieldType_get_IdCardType,
    .set = PyCThostFtdcVerifyCustInfoFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcVerifyCustInfoFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcVerifyCustInfoFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcVerifyCustInfoFieldType_get_CustType,
    .set = PyCThostFtdcVerifyCustInfoFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcVerifyCustInfoFieldType_get_LongCustomerName,
    .set = PyCThostFtdcVerifyCustInfoFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcVerifyCustInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcVerifyCustInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("验证客户信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcVerifyCustInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcVerifyCustInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcVerifyCustInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcVerifyCustInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcVerifyCustInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcVerifyCustInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("验证客户信息")},
    {Py_tp_members, PyCThostFtdcVerifyCustInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcVerifyCustInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcVerifyCustInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcVerifyCustInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcVerifyCustInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcVerifyCustInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcVerifyCustInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcVerifyCustInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcVerifyCustInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcVerifyCustInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcVerifyCustInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcVerifyCustInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcVerifyCustInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcVerifyCustInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcVerifyCustInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyCustInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}