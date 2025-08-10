//行情API转PyCTP

#ifndef PYCTP_MDAPI_H
#define PYCTP_MDAPI_H

#include "stdafx.h"
#include <ThostFtdcMdApi.h>

// 行情Py结构类
typedef struct CTP_THOST_FTDC_MD_API
{
	PyObject_HEAD
    /* Type-specific fields go here. */
	CThostFtdcMdApi *api; /* 行情api */
	CThostFtdcMdSpi *spi; /* 行情回调spi */
	PyObject *pySpi;	  /* py代码回调 */
} CTP_THOST_FTDC_MD_API;

// 行情结构py类型定义
extern PyTypeObject CTP_THOST_FTDC_MD_API_TYPE;

extern int CTP_THOST_FTDC_MD_API_TYPE_init(PyObject *module);

#endif
