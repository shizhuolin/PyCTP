
#include "PyCThostFtdcSMSVerifyInfoFromSecField.h"

///短信验证信息通知

static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSMSVerifyInfoFromSecField *self = (PyCThostFtdcSMSVerifyInfoFromSecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSMSVerifyInfoFromSecField_init(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BrokerAbbr", "UserID", "Mobile", "SMSCode", "CreateDate", "CreateTime", "IsUsed", "FromSec",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SMSVerifyInfoFromSecField_BrokerID = NULL;
    Py_ssize_t SMSVerifyInfoFromSecField_BrokerID_len = 0;
            
    ///经纪公司简称
    // TThostFtdcBrokerAbbrType char[9]
    const char *SMSVerifyInfoFromSecField_BrokerAbbr = NULL;
    Py_ssize_t SMSVerifyInfoFromSecField_BrokerAbbr_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *SMSVerifyInfoFromSecField_UserID = NULL;
    Py_ssize_t SMSVerifyInfoFromSecField_UserID_len = 0;
            
    ///手机号
    // TThostFtdcSMSPhoneType char[17]
    const char *SMSVerifyInfoFromSecField_Mobile = NULL;
    Py_ssize_t SMSVerifyInfoFromSecField_Mobile_len = 0;
            
    ///短信验证码
    // TThostFtdcSMSCodeType char[17]
    const char *SMSVerifyInfoFromSecField_SMSCode = NULL;
    Py_ssize_t SMSVerifyInfoFromSecField_SMSCode_len = 0;
            
    ///验证码创建日期
    // TThostFtdcDateType char[9]
    const char *SMSVerifyInfoFromSecField_CreateDate = NULL;
    Py_ssize_t SMSVerifyInfoFromSecField_CreateDate_len = 0;
            
    ///验证码创建时间
    // TThostFtdcTimeType char[9]
    const char *SMSVerifyInfoFromSecField_CreateTime = NULL;
    Py_ssize_t SMSVerifyInfoFromSecField_CreateTime_len = 0;
            
    ///验证码是否被使用过
    // TThostFtdcBoolType int
    int SMSVerifyInfoFromSecField_IsUsed = 0;
        
    ///次席的交易中心代码
    // TThostFtdcDRIdentityIDType int
    int SMSVerifyInfoFromSecField_FromSec = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#ii", (char **)kwlist
#endif

        , &SMSVerifyInfoFromSecField_BrokerID, &SMSVerifyInfoFromSecField_BrokerID_len 
        , &SMSVerifyInfoFromSecField_BrokerAbbr, &SMSVerifyInfoFromSecField_BrokerAbbr_len 
        , &SMSVerifyInfoFromSecField_UserID, &SMSVerifyInfoFromSecField_UserID_len 
        , &SMSVerifyInfoFromSecField_Mobile, &SMSVerifyInfoFromSecField_Mobile_len 
        , &SMSVerifyInfoFromSecField_SMSCode, &SMSVerifyInfoFromSecField_SMSCode_len 
        , &SMSVerifyInfoFromSecField_CreateDate, &SMSVerifyInfoFromSecField_CreateDate_len 
        , &SMSVerifyInfoFromSecField_CreateTime, &SMSVerifyInfoFromSecField_CreateTime_len 
        , &SMSVerifyInfoFromSecField_IsUsed 
        , &SMSVerifyInfoFromSecField_FromSec 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SMSVerifyInfoFromSecField_BrokerID != NULL ) {
        if(SMSVerifyInfoFromSecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SMSVerifyInfoFromSecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SMSVerifyInfoFromSecField_BrokerID, SMSVerifyInfoFromSecField_BrokerID_len);        
        strncpy(self->data.BrokerID, SMSVerifyInfoFromSecField_BrokerID, sizeof(self->data.BrokerID) );
        SMSVerifyInfoFromSecField_BrokerID = NULL;
    }
            
    ///经纪公司简称
    // TThostFtdcBrokerAbbrType char[9]
    if( SMSVerifyInfoFromSecField_BrokerAbbr != NULL ) {
        if(SMSVerifyInfoFromSecField_BrokerAbbr_len > (Py_ssize_t)sizeof(self->data.BrokerAbbr)) {
            PyErr_Format(PyExc_ValueError, "BrokerAbbr too long: length=%zd (max allowed is %zd)", SMSVerifyInfoFromSecField_BrokerAbbr_len, (Py_ssize_t)sizeof(self->data.BrokerAbbr));
            return -1;
        }
        // memset(self->data.BrokerAbbr, 0, sizeof(self->data.BrokerAbbr));
        // memcpy(self->data.BrokerAbbr, SMSVerifyInfoFromSecField_BrokerAbbr, SMSVerifyInfoFromSecField_BrokerAbbr_len);        
        strncpy(self->data.BrokerAbbr, SMSVerifyInfoFromSecField_BrokerAbbr, sizeof(self->data.BrokerAbbr) );
        SMSVerifyInfoFromSecField_BrokerAbbr = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( SMSVerifyInfoFromSecField_UserID != NULL ) {
        if(SMSVerifyInfoFromSecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", SMSVerifyInfoFromSecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, SMSVerifyInfoFromSecField_UserID, SMSVerifyInfoFromSecField_UserID_len);        
        strncpy(self->data.UserID, SMSVerifyInfoFromSecField_UserID, sizeof(self->data.UserID) );
        SMSVerifyInfoFromSecField_UserID = NULL;
    }
            
    ///手机号
    // TThostFtdcSMSPhoneType char[17]
    if( SMSVerifyInfoFromSecField_Mobile != NULL ) {
        if(SMSVerifyInfoFromSecField_Mobile_len > (Py_ssize_t)sizeof(self->data.Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is %zd)", SMSVerifyInfoFromSecField_Mobile_len, (Py_ssize_t)sizeof(self->data.Mobile));
            return -1;
        }
        // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
        // memcpy(self->data.Mobile, SMSVerifyInfoFromSecField_Mobile, SMSVerifyInfoFromSecField_Mobile_len);        
        strncpy(self->data.Mobile, SMSVerifyInfoFromSecField_Mobile, sizeof(self->data.Mobile) );
        SMSVerifyInfoFromSecField_Mobile = NULL;
    }
            
    ///短信验证码
    // TThostFtdcSMSCodeType char[17]
    if( SMSVerifyInfoFromSecField_SMSCode != NULL ) {
        if(SMSVerifyInfoFromSecField_SMSCode_len > (Py_ssize_t)sizeof(self->data.SMSCode)) {
            PyErr_Format(PyExc_ValueError, "SMSCode too long: length=%zd (max allowed is %zd)", SMSVerifyInfoFromSecField_SMSCode_len, (Py_ssize_t)sizeof(self->data.SMSCode));
            return -1;
        }
        // memset(self->data.SMSCode, 0, sizeof(self->data.SMSCode));
        // memcpy(self->data.SMSCode, SMSVerifyInfoFromSecField_SMSCode, SMSVerifyInfoFromSecField_SMSCode_len);        
        strncpy(self->data.SMSCode, SMSVerifyInfoFromSecField_SMSCode, sizeof(self->data.SMSCode) );
        SMSVerifyInfoFromSecField_SMSCode = NULL;
    }
            
    ///验证码创建日期
    // TThostFtdcDateType char[9]
    if( SMSVerifyInfoFromSecField_CreateDate != NULL ) {
        if(SMSVerifyInfoFromSecField_CreateDate_len > (Py_ssize_t)sizeof(self->data.CreateDate)) {
            PyErr_Format(PyExc_ValueError, "CreateDate too long: length=%zd (max allowed is %zd)", SMSVerifyInfoFromSecField_CreateDate_len, (Py_ssize_t)sizeof(self->data.CreateDate));
            return -1;
        }
        // memset(self->data.CreateDate, 0, sizeof(self->data.CreateDate));
        // memcpy(self->data.CreateDate, SMSVerifyInfoFromSecField_CreateDate, SMSVerifyInfoFromSecField_CreateDate_len);        
        strncpy(self->data.CreateDate, SMSVerifyInfoFromSecField_CreateDate, sizeof(self->data.CreateDate) );
        SMSVerifyInfoFromSecField_CreateDate = NULL;
    }
            
    ///验证码创建时间
    // TThostFtdcTimeType char[9]
    if( SMSVerifyInfoFromSecField_CreateTime != NULL ) {
        if(SMSVerifyInfoFromSecField_CreateTime_len > (Py_ssize_t)sizeof(self->data.CreateTime)) {
            PyErr_Format(PyExc_ValueError, "CreateTime too long: length=%zd (max allowed is %zd)", SMSVerifyInfoFromSecField_CreateTime_len, (Py_ssize_t)sizeof(self->data.CreateTime));
            return -1;
        }
        // memset(self->data.CreateTime, 0, sizeof(self->data.CreateTime));
        // memcpy(self->data.CreateTime, SMSVerifyInfoFromSecField_CreateTime, SMSVerifyInfoFromSecField_CreateTime_len);        
        strncpy(self->data.CreateTime, SMSVerifyInfoFromSecField_CreateTime, sizeof(self->data.CreateTime) );
        SMSVerifyInfoFromSecField_CreateTime = NULL;
    }
            
    ///验证码是否被使用过
    // TThostFtdcBoolType int
    self->data.IsUsed = SMSVerifyInfoFromSecField_IsUsed;
        
    ///次席的交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.FromSec = SMSVerifyInfoFromSecField_FromSec;
        

    return 0;
}

static void PyCThostFtdcSMSVerifyInfoFromSecField_dealloc(PyCThostFtdcSMSVerifyInfoFromSecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_repr(PyCThostFtdcSMSVerifyInfoFromSecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BrokerAbbr", self->data.BrokerAbbr//, (Py_ssize_t)sizeof(self->data.BrokerAbbr) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Mobile", self->data.Mobile//, (Py_ssize_t)sizeof(self->data.Mobile) 
        ,"SMSCode", self->data.SMSCode//, (Py_ssize_t)sizeof(self->data.SMSCode) 
        ,"CreateDate", self->data.CreateDate//, (Py_ssize_t)sizeof(self->data.CreateDate) 
        ,"CreateTime", self->data.CreateTime//, (Py_ssize_t)sizeof(self->data.CreateTime) 
        ,"IsUsed", self->data.IsUsed 
        ,"FromSec", self->data.FromSec 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyInfoFromSecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_BrokerID(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_BrokerID(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
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
            
///经纪公司简称
// TThostFtdcBrokerAbbrType char[9]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_BrokerAbbr(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerAbbr, (Py_ssize_t)sizeof(self->data.BrokerAbbr));
    return PyBytes_FromString(self->data.BrokerAbbr);
}

///经纪公司简称
// TThostFtdcBrokerAbbrType char[9]
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_BrokerAbbr(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerAbbr Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerAbbr)) {
        PyErr_SetString(PyExc_ValueError, "BrokerAbbr must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.BrokerAbbr, 0, sizeof(self->data.BrokerAbbr));
    // memcpy(self->data.BrokerAbbr, buf, len);
    strncpy(self->data.BrokerAbbr, buf, sizeof(self->data.BrokerAbbr));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_UserID(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_UserID(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
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
            
///手机号
// TThostFtdcSMSPhoneType char[17]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_Mobile(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Mobile, (Py_ssize_t)sizeof(self->data.Mobile));
    return PyBytes_FromString(self->data.Mobile);
}

///手机号
// TThostFtdcSMSPhoneType char[17]
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_Mobile(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
    // memcpy(self->data.Mobile, buf, len);
    strncpy(self->data.Mobile, buf, sizeof(self->data.Mobile));
    return 0;
}
            
///短信验证码
// TThostFtdcSMSCodeType char[17]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_SMSCode(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SMSCode, (Py_ssize_t)sizeof(self->data.SMSCode));
    return PyBytes_FromString(self->data.SMSCode);
}

///短信验证码
// TThostFtdcSMSCodeType char[17]
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_SMSCode(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SMSCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SMSCode)) {
        PyErr_SetString(PyExc_ValueError, "SMSCode must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.SMSCode, 0, sizeof(self->data.SMSCode));
    // memcpy(self->data.SMSCode, buf, len);
    strncpy(self->data.SMSCode, buf, sizeof(self->data.SMSCode));
    return 0;
}
            
///验证码创建日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_CreateDate(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CreateDate, (Py_ssize_t)sizeof(self->data.CreateDate));
    return PyBytes_FromString(self->data.CreateDate);
}

///验证码创建日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_CreateDate(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CreateDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CreateDate)) {
        PyErr_SetString(PyExc_ValueError, "CreateDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CreateDate, 0, sizeof(self->data.CreateDate));
    // memcpy(self->data.CreateDate, buf, len);
    strncpy(self->data.CreateDate, buf, sizeof(self->data.CreateDate));
    return 0;
}
            
///验证码创建时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_CreateTime(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CreateTime, (Py_ssize_t)sizeof(self->data.CreateTime));
    return PyBytes_FromString(self->data.CreateTime);
}

///验证码创建时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_CreateTime(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CreateTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CreateTime)) {
        PyErr_SetString(PyExc_ValueError, "CreateTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CreateTime, 0, sizeof(self->data.CreateTime));
    // memcpy(self->data.CreateTime, buf, len);
    strncpy(self->data.CreateTime, buf, sizeof(self->data.CreateTime));
    return 0;
}
            
///验证码是否被使用过
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_IsUsed(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsUsed);
#else
    return PyInt_FromLong(self->data.IsUsed);
#endif
}

///验证码是否被使用过
// TThostFtdcBoolType int
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_IsUsed(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsUsed Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsUsed Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsUsed value out of range for C int");
        return -1;
    }
    self->data.IsUsed = (int)buf;
    return 0;
}
        
///次席的交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcSMSVerifyInfoFromSecField_get_FromSec(PyCThostFtdcSMSVerifyInfoFromSecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FromSec);
#else
    return PyInt_FromLong(self->data.FromSec);
#endif
}

///次席的交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcSMSVerifyInfoFromSecField_set_FromSec(PyCThostFtdcSMSVerifyInfoFromSecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromSec Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromSec Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FromSec value out of range for C int");
        return -1;
    }
    self->data.FromSec = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSMSVerifyInfoFromSecField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_BrokerID, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_BrokerID, (char *)"BrokerID", NULL},
    ///经纪公司简称 
    {(char *)"BrokerAbbr", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_BrokerAbbr, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_BrokerAbbr, (char *)"BrokerAbbr", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_UserID, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_UserID, (char *)"UserID", NULL},
    ///手机号 
    {(char *)"Mobile", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_Mobile, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_Mobile, (char *)"Mobile", NULL},
    ///短信验证码 
    {(char *)"SMSCode", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_SMSCode, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_SMSCode, (char *)"SMSCode", NULL},
    ///验证码创建日期 
    {(char *)"CreateDate", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_CreateDate, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_CreateDate, (char *)"CreateDate", NULL},
    ///验证码创建时间 
    {(char *)"CreateTime", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_CreateTime, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_CreateTime, (char *)"CreateTime", NULL},
    ///验证码是否被使用过 
    {(char *)"IsUsed", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_IsUsed, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_IsUsed, (char *)"IsUsed", NULL},
    ///次席的交易中心代码 
    {(char *)"FromSec", (getter)PyCThostFtdcSMSVerifyInfoFromSecField_get_FromSec, (setter)PyCThostFtdcSMSVerifyInfoFromSecField_set_FromSec, (char *)"FromSec", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSMSVerifyInfoFromSecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSMSVerifyInfoFromSecField",	/* tp_name */
	sizeof(PyCThostFtdcSMSVerifyInfoFromSecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSMSVerifyInfoFromSecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSMSVerifyInfoFromSecField_repr,   /* tp_repr */
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
	"CThostFtdcSMSVerifyInfoFromSecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSMSVerifyInfoFromSecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSMSVerifyInfoFromSecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSMSVerifyInfoFromSecField_new,       /* tp_new */
};

int PyCThostFtdcSMSVerifyInfoFromSecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSMSVerifyInfoFromSecField  */
	if (PyType_Ready(&PyCThostFtdcSMSVerifyInfoFromSecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSMSVerifyInfoFromSecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSMSVerifyInfoFromSecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSMSVerifyInfoFromSecField", (PyObject *)&PyCThostFtdcSMSVerifyInfoFromSecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSMSVerifyInfoFromSecField to module");
        Py_DECREF(&PyCThostFtdcSMSVerifyInfoFromSecFieldType);
		return -1;
    }

    return 0;
}
