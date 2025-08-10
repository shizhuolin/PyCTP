//交易API转PyCTP

#ifndef PYCTP_TRADERAPI_H
#define PYCTP_TRADERAPI_H

#include "stdafx.h"
#include <ThostFtdcTraderApi.h>

// 交易Py结构类
typedef struct CTP_THOST_FTDC_TRADER_API
{
	PyObject_HEAD
	/* Type-specific fields go here. */
	CThostFtdcTraderApi *api;	/* 交易api */
	CThostFtdcTraderSpi *spi;	/* 交易回调spi */
	PyObject *pySpi;			/* py代码回调 */
} CTP_THOST_FTDC_TRADER_API;

// 交易结构py类型定义
extern PyTypeObject CTP_THOST_FTDC_TRADER_API_TYPE;

extern int CTP_THOST_FTDC_TRADER_API_TYPE_init(PyObject *module);

#endif
