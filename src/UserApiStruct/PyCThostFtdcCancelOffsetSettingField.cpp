
#include "PyCThostFtdcCancelOffsetSettingField.h"



static PyObject *PyCThostFtdcCancelOffsetSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCancelOffsetSettingField *self = (PyCThostFtdcCancelOffsetSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCancelOffsetSettingField_init(PyCThostFtdcCancelOffsetSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress", "ExchangeInstID", "ExchangeSerialNo", "ExchangeProductID", "TraderID", "InstallID", "ParticipantID", "ClientID", "OrderActionStatus", "StatusMsg", "ActionLocalID", "ActionDate", "ActionTime",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pCancelOffsetSettingField_BrokerID = NULL;
	Py_ssize_t pCancelOffsetSettingField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pCancelOffsetSettingField_InvestorID = NULL;
	Py_ssize_t pCancelOffsetSettingField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pCancelOffsetSettingField_InstrumentID = NULL;
	Py_ssize_t pCancelOffsetSettingField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pCancelOffsetSettingField_UnderlyingInstrID = NULL;
	Py_ssize_t pCancelOffsetSettingField_UnderlyingInstrID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pCancelOffsetSettingField_ProductID = NULL;
	Py_ssize_t pCancelOffsetSettingField_ProductID_len = 0;

	//TThostFtdcOffsetTypeType char
	char pCancelOffsetSettingField_OffsetType = 0;

	//TThostFtdcVolumeType int
	int pCancelOffsetSettingField_Volume = 0;

	//TThostFtdcBoolType int
	int pCancelOffsetSettingField_IsOffset = 0;

	//TThostFtdcRequestIDType int
	int pCancelOffsetSettingField_RequestID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pCancelOffsetSettingField_UserID = NULL;
	Py_ssize_t pCancelOffsetSettingField_UserID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pCancelOffsetSettingField_ExchangeID = NULL;
	Py_ssize_t pCancelOffsetSettingField_ExchangeID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pCancelOffsetSettingField_IPAddress = NULL;
	Py_ssize_t pCancelOffsetSettingField_IPAddress_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pCancelOffsetSettingField_MacAddress = NULL;
	Py_ssize_t pCancelOffsetSettingField_MacAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pCancelOffsetSettingField_ExchangeInstID = NULL;
	Py_ssize_t pCancelOffsetSettingField_ExchangeInstID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pCancelOffsetSettingField_ExchangeSerialNo = NULL;
	Py_ssize_t pCancelOffsetSettingField_ExchangeSerialNo_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pCancelOffsetSettingField_ExchangeProductID = NULL;
	Py_ssize_t pCancelOffsetSettingField_ExchangeProductID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pCancelOffsetSettingField_TraderID = NULL;
	Py_ssize_t pCancelOffsetSettingField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pCancelOffsetSettingField_InstallID = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pCancelOffsetSettingField_ParticipantID = NULL;
	Py_ssize_t pCancelOffsetSettingField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pCancelOffsetSettingField_ClientID = NULL;
	Py_ssize_t pCancelOffsetSettingField_ClientID_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pCancelOffsetSettingField_OrderActionStatus = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pCancelOffsetSettingField_StatusMsg = NULL;
	Py_ssize_t pCancelOffsetSettingField_StatusMsg_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pCancelOffsetSettingField_ActionLocalID = NULL;
	Py_ssize_t pCancelOffsetSettingField_ActionLocalID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pCancelOffsetSettingField_ActionDate = NULL;
	Py_ssize_t pCancelOffsetSettingField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pCancelOffsetSettingField_ActionTime = NULL;
	Py_ssize_t pCancelOffsetSettingField_ActionTime_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#y#y#y#y#iy#y#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciiis#s#s#s#s#s#s#s#is#s#cs#s#s#s#", (char **)kwlist
#endif

		, &pCancelOffsetSettingField_BrokerID, &pCancelOffsetSettingField_BrokerID_len
		, &pCancelOffsetSettingField_InvestorID, &pCancelOffsetSettingField_InvestorID_len
		, &pCancelOffsetSettingField_InstrumentID, &pCancelOffsetSettingField_InstrumentID_len
		, &pCancelOffsetSettingField_UnderlyingInstrID, &pCancelOffsetSettingField_UnderlyingInstrID_len
		, &pCancelOffsetSettingField_ProductID, &pCancelOffsetSettingField_ProductID_len
		, &pCancelOffsetSettingField_OffsetType
		, &pCancelOffsetSettingField_Volume
		, &pCancelOffsetSettingField_IsOffset
		, &pCancelOffsetSettingField_RequestID
		, &pCancelOffsetSettingField_UserID, &pCancelOffsetSettingField_UserID_len
		, &pCancelOffsetSettingField_ExchangeID, &pCancelOffsetSettingField_ExchangeID_len
		, &pCancelOffsetSettingField_IPAddress, &pCancelOffsetSettingField_IPAddress_len
		, &pCancelOffsetSettingField_MacAddress, &pCancelOffsetSettingField_MacAddress_len
		, &pCancelOffsetSettingField_ExchangeInstID, &pCancelOffsetSettingField_ExchangeInstID_len
		, &pCancelOffsetSettingField_ExchangeSerialNo, &pCancelOffsetSettingField_ExchangeSerialNo_len
		, &pCancelOffsetSettingField_ExchangeProductID, &pCancelOffsetSettingField_ExchangeProductID_len
		, &pCancelOffsetSettingField_TraderID, &pCancelOffsetSettingField_TraderID_len
		, &pCancelOffsetSettingField_InstallID
		, &pCancelOffsetSettingField_ParticipantID, &pCancelOffsetSettingField_ParticipantID_len
		, &pCancelOffsetSettingField_ClientID, &pCancelOffsetSettingField_ClientID_len
		, &pCancelOffsetSettingField_OrderActionStatus
		, &pCancelOffsetSettingField_StatusMsg, &pCancelOffsetSettingField_StatusMsg_len
		, &pCancelOffsetSettingField_ActionLocalID, &pCancelOffsetSettingField_ActionLocalID_len
		, &pCancelOffsetSettingField_ActionDate, &pCancelOffsetSettingField_ActionDate_len
		, &pCancelOffsetSettingField_ActionTime, &pCancelOffsetSettingField_ActionTime_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pCancelOffsetSettingField_BrokerID != NULL) {
		if(pCancelOffsetSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pCancelOffsetSettingField_BrokerID, sizeof(self->data.BrokerID) );
		pCancelOffsetSettingField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pCancelOffsetSettingField_InvestorID != NULL) {
		if(pCancelOffsetSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pCancelOffsetSettingField_InvestorID, sizeof(self->data.InvestorID) );
		pCancelOffsetSettingField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pCancelOffsetSettingField_InstrumentID != NULL) {
		if(pCancelOffsetSettingField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pCancelOffsetSettingField_InstrumentID, sizeof(self->data.InstrumentID) );
		pCancelOffsetSettingField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pCancelOffsetSettingField_UnderlyingInstrID != NULL) {
		if(pCancelOffsetSettingField_UnderlyingInstrID_len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
			PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_UnderlyingInstrID_len, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
			return -1;
		}
		strncpy(self->data.UnderlyingInstrID, pCancelOffsetSettingField_UnderlyingInstrID, sizeof(self->data.UnderlyingInstrID) );
		pCancelOffsetSettingField_UnderlyingInstrID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pCancelOffsetSettingField_ProductID != NULL) {
		if(pCancelOffsetSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pCancelOffsetSettingField_ProductID, sizeof(self->data.ProductID) );
		pCancelOffsetSettingField_ProductID = NULL;
	}

	//TThostFtdcOffsetTypeType char
	self->data.OffsetType = pCancelOffsetSettingField_OffsetType;

	//TThostFtdcVolumeType int
	self->data.Volume = pCancelOffsetSettingField_Volume;

	//TThostFtdcBoolType int
	self->data.IsOffset = pCancelOffsetSettingField_IsOffset;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pCancelOffsetSettingField_RequestID;

	//TThostFtdcUserIDType char[16]
	if(pCancelOffsetSettingField_UserID != NULL) {
		if(pCancelOffsetSettingField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pCancelOffsetSettingField_UserID, sizeof(self->data.UserID) );
		pCancelOffsetSettingField_UserID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pCancelOffsetSettingField_ExchangeID != NULL) {
		if(pCancelOffsetSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pCancelOffsetSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
		pCancelOffsetSettingField_ExchangeID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pCancelOffsetSettingField_IPAddress != NULL) {
		if(pCancelOffsetSettingField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pCancelOffsetSettingField_IPAddress, sizeof(self->data.IPAddress) );
		pCancelOffsetSettingField_IPAddress = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pCancelOffsetSettingField_MacAddress != NULL) {
		if(pCancelOffsetSettingField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pCancelOffsetSettingField_MacAddress, sizeof(self->data.MacAddress) );
		pCancelOffsetSettingField_MacAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pCancelOffsetSettingField_ExchangeInstID != NULL) {
		if(pCancelOffsetSettingField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pCancelOffsetSettingField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pCancelOffsetSettingField_ExchangeInstID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pCancelOffsetSettingField_ExchangeSerialNo != NULL) {
		if(pCancelOffsetSettingField_ExchangeSerialNo_len > (Py_ssize_t)sizeof(self->data.ExchangeSerialNo)) {
			PyErr_Format(PyExc_ValueError, "ExchangeSerialNo too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ExchangeSerialNo_len, (Py_ssize_t)sizeof(self->data.ExchangeSerialNo));
			return -1;
		}
		strncpy(self->data.ExchangeSerialNo, pCancelOffsetSettingField_ExchangeSerialNo, sizeof(self->data.ExchangeSerialNo) );
		pCancelOffsetSettingField_ExchangeSerialNo = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pCancelOffsetSettingField_ExchangeProductID != NULL) {
		if(pCancelOffsetSettingField_ExchangeProductID_len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ExchangeProductID_len, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
			return -1;
		}
		strncpy(self->data.ExchangeProductID, pCancelOffsetSettingField_ExchangeProductID, sizeof(self->data.ExchangeProductID) );
		pCancelOffsetSettingField_ExchangeProductID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pCancelOffsetSettingField_TraderID != NULL) {
		if(pCancelOffsetSettingField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pCancelOffsetSettingField_TraderID, sizeof(self->data.TraderID) );
		pCancelOffsetSettingField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pCancelOffsetSettingField_InstallID;

	//TThostFtdcParticipantIDType char[11]
	if(pCancelOffsetSettingField_ParticipantID != NULL) {
		if(pCancelOffsetSettingField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pCancelOffsetSettingField_ParticipantID, sizeof(self->data.ParticipantID) );
		pCancelOffsetSettingField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pCancelOffsetSettingField_ClientID != NULL) {
		if(pCancelOffsetSettingField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pCancelOffsetSettingField_ClientID, sizeof(self->data.ClientID) );
		pCancelOffsetSettingField_ClientID = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pCancelOffsetSettingField_OrderActionStatus;

	//TThostFtdcErrorMsgType char[81]
	if(pCancelOffsetSettingField_StatusMsg != NULL) {
		if(pCancelOffsetSettingField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pCancelOffsetSettingField_StatusMsg, sizeof(self->data.StatusMsg) );
		pCancelOffsetSettingField_StatusMsg = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pCancelOffsetSettingField_ActionLocalID != NULL) {
		if(pCancelOffsetSettingField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pCancelOffsetSettingField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pCancelOffsetSettingField_ActionLocalID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pCancelOffsetSettingField_ActionDate != NULL) {
		if(pCancelOffsetSettingField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pCancelOffsetSettingField_ActionDate, sizeof(self->data.ActionDate) );
		pCancelOffsetSettingField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pCancelOffsetSettingField_ActionTime != NULL) {
		if(pCancelOffsetSettingField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pCancelOffsetSettingField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pCancelOffsetSettingField_ActionTime, sizeof(self->data.ActionTime) );
		pCancelOffsetSettingField_ActionTime = NULL;
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

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InstrumentID", self->data.InstrumentID 
		, "UnderlyingInstrID", self->data.UnderlyingInstrID 
		, "ProductID", self->data.ProductID 
		, "OffsetType", self->data.OffsetType
		, "Volume", self->data.Volume
		, "IsOffset", self->data.IsOffset
		, "RequestID", self->data.RequestID
		, "UserID", self->data.UserID 
		, "ExchangeID", self->data.ExchangeID 
		, "IPAddress", self->data.IPAddress 
		, "MacAddress", self->data.MacAddress 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "ExchangeSerialNo", self->data.ExchangeSerialNo 
		, "ExchangeProductID", self->data.ExchangeProductID 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "OrderActionStatus", self->data.OrderActionStatus
		, "StatusMsg", self->data.StatusMsg 
		, "ActionLocalID", self->data.ActionLocalID 
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCancelOffsetSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_BrokerID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_InvestorID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_InstrumentID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_UnderlyingInstrID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.UnderlyingInstrID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ProductID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_OffsetType(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_Volume(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_IsOffset(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsOffset);
#else 
	return PyInt_FromLong(self->data.IsOffset);
#endif 
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_RequestID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_UserID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ExchangeID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_IPAddress(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_MacAddress(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ExchangeInstID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ExchangeSerialNo(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeSerialNo);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ExchangeProductID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeProductID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_TraderID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_InstallID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ParticipantID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ClientID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_OrderActionStatus(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_StatusMsg(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ActionLocalID(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ActionDate(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcCancelOffsetSettingField_get_ActionTime(PyCThostFtdcCancelOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static int PyCThostFtdcCancelOffsetSettingField_set_BrokerID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_InvestorID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_InstrumentID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_UnderlyingInstrID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.UnderlyingInstrID, buf, sizeof(self->data.UnderlyingInstrID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ProductID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_OffsetType(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
		PyErr_SetString(PyExc_ValueError, "OffsetType must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetType = *buf;
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_Volume(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.Volume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCancelOffsetSettingField_set_IsOffset(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.IsOffset = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCancelOffsetSettingField_set_RequestID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.RequestID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCancelOffsetSettingField_set_UserID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ExchangeID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_IPAddress(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_MacAddress(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ExchangeInstID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ExchangeSerialNo(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ExchangeSerialNo, buf, sizeof(self->data.ExchangeSerialNo));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ExchangeProductID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ExchangeProductID, buf, sizeof(self->data.ExchangeProductID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_TraderID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_InstallID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.InstallID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCancelOffsetSettingField_set_ParticipantID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ClientID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_OrderActionStatus(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderActionStatus)) {
		PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be less than 1 bytes");
		return -1;
	}
	self->data.OrderActionStatus = *buf;
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_StatusMsg(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ActionLocalID(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ActionDate(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ActionDate, buf, sizeof(self->data.ActionDate));
	return 0;
}

static int PyCThostFtdcCancelOffsetSettingField_set_ActionTime(PyCThostFtdcCancelOffsetSettingField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ActionTime, buf, sizeof(self->data.ActionTime));
	return 0;
}



static PyGetSetDef PyCThostFtdcCancelOffsetSettingField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcCancelOffsetSettingField_get_BrokerID, (setter)PyCThostFtdcCancelOffsetSettingField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcCancelOffsetSettingField_get_InvestorID, (setter)PyCThostFtdcCancelOffsetSettingField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcCancelOffsetSettingField_get_InstrumentID, (setter)PyCThostFtdcCancelOffsetSettingField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"UnderlyingInstrID", (getter)PyCThostFtdcCancelOffsetSettingField_get_UnderlyingInstrID, (setter)PyCThostFtdcCancelOffsetSettingField_set_UnderlyingInstrID, (char *)"UnderlyingInstrID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ProductID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"OffsetType", (getter)PyCThostFtdcCancelOffsetSettingField_get_OffsetType, (setter)PyCThostFtdcCancelOffsetSettingField_set_OffsetType, (char *)"OffsetType", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcCancelOffsetSettingField_get_Volume, (setter)PyCThostFtdcCancelOffsetSettingField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"IsOffset", (getter)PyCThostFtdcCancelOffsetSettingField_get_IsOffset, (setter)PyCThostFtdcCancelOffsetSettingField_set_IsOffset, (char *)"IsOffset", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcCancelOffsetSettingField_get_RequestID, (setter)PyCThostFtdcCancelOffsetSettingField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcCancelOffsetSettingField_get_UserID, (setter)PyCThostFtdcCancelOffsetSettingField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ExchangeID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcCancelOffsetSettingField_get_IPAddress, (setter)PyCThostFtdcCancelOffsetSettingField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcCancelOffsetSettingField_get_MacAddress, (setter)PyCThostFtdcCancelOffsetSettingField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ExchangeInstID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"ExchangeSerialNo", (getter)PyCThostFtdcCancelOffsetSettingField_get_ExchangeSerialNo, (setter)PyCThostFtdcCancelOffsetSettingField_set_ExchangeSerialNo, (char *)"ExchangeSerialNo", NULL},
	 {(char *)"ExchangeProductID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ExchangeProductID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ExchangeProductID, (char *)"ExchangeProductID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcCancelOffsetSettingField_get_TraderID, (setter)PyCThostFtdcCancelOffsetSettingField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcCancelOffsetSettingField_get_InstallID, (setter)PyCThostFtdcCancelOffsetSettingField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ParticipantID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ClientID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcCancelOffsetSettingField_get_OrderActionStatus, (setter)PyCThostFtdcCancelOffsetSettingField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcCancelOffsetSettingField_get_StatusMsg, (setter)PyCThostFtdcCancelOffsetSettingField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcCancelOffsetSettingField_get_ActionLocalID, (setter)PyCThostFtdcCancelOffsetSettingField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcCancelOffsetSettingField_get_ActionDate, (setter)PyCThostFtdcCancelOffsetSettingField_set_ActionDate, (char *)"ActionDate", NULL},
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
