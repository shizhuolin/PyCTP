
#include "PyCThostFtdcTraderField.h"

///交易所交易员

static PyObject *PyCThostFtdcTraderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTraderField *self = (PyCThostFtdcTraderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTraderField_init(PyCThostFtdcTraderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TraderID", "ParticipantID", "Password", "InstallCount", "BrokerID", "OrderCancelAlg", "TradeInstallCount", "MDInstallCount",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *TraderField_ExchangeID = NULL;
    Py_ssize_t TraderField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *TraderField_TraderID = NULL;
    Py_ssize_t TraderField_TraderID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *TraderField_ParticipantID = NULL;
    Py_ssize_t TraderField_ParticipantID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *TraderField_Password = NULL;
    Py_ssize_t TraderField_Password_len = 0;
            
    ///安装数量
    // TThostFtdcInstallCountType int
    int TraderField_InstallCount = 0;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TraderField_BrokerID = NULL;
    Py_ssize_t TraderField_BrokerID_len = 0;
            
    ///撤单时选择席位算法
    // TThostFtdcOrderCancelAlgType char
    char TraderField_OrderCancelAlg = 0;
            
    ///交易报盘安装数量
    // TThostFtdcInstallCountType int
    int TraderField_TradeInstallCount = 0;
        
    ///行情报盘安装数量
    // TThostFtdcInstallCountType int
    int TraderField_MDInstallCount = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#cii", (char **)kwlist
#endif

        , &TraderField_ExchangeID, &TraderField_ExchangeID_len 
        , &TraderField_TraderID, &TraderField_TraderID_len 
        , &TraderField_ParticipantID, &TraderField_ParticipantID_len 
        , &TraderField_Password, &TraderField_Password_len 
        , &TraderField_InstallCount 
        , &TraderField_BrokerID, &TraderField_BrokerID_len 
        , &TraderField_OrderCancelAlg 
        , &TraderField_TradeInstallCount 
        , &TraderField_MDInstallCount 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( TraderField_ExchangeID != NULL ) {
        if(TraderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", TraderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, TraderField_ExchangeID, TraderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, TraderField_ExchangeID, sizeof(self->data.ExchangeID) );
        TraderField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( TraderField_TraderID != NULL ) {
        if(TraderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", TraderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, TraderField_TraderID, TraderField_TraderID_len);        
        strncpy(self->data.TraderID, TraderField_TraderID, sizeof(self->data.TraderID) );
        TraderField_TraderID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( TraderField_ParticipantID != NULL ) {
        if(TraderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", TraderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, TraderField_ParticipantID, TraderField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, TraderField_ParticipantID, sizeof(self->data.ParticipantID) );
        TraderField_ParticipantID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( TraderField_Password != NULL ) {
        if(TraderField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", TraderField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, TraderField_Password, TraderField_Password_len);        
        strncpy(self->data.Password, TraderField_Password, sizeof(self->data.Password) );
        TraderField_Password = NULL;
    }
            
    ///安装数量
    // TThostFtdcInstallCountType int
    self->data.InstallCount = TraderField_InstallCount;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TraderField_BrokerID != NULL ) {
        if(TraderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TraderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TraderField_BrokerID, TraderField_BrokerID_len);        
        strncpy(self->data.BrokerID, TraderField_BrokerID, sizeof(self->data.BrokerID) );
        TraderField_BrokerID = NULL;
    }
            
    ///撤单时选择席位算法
    // TThostFtdcOrderCancelAlgType char
    self->data.OrderCancelAlg = TraderField_OrderCancelAlg;
            
    ///交易报盘安装数量
    // TThostFtdcInstallCountType int
    self->data.TradeInstallCount = TraderField_TradeInstallCount;
        
    ///行情报盘安装数量
    // TThostFtdcInstallCountType int
    self->data.MDInstallCount = TraderField_MDInstallCount;
        

    return 0;
}

static void PyCThostFtdcTraderField_dealloc(PyCThostFtdcTraderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTraderField_repr(PyCThostFtdcTraderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:c,s:i,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"InstallCount", self->data.InstallCount 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"OrderCancelAlg", self->data.OrderCancelAlg 
        ,"TradeInstallCount", self->data.TradeInstallCount 
        ,"MDInstallCount", self->data.MDInstallCount 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTraderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcTraderField_get_ExchangeID(PyCThostFtdcTraderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcTraderField_set_ExchangeID(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
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
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcTraderField_get_TraderID(PyCThostFtdcTraderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcTraderField_set_TraderID(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcTraderField_get_ParticipantID(PyCThostFtdcTraderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcTraderField_set_ParticipantID(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
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
            
///密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcTraderField_get_Password(PyCThostFtdcTraderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTraderField_set_Password(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Password, 0, sizeof(self->data.Password));
    // memcpy(self->data.Password, buf, len);
    strncpy(self->data.Password, buf, sizeof(self->data.Password));
    return 0;
}
            
///安装数量
// TThostFtdcInstallCountType int
static PyObject *PyCThostFtdcTraderField_get_InstallCount(PyCThostFtdcTraderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallCount);
#else
    return PyInt_FromLong(self->data.InstallCount);
#endif
}

///安装数量
// TThostFtdcInstallCountType int
static int PyCThostFtdcTraderField_set_InstallCount(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallCount Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallCount Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the InstallCount value out of range for C int");
        return -1;
    }
    self->data.InstallCount = (int)buf;
    return 0;
}
        
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTraderField_get_BrokerID(PyCThostFtdcTraderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTraderField_set_BrokerID(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
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
            
///撤单时选择席位算法
// TThostFtdcOrderCancelAlgType char
static PyObject *PyCThostFtdcTraderField_get_OrderCancelAlg(PyCThostFtdcTraderField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderCancelAlg), 1);
}

///撤单时选择席位算法
// TThostFtdcOrderCancelAlgType char
static int PyCThostFtdcTraderField_set_OrderCancelAlg(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCancelAlg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderCancelAlg)) {
        PyErr_SetString(PyExc_ValueError, "OrderCancelAlg must be equal 1 bytes");
        return -1;
    }
    self->data.OrderCancelAlg = *buf;
    return 0;
}
            
///交易报盘安装数量
// TThostFtdcInstallCountType int
static PyObject *PyCThostFtdcTraderField_get_TradeInstallCount(PyCThostFtdcTraderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TradeInstallCount);
#else
    return PyInt_FromLong(self->data.TradeInstallCount);
#endif
}

///交易报盘安装数量
// TThostFtdcInstallCountType int
static int PyCThostFtdcTraderField_set_TradeInstallCount(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeInstallCount Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeInstallCount Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TradeInstallCount value out of range for C int");
        return -1;
    }
    self->data.TradeInstallCount = (int)buf;
    return 0;
}
        
///行情报盘安装数量
// TThostFtdcInstallCountType int
static PyObject *PyCThostFtdcTraderField_get_MDInstallCount(PyCThostFtdcTraderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.MDInstallCount);
#else
    return PyInt_FromLong(self->data.MDInstallCount);
#endif
}

///行情报盘安装数量
// TThostFtdcInstallCountType int
static int PyCThostFtdcTraderField_set_MDInstallCount(PyCThostFtdcTraderField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MDInstallCount Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MDInstallCount Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the MDInstallCount value out of range for C int");
        return -1;
    }
    self->data.MDInstallCount = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcTraderField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcTraderField_get_ExchangeID, (setter)PyCThostFtdcTraderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcTraderField_get_TraderID, (setter)PyCThostFtdcTraderField_set_TraderID, (char *)"TraderID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcTraderField_get_ParticipantID, (setter)PyCThostFtdcTraderField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcTraderField_get_Password, (setter)PyCThostFtdcTraderField_set_Password, (char *)"Password", NULL},
    ///安装数量 
    {(char *)"InstallCount", (getter)PyCThostFtdcTraderField_get_InstallCount, (setter)PyCThostFtdcTraderField_set_InstallCount, (char *)"InstallCount", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTraderField_get_BrokerID, (setter)PyCThostFtdcTraderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///撤单时选择席位算法 
    {(char *)"OrderCancelAlg", (getter)PyCThostFtdcTraderField_get_OrderCancelAlg, (setter)PyCThostFtdcTraderField_set_OrderCancelAlg, (char *)"OrderCancelAlg", NULL},
    ///交易报盘安装数量 
    {(char *)"TradeInstallCount", (getter)PyCThostFtdcTraderField_get_TradeInstallCount, (setter)PyCThostFtdcTraderField_set_TradeInstallCount, (char *)"TradeInstallCount", NULL},
    ///行情报盘安装数量 
    {(char *)"MDInstallCount", (getter)PyCThostFtdcTraderField_get_MDInstallCount, (setter)PyCThostFtdcTraderField_set_MDInstallCount, (char *)"MDInstallCount", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTraderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTraderField",	/* tp_name */
	sizeof(PyCThostFtdcTraderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTraderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTraderField_repr,   /* tp_repr */
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
	"CThostFtdcTraderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTraderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTraderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTraderField_new,       /* tp_new */
};

int PyCThostFtdcTraderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTraderField  */
	if (PyType_Ready(&PyCThostFtdcTraderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTraderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTraderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTraderField", (PyObject *)&PyCThostFtdcTraderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTraderField to module");
        Py_DECREF(&PyCThostFtdcTraderFieldType);
		return -1;
    }

    return 0;
}
