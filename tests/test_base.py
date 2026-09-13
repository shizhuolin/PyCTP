#!/usr/bin/env python3
"""
Created on Wed Sep  9 17:56:52 2026.

@author: -
"""
import sys
import sysconfig
import math
import unittest

print(f"Python version: {sys.version}")

# 1. Check if compile-time free-threading support wad enabled
is_ft_build = sysconfig.get_config_var("Py_GIL_DISABLED") == 1
print(f"Compile-time free-threading support (--disable-gil): {is_ft_build}")

# 2. Check if GIL is actually enabled at runtime (only available in 3.13+)
if hasattr(sys, "_is_gil_enabled"):
    gil_enabled = sys._is_gil_enabled()  # pylint: disable=protected-access
    print(f"Runtime GIL enabled: {gil_enabled}")
    if not gil_enabled:
        print(">>> Interpreter is running in free-threaded (no GIL) mode")
    else:
        print(">>> Interpreter is running traditional GIL mode")
else:
    print(">>> Cannot detect runtime GIL status (requires Python 3.13+)")



import PyCTP  # pylint: disable=import-error

SHRT_MAX = 32767
SHRT_MIN = -32768
INT_MAX = 2147483647
INT_MIN = -2147483648
DBL_MAX = 1.7976931348623157e+308
DBL_MIN = 2.2250738585072014e-308

tc = unittest.TestCase()

assert isinstance(PyCTP.THOST_TERT_RESTART, int)
assert PyCTP.THOST_TERT_RESTART == 0
assert isinstance(PyCTP.THOST_TERT_RESUME_FROM_SEQ_NO, int)
assert PyCTP.THOST_TERT_RESUME_FROM_SEQ_NO == 4

assert isinstance(PyCTP.THOST_FTDC_CFMMCKK_AUTO, bytes)
assert PyCTP.THOST_FTDC_CFMMCKK_AUTO == b'A'

assert isinstance(PyCTP.THOST_FTDC_FTC_BrokerLaunchBrokerToBank, bytes)
assert PyCTP.THOST_FTDC_FTC_BrokerLaunchBrokerToBank == b'202002'

assert isinstance(PyCTP.THOST_FTDC_BAT_SavingCard, bytes)
assert PyCTP.THOST_FTDC_BAT_SavingCard == b'2'

assert isinstance(PyCTP.CThostFtdcDisseminationField().SequenceSeries, int)
assert isinstance(PyCTP.CThostFtdcDisseminationField().SequenceNo, int)

# signed short / short
assert PyCTP.CThostFtdcDisseminationField(SequenceSeries=SHRT_MAX).SequenceSeries == SHRT_MAX
assert PyCTP.CThostFtdcDisseminationField(SequenceSeries=SHRT_MIN).SequenceSeries == SHRT_MIN
with tc.assertRaises(OverflowError):
    PyCTP.CThostFtdcDisseminationField(SequenceSeries=SHRT_MAX+1)
with tc.assertRaises(OverflowError):
    PyCTP.CThostFtdcDisseminationField(SequenceSeries=SHRT_MIN-1)
field = PyCTP.CThostFtdcDisseminationField()
field.SequenceSeries = SHRT_MAX
assert field.SequenceSeries == SHRT_MAX
field.SequenceSeries = SHRT_MIN
assert field.SequenceSeries == SHRT_MIN
with tc.assertWarns(RuntimeWarning):
    field.SequenceSeries = SHRT_MAX+1
with tc.assertWarns(RuntimeWarning):
    field.SequenceSeries = SHRT_MIN-1

# signed int / int
assert PyCTP.CThostFtdcDisseminationField(SequenceNo=INT_MAX).SequenceNo == INT_MAX
assert PyCTP.CThostFtdcDisseminationField(SequenceNo=SHRT_MIN).SequenceNo == SHRT_MIN
with tc.assertRaises(OverflowError):
    PyCTP.CThostFtdcDisseminationField(SequenceNo=INT_MAX+1)
with tc.assertRaises(OverflowError):
    PyCTP.CThostFtdcDisseminationField(SequenceNo=INT_MIN-1)
field = PyCTP.CThostFtdcDisseminationField()
field.SequenceNo = INT_MAX
assert field.SequenceNo == INT_MAX
field.SequenceNo = INT_MIN
assert field.SequenceNo == INT_MIN
with tc.assertWarns(RuntimeWarning):
    field.SequenceNo = INT_MAX+1
with tc.assertWarns(RuntimeWarning):
    field.SequenceNo = INT_MIN-1

# signed double
field = PyCTP.CThostFtdcDepthMarketDataField(LastPrice=DBL_MAX)
assert field.LastPrice == DBL_MAX

field = PyCTP.CThostFtdcDepthMarketDataField(LastPrice=-DBL_MAX)
assert field.LastPrice == -DBL_MAX

field = PyCTP.CThostFtdcDepthMarketDataField(LastPrice=DBL_MAX + 1.996e292)
assert math.isinf(field.LastPrice) and field.LastPrice > 0

field = PyCTP.CThostFtdcDepthMarketDataField(LastPrice=-DBL_MAX - 1.996e292)
assert math.isinf(field.LastPrice) and field.LastPrice < 0

field = PyCTP.CThostFtdcDepthMarketDataField()
field.LastPrice=DBL_MAX
assert field.LastPrice==DBL_MAX

field.LastPrice=-DBL_MAX
assert field.LastPrice==-DBL_MAX

field.LastPrice=DBL_MAX + 1.996e292
assert math.isinf(field.LastPrice) and field.LastPrice > 0

field.LastPrice=-DBL_MAX - 1.996e292
assert math.isinf(field.LastPrice) and field.LastPrice < 0


assert PyCTP.CThostFtdcDepthMarketDataField(TradingDay=b'').TradingDay == b''
assert PyCTP.CThostFtdcDepthMarketDataField(TradingDay=b'123').TradingDay == b'123'
assert PyCTP.CThostFtdcDepthMarketDataField(TradingDay=b'12345678').TradingDay == b'12345678'
with tc.assertRaises(ValueError):
    PyCTP.CThostFtdcDepthMarketDataField(TradingDay=b'123456789')

field = PyCTP.CThostFtdcDepthMarketDataField()
with tc.assertRaises(ValueError):
    field.TradingDay=b'123456789'
field.TradingDay=b'12345678'
assert field.TradingDay==b'12345678'
field.TradingDay=b''
assert field.TradingDay==b''

field.TradingDay=b'1234'
assert field.TradingDay==b'1234'

assert PyCTP.CThostFtdcExchangeCombActionField().HedgeFlag == b'\x00'
assert PyCTP.CThostFtdcExchangeCombActionField(HedgeFlag=b'a').HedgeFlag == b'a'
with tc.assertRaises(TypeError):
    PyCTP.CThostFtdcExchangeCombActionField(HedgeFlag=b'aa')
field = PyCTP.CThostFtdcExchangeCombActionField()

with tc.assertRaises(ValueError):
    field.HedgeFlag=b'bb'

field.HedgeFlag=b'c'
assert field.HedgeFlag==b'c'

field.HedgeFlag=b''
assert field.HedgeFlag==b'\x00'

with tc.assertRaises(TypeError):
    class TestClass(PyCTP.CThostFtdcExchangeCombActionField):
        pass

class TestClass(PyCTP.CThostFtdcMdApi):
    pass

