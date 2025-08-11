
#include "PyCThostFtdcForQuoteField.h"



static PyObject *PyCThostFtdcForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcForQuoteField *self = (PyCThostFtdcForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcForQuoteField_init(PyCThostFtdcForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ForQuoteRef", "UserID", "ForQuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "InsertDate", "InsertTime", "ForQuoteStatus", "FrontID", "SessionID", "StatusMsg", "ActiveUserID", "BrokerForQutoSeq", "InvestUnitID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pForQuoteField_BrokerID = NULL;
	Py_ssize_t pForQuoteField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pForQuoteField_InvestorID = NULL;
	Py_ssize_t pForQuoteField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pForQuoteField_reserve1 = NULL;
	Py_ssize_t pForQuoteField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pForQuoteField_ForQuoteRef = NULL;
	Py_ssize_t pForQuoteField_ForQuoteRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pForQuoteField_UserID = NULL;
	Py_ssize_t pForQuoteField_UserID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pForQuoteField_ForQuoteLocalID = NULL;
	Py_ssize_t pForQuoteField_ForQuoteLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pForQuoteField_ExchangeID = NULL;
	Py_ssize_t pForQuoteField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pForQuoteField_ParticipantID = NULL;
	Py_ssize_t pForQuoteField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pForQuoteField_ClientID = NULL;
	Py_ssize_t pForQuoteField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pForQuoteField_reserve2 = NULL;
	Py_ssize_t pForQuoteField_reserve2_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pForQuoteField_TraderID = NULL;
	Py_ssize_t pForQuoteField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pForQuoteField_InstallID = 0;

	//TThostFtdcDateType char[9]
	const char *pForQuoteField_InsertDate = NULL;
	Py_ssize_t pForQuoteField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pForQuoteField_InsertTime = NULL;
	Py_ssize_t pForQuoteField_InsertTime_len = 0;

	//TThostFtdcForQuoteStatusType char
	char pForQuoteField_ForQuoteStatus = 0;

	//TThostFtdcFrontIDType int
	int pForQuoteField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pForQuoteField_SessionID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pForQuoteField_StatusMsg = NULL;
	Py_ssize_t pForQuoteField_StatusMsg_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pForQuoteField_ActiveUserID = NULL;
	Py_ssize_t pForQuoteField_ActiveUserID_len = 0;

	//TThostFtdcSequenceNoType int
	int pForQuoteField_BrokerForQutoSeq = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pForQuoteField_InvestUnitID = NULL;
	Py_ssize_t pForQuoteField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pForQuoteField_reserve3 = NULL;
	Py_ssize_t pForQuoteField_reserve3_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pForQuoteField_MacAddress = NULL;
	Py_ssize_t pForQuoteField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pForQuoteField_InstrumentID = NULL;
	Py_ssize_t pForQuoteField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pForQuoteField_ExchangeInstID = NULL;
	Py_ssize_t pForQuoteField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pForQuoteField_IPAddress = NULL;
	Py_ssize_t pForQuoteField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#y#ciiy#y#iy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#s#ciis#s#is#s#s#s#s#s#", (char **)kwlist
#endif

		, &pForQuoteField_BrokerID, &pForQuoteField_BrokerID_len
		, &pForQuoteField_InvestorID, &pForQuoteField_InvestorID_len
		, &pForQuoteField_reserve1, &pForQuoteField_reserve1_len
		, &pForQuoteField_ForQuoteRef, &pForQuoteField_ForQuoteRef_len
		, &pForQuoteField_UserID, &pForQuoteField_UserID_len
		, &pForQuoteField_ForQuoteLocalID, &pForQuoteField_ForQuoteLocalID_len
		, &pForQuoteField_ExchangeID, &pForQuoteField_ExchangeID_len
		, &pForQuoteField_ParticipantID, &pForQuoteField_ParticipantID_len
		, &pForQuoteField_ClientID, &pForQuoteField_ClientID_len
		, &pForQuoteField_reserve2, &pForQuoteField_reserve2_len
		, &pForQuoteField_TraderID, &pForQuoteField_TraderID_len
		, &pForQuoteField_InstallID
		, &pForQuoteField_InsertDate, &pForQuoteField_InsertDate_len
		, &pForQuoteField_InsertTime, &pForQuoteField_InsertTime_len
		, &pForQuoteField_ForQuoteStatus
		, &pForQuoteField_FrontID
		, &pForQuoteField_SessionID
		, &pForQuoteField_StatusMsg, &pForQuoteField_StatusMsg_len
		, &pForQuoteField_ActiveUserID, &pForQuoteField_ActiveUserID_len
		, &pForQuoteField_BrokerForQutoSeq
		, &pForQuoteField_InvestUnitID, &pForQuoteField_InvestUnitID_len
		, &pForQuoteField_reserve3, &pForQuoteField_reserve3_len
		, &pForQuoteField_MacAddress, &pForQuoteField_MacAddress_len
		, &pForQuoteField_InstrumentID, &pForQuoteField_InstrumentID_len
		, &pForQuoteField_ExchangeInstID, &pForQuoteField_ExchangeInstID_len
		, &pForQuoteField_IPAddress, &pForQuoteField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pForQuoteField_BrokerID != NULL) {
		if(pForQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pForQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pForQuoteField_BrokerID, sizeof(self->data.BrokerID) );
		pForQuoteField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pForQuoteField_InvestorID != NULL) {
		if(pForQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pForQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pForQuoteField_InvestorID, sizeof(self->data.InvestorID) );
		pForQuoteField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pForQuoteField_reserve1 != NULL) {
		if(pForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pForQuoteField_reserve1, sizeof(self->data.reserve1) );
		pForQuoteField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pForQuoteField_ForQuoteRef != NULL) {
		if(pForQuoteField_ForQuoteRef_len > (Py_ssize_t)sizeof(self->data.ForQuoteRef)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteRef too long: length=%zd (max allowed is %zd)", pForQuoteField_ForQuoteRef_len, (Py_ssize_t)sizeof(self->data.ForQuoteRef));
			return -1;
		}
		strncpy(self->data.ForQuoteRef, pForQuoteField_ForQuoteRef, sizeof(self->data.ForQuoteRef) );
		pForQuoteField_ForQuoteRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pForQuoteField_UserID != NULL) {
		if(pForQuoteField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pForQuoteField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pForQuoteField_UserID, sizeof(self->data.UserID) );
		pForQuoteField_UserID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pForQuoteField_ForQuoteLocalID != NULL) {
		if(pForQuoteField_ForQuoteLocalID_len > (Py_ssize_t)sizeof(self->data.ForQuoteLocalID)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteLocalID too long: length=%zd (max allowed is %zd)", pForQuoteField_ForQuoteLocalID_len, (Py_ssize_t)sizeof(self->data.ForQuoteLocalID));
			return -1;
		}
		strncpy(self->data.ForQuoteLocalID, pForQuoteField_ForQuoteLocalID, sizeof(self->data.ForQuoteLocalID) );
		pForQuoteField_ForQuoteLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pForQuoteField_ExchangeID != NULL) {
		if(pForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pForQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pForQuoteField_ParticipantID != NULL) {
		if(pForQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pForQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pForQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
		pForQuoteField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pForQuoteField_ClientID != NULL) {
		if(pForQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pForQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pForQuoteField_ClientID, sizeof(self->data.ClientID) );
		pForQuoteField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pForQuoteField_reserve2 != NULL) {
		if(pForQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pForQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pForQuoteField_reserve2, sizeof(self->data.reserve2) );
		pForQuoteField_reserve2 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pForQuoteField_TraderID != NULL) {
		if(pForQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pForQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pForQuoteField_TraderID, sizeof(self->data.TraderID) );
		pForQuoteField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pForQuoteField_InstallID;

	//TThostFtdcDateType char[9]
	if(pForQuoteField_InsertDate != NULL) {
		if(pForQuoteField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pForQuoteField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pForQuoteField_InsertDate, sizeof(self->data.InsertDate) );
		pForQuoteField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pForQuoteField_InsertTime != NULL) {
		if(pForQuoteField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pForQuoteField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pForQuoteField_InsertTime, sizeof(self->data.InsertTime) );
		pForQuoteField_InsertTime = NULL;
	}

	//TThostFtdcForQuoteStatusType char
	self->data.ForQuoteStatus = pForQuoteField_ForQuoteStatus;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pForQuoteField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pForQuoteField_SessionID;

	//TThostFtdcErrorMsgType char[81]
	if(pForQuoteField_StatusMsg != NULL) {
		if(pForQuoteField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pForQuoteField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pForQuoteField_StatusMsg, sizeof(self->data.StatusMsg) );
		pForQuoteField_StatusMsg = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pForQuoteField_ActiveUserID != NULL) {
		if(pForQuoteField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
			PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", pForQuoteField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
			return -1;
		}
		strncpy(self->data.ActiveUserID, pForQuoteField_ActiveUserID, sizeof(self->data.ActiveUserID) );
		pForQuoteField_ActiveUserID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.BrokerForQutoSeq = pForQuoteField_BrokerForQutoSeq;

	//TThostFtdcInvestUnitIDType char[17]
	if(pForQuoteField_InvestUnitID != NULL) {
		if(pForQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pForQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pForQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pForQuoteField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pForQuoteField_reserve3 != NULL) {
		if(pForQuoteField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pForQuoteField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pForQuoteField_reserve3, sizeof(self->data.reserve3) );
		pForQuoteField_reserve3 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pForQuoteField_MacAddress != NULL) {
		if(pForQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pForQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pForQuoteField_MacAddress, sizeof(self->data.MacAddress) );
		pForQuoteField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pForQuoteField_InstrumentID != NULL) {
		if(pForQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pForQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pForQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
		pForQuoteField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pForQuoteField_ExchangeInstID != NULL) {
		if(pForQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pForQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pForQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pForQuoteField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pForQuoteField_IPAddress != NULL) {
		if(pForQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pForQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pForQuoteField_IPAddress, sizeof(self->data.IPAddress) );
		pForQuoteField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcForQuoteField_dealloc(PyCThostFtdcForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcForQuoteField_repr(PyCThostFtdcForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:i,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:c,s:i,s:i,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ForQuoteRef", self->data.ForQuoteRef 
		, "UserID", self->data.UserID 
		, "ForQuoteLocalID", self->data.ForQuoteLocalID 
		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "reserve2", self->data.reserve2 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "InsertDate", self->data.InsertDate 
		, "InsertTime", self->data.InsertTime 
		, "ForQuoteStatus", self->data.ForQuoteStatus
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "StatusMsg", self->data.StatusMsg 
		, "ActiveUserID", self->data.ActiveUserID 
		, "BrokerForQutoSeq", self->data.BrokerForQutoSeq
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve3", self->data.reserve3 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcForQuoteField_get_BrokerID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcForQuoteField_get_InvestorID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcForQuoteField_get_reserve1(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcForQuoteField_get_ForQuoteRef(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteRef);
}

static PyObject *PyCThostFtdcForQuoteField_get_UserID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcForQuoteField_get_ForQuoteLocalID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteLocalID);
}

static PyObject *PyCThostFtdcForQuoteField_get_ExchangeID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcForQuoteField_get_ParticipantID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcForQuoteField_get_ClientID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcForQuoteField_get_reserve2(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcForQuoteField_get_TraderID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcForQuoteField_get_InstallID(PyCThostFtdcForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcForQuoteField_get_InsertDate(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcForQuoteField_get_InsertTime(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcForQuoteField_get_ForQuoteStatus(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ForQuoteStatus), 1);
}

static PyObject *PyCThostFtdcForQuoteField_get_FrontID(PyCThostFtdcForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcForQuoteField_get_SessionID(PyCThostFtdcForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcForQuoteField_get_StatusMsg(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcForQuoteField_get_ActiveUserID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveUserID);
}

static PyObject *PyCThostFtdcForQuoteField_get_BrokerForQutoSeq(PyCThostFtdcForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BrokerForQutoSeq);
#else 
	return PyInt_FromLong(self->data.BrokerForQutoSeq);
#endif 
}

static PyObject *PyCThostFtdcForQuoteField_get_InvestUnitID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcForQuoteField_get_reserve3(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcForQuoteField_get_MacAddress(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcForQuoteField_get_InstrumentID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcForQuoteField_get_ExchangeInstID(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcForQuoteField_get_IPAddress(PyCThostFtdcForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcForQuoteField_set_BrokerID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_InvestorID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_reserve1(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_ForQuoteRef(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteRef)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ForQuoteRef, buf, sizeof(self->data.ForQuoteRef));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_UserID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_ForQuoteLocalID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.ForQuoteLocalID, buf, sizeof(self->data.ForQuoteLocalID));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_ExchangeID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_ParticipantID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_ClientID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_reserve2(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_TraderID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_InstallID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_InsertDate(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_InsertTime(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.InsertTime, buf, sizeof(self->data.InsertTime));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_ForQuoteStatus(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteStatus)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteStatus must be less than 1 bytes");
		return -1;
	}
	self->data.ForQuoteStatus = *buf;
	return 0;
}

static int PyCThostFtdcForQuoteField_set_FrontID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int"); 
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
    self->data.FrontID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcForQuoteField_set_SessionID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int"); 
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
    self->data.SessionID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcForQuoteField_set_StatusMsg(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_ActiveUserID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
		PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.ActiveUserID, buf, sizeof(self->data.ActiveUserID));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_BrokerForQutoSeq(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerForQutoSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BrokerForQutoSeq Expected int"); 
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
    self->data.BrokerForQutoSeq = (int)buf; 
    return 0; 
}

static int PyCThostFtdcForQuoteField_set_InvestUnitID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
		PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_reserve3(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve3)) {
		PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
	return 0;
}

static int PyCThostFtdcForQuoteField_set_MacAddress(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_InstrumentID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_ExchangeInstID(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForQuoteField_set_IPAddress(PyCThostFtdcForQuoteField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcForQuoteField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcForQuoteField_get_BrokerID, (setter)PyCThostFtdcForQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcForQuoteField_get_InvestorID, (setter)PyCThostFtdcForQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcForQuoteField_get_reserve1, (setter)PyCThostFtdcForQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ForQuoteRef", (getter)PyCThostFtdcForQuoteField_get_ForQuoteRef, (setter)PyCThostFtdcForQuoteField_set_ForQuoteRef, (char *)"ForQuoteRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcForQuoteField_get_UserID, (setter)PyCThostFtdcForQuoteField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ForQuoteLocalID", (getter)PyCThostFtdcForQuoteField_get_ForQuoteLocalID, (setter)PyCThostFtdcForQuoteField_set_ForQuoteLocalID, (char *)"ForQuoteLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcForQuoteField_get_ExchangeID, (setter)PyCThostFtdcForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcForQuoteField_get_ParticipantID, (setter)PyCThostFtdcForQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcForQuoteField_get_ClientID, (setter)PyCThostFtdcForQuoteField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcForQuoteField_get_reserve2, (setter)PyCThostFtdcForQuoteField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcForQuoteField_get_TraderID, (setter)PyCThostFtdcForQuoteField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcForQuoteField_get_InstallID, (setter)PyCThostFtdcForQuoteField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcForQuoteField_get_InsertDate, (setter)PyCThostFtdcForQuoteField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcForQuoteField_get_InsertTime, (setter)PyCThostFtdcForQuoteField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"ForQuoteStatus", (getter)PyCThostFtdcForQuoteField_get_ForQuoteStatus, (setter)PyCThostFtdcForQuoteField_set_ForQuoteStatus, (char *)"ForQuoteStatus", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcForQuoteField_get_FrontID, (setter)PyCThostFtdcForQuoteField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcForQuoteField_get_SessionID, (setter)PyCThostFtdcForQuoteField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcForQuoteField_get_StatusMsg, (setter)PyCThostFtdcForQuoteField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"ActiveUserID", (getter)PyCThostFtdcForQuoteField_get_ActiveUserID, (setter)PyCThostFtdcForQuoteField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
	 {(char *)"BrokerForQutoSeq", (getter)PyCThostFtdcForQuoteField_get_BrokerForQutoSeq, (setter)PyCThostFtdcForQuoteField_set_BrokerForQutoSeq, (char *)"BrokerForQutoSeq", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcForQuoteField_get_InvestUnitID, (setter)PyCThostFtdcForQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcForQuoteField_get_reserve3, (setter)PyCThostFtdcForQuoteField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcForQuoteField_get_MacAddress, (setter)PyCThostFtdcForQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcForQuoteField_get_InstrumentID, (setter)PyCThostFtdcForQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcForQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcForQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcForQuoteField_get_IPAddress, (setter)PyCThostFtdcForQuoteField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcForQuoteField", (PyObject *)&PyCThostFtdcForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForQuoteField to module");
        Py_DECREF(&PyCThostFtdcForQuoteFieldType);
		return -1;
    }

    return 0;
}
