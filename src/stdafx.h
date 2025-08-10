// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#ifndef PYCTP_STDAFX_H
#define PYCTP_STDAFX_H

#define PY_SSIZE_T_CLEAN
#include <Python.h>

#define PyCTP_FUNCTION_MAGIC(_in_class, _in_fun) \
	static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { \
	(( _in_class *) self)->api->_in_fun(); \
	Py_RETURN_NONE; }

#define PyCTP_FUNCTION_MAGIC_INT(_in_class, _in_fun) \
	static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { \
	int ret = (( _in_class *) self)->api->_in_fun(); \
	return PyLong_FromLong(ret); }

#define PyCTP_FUNCTION_MAGIC_STRING(_in_class, _in_fun) \
	static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { \
	return PyBytes_FromString((( _in_class *) self)->api->_in_fun()); }

#if PY_MAJOR_VERSION >= 3
    #define PyCTP_FUNCTION_MAGIC_VOID_STRING(_in_class, _in_fun) \
        static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { char *pStr = nullptr; \
        if (!PyArg_ParseTuple(args, "y", &pStr)) { PyErr_SetString(PyExc_ValueError, "parameter invalid."); return nullptr; } \
        (( _in_class *) self)->api->_in_fun(pStr); \
        Py_RETURN_NONE; }
#else
    #define PyCTP_FUNCTION_MAGIC_VOID_STRING(_in_class, _in_fun) \
        static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { char *pStr = nullptr; \
        if (!PyArg_ParseTuple(args, "s", &pStr)) { PyErr_SetString(PyExc_ValueError, "parameter invalid."); return nullptr; } \
        (( _in_class *) self)->api->_in_fun(pStr); \
        Py_RETURN_NONE; }
#endif

#define PyCTP_FUNCTION_MAGIC_VOID_STRUCT(_in_class, _in_fun, _in_type) \
    static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { \
	PyObject *pArg1 = nullptr; \
	if (!PyArg_ParseTuple(args, "O", &pArg1)) { PyErr_SetString( PyExc_ValueError, "The parameter invalid." ); return nullptr; } \
    if (!PyObject_TypeCheck(pArg1, &Py##_in_type##Type )) { PyErr_Format( PyExc_TypeError, "Expected a %s instance", #_in_type); return NULL; } \
	Py##_in_type *arg1 = (Py##_in_type *)pArg1; \
	(( _in_class *) self)->api->_in_fun(&(arg1->data)); \
	Py_RETURN_NONE; }

#define PyCTP_FUNCTION_MAGIC_INT_STRUCT(_in_class, _in_fun, _in_type) \
	static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { \
	int ret; PyObject *pArg1 = nullptr; \
	if (!PyArg_ParseTuple(args, "O", &pArg1)) { PyErr_SetString( PyExc_ValueError, "The parameter invalid." ); return nullptr; } \
    if (!PyObject_TypeCheck(pArg1, &Py##_in_type##Type )) { PyErr_Format( PyExc_TypeError, "param 1 expected a %s instance", #_in_type); return NULL; } \
	Py##_in_type *arg1 = (Py##_in_type *)pArg1; \
	ret = (( _in_class *) self)->api->_in_fun(&(arg1->data)); \
	return PyLong_FromLong(ret); }

#define PyCTP_FUNCTION_MAGIC_INT_STRUCT_INT(_in_class, _in_fun, _in_type) \
    static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { \
	int arg2, ret; PyObject *pArg1 = nullptr; \
	if (!PyArg_ParseTuple(args, "Oi", &pArg1, &arg2)) { PyErr_SetString( PyExc_ValueError, "The parameter invalid." ); return nullptr; } \
    if (!PyObject_TypeCheck(pArg1, &Py##_in_type##Type )) { PyErr_Format( PyExc_TypeError, "param 1 expected a %s instance", #_in_type); return NULL; } \
	Py##_in_type *arg1 = (Py##_in_type *)pArg1; \
	ret = (( _in_class *) self)->api->_in_fun(&(arg1->data), arg2); \
	return PyLong_FromLong(ret); }

#define PyCTP_FUNCTION_MAGIC_INT_SUBSCRIBE(_in_class, _in_fun) \
	static PyObject* _in_class##_##_in_fun(PyObject *self, PyObject *args) { \
	PyListObject *py_ppInstrumentID = nullptr; int nCount, ret; char **ppInstrumentID; \
	if ( !PyArg_ParseTuple(args, "Oi", &py_ppInstrumentID, &nCount) ) { PyErr_SetString(PyExc_ValueError, "parameter invalid."); return nullptr; } \
	if( !PyList_Check((PyObject *) py_ppInstrumentID) ) { PyErr_SetString(PyExc_TypeError, "first parameter must is PyList."); return nullptr; } \
	if( PyList_Size((PyObject *) py_ppInstrumentID) != nCount ) { PyErr_SetString(PyExc_ValueError, "nCount invalid."); return nullptr; } \
	ppInstrumentID = new char*[nCount]; \
	for(int i=0; i < nCount; i++) { \
	PyObject* item = PyList_GetItem((PyObject *) py_ppInstrumentID, i); \
	if( !PyBytes_Check(item) ) { PyErr_SetString(PyExc_TypeError, "Instrument ID must is bytes"); return nullptr; } \
	ppInstrumentID[i] = PyBytes_AsString(item); } \
	ret = ((_in_class *) self)->api->_in_fun(ppInstrumentID, nCount); \
	delete[] ppInstrumentID; return PyLong_FromLong(ret); }

#endif
