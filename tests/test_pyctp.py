#!/usr/bin/env python
# -*- coding: utf-8 -*-
# pylint: disable=useless-object-inheritance
# pylint: disable=super-with-arguments
# pylint: disable=consider-using-f-string
# pylint: disable=too-few-public-methods
# pylint: disable=too-many-public-methods
# pylint: disable=too-many-lines
# pylint: disable=too-many-instance-attributes
# pylint: disable=too-many-locals
# pylint: disable=too-many-statements
# pylint: disable=too-many-arguments
# pylint: disable=too-many-branches
# pylint: disable=too-many-positional-arguments
# ruff: noqa: UP004
# ruff: noqa: UP008
# ruff: noqa: UP009
# ruff: noqa: UP010
# ruff: noqa: UP031
# ruff: noqa: UP036
"""
Example and test code for PyCTP.

Created on Sat Jul 30 17:19:21 2025

@author: zhuolin
"""
from __future__ import print_function

import getpass
import logging
import os
import sys
import threading
import unicodedata

import PyCTP

logger = logging.getLogger(__name__)

# pylint: disable=invalid-name

# TFtdcTradingRoleType是一个交易角色类型
TThostFtdcTradingRoleType = {
    PyCTP.THOST_FTDC_ER_Broker: '代理',
    PyCTP.THOST_FTDC_ER_Host: '自营',
    PyCTP.THOST_FTDC_ER_Maker: '做市商'
}

# TFtdcTradeSourceType是一个成交来源类型
TThostFtdcTradeSourceType = {
    PyCTP.THOST_FTDC_TSRC_NORMAL: '来自交易所普通回报',
    PyCTP.THOST_FTDC_TSRC_QUERY: '来自查询'
}

# TFtdcPriceSourceType是一个成交价来源类型
TThostFtdcPriceSourceType = {
    PyCTP.THOST_FTDC_PSRC_LastPrice: '前成交价',
    PyCTP.THOST_FTDC_PSRC_Buy: '买委托价',
    PyCTP.THOST_FTDC_PSRC_Sell: '卖委托价',
    PyCTP.THOST_FTDC_PSRC_OTC: '场外成交价'
}

# TFtdcTimeConditionType是一个有效期类型类型
TThostFtdcTimeConditionType = {
    PyCTP.THOST_FTDC_TC_IOC: '立即完成，否则撤销',
    PyCTP.THOST_FTDC_TC_GFS: '本节有效',
    PyCTP.THOST_FTDC_TC_GFD: '当日有效',
    PyCTP.THOST_FTDC_TC_GTD: '指定日期前有效',
    PyCTP.THOST_FTDC_TC_GTC: '撤销前有效',
    PyCTP.THOST_FTDC_TC_GFA: '集合竞价有效'
    }

# TFtdcOrderTypeType是一个报单类型类型
TThostFtdcOrderTypeType = {
    PyCTP.THOST_FTDC_ORDT_Normal: '正常',
    PyCTP.THOST_FTDC_ORDT_DeriveFromQuote: '报价衍生',
    PyCTP.THOST_FTDC_ORDT_DeriveFromCombination: '组合衍生',
    PyCTP.THOST_FTDC_ORDT_Combination: '组合报单',
    PyCTP.THOST_FTDC_ORDT_ConditionalOrder: '条件单',
    PyCTP.THOST_FTDC_ORDT_Swap: '互换单',
    PyCTP.THOST_FTDC_ORDT_DeriveFromBlockTrade: '大宗交易成交衍生',
    PyCTP.THOST_FTDC_ORDT_DeriveFromEFPTrade: '期转现成交衍生'
    }

# TFtdcOrderSubmitStatusType是一个报单提交状态类型
TThostFtdcOrderSubmitStatusType = {
    PyCTP.THOST_FTDC_OSS_InsertSubmitted: '已经提交',
    PyCTP.THOST_FTDC_OSS_CancelSubmitted: '撤单已经提交',
    PyCTP.THOST_FTDC_OSS_ModifySubmitted: '修改已经提交',
    PyCTP.THOST_FTDC_OSS_Accepted: '已经接受',
    PyCTP.THOST_FTDC_OSS_InsertRejected: '报单已经被拒绝',
    PyCTP.THOST_FTDC_OSS_CancelRejected: '撤单已经被拒绝',
    PyCTP.THOST_FTDC_OSS_ModifyRejected: '改单已经被拒绝'
    }

# TFtdcOrderStatusType是一个报单状态类型
TThostFtdcOrderStatusType = {
    PyCTP.THOST_FTDC_OST_AllTraded: '全部成交',
    PyCTP.THOST_FTDC_OST_PartTradedQueueing: '部分成交还在队列中',
    PyCTP.THOST_FTDC_OST_PartTradedNotQueueing: '部分成交不在队列中',
    PyCTP.THOST_FTDC_OST_NoTradeQueueing: '未成交还在队列中',
    PyCTP.THOST_FTDC_OST_NoTradeNotQueueing: '未成交不在队列中',
    PyCTP.THOST_FTDC_OST_Canceled: '撤单',
    PyCTP.THOST_FTDC_OST_Unknown: '未知',
    PyCTP.THOST_FTDC_OST_NotTouched: '尚未触发',
    PyCTP.THOST_FTDC_OST_Touched: '已触发'
    }

# TFtdcForceCloseReasonType是一个强平原因类型
TThostFtdcForceCloseReasonType = {
    PyCTP.THOST_FTDC_FCC_NotForceClose: '非强平',
    PyCTP.THOST_FTDC_FCC_LackDeposit: '资金不足',
    PyCTP.THOST_FTDC_FCC_ClientOverPositionLimit: '客户超仓',
    PyCTP.THOST_FTDC_FCC_MemberOverPositionLimit: '会员超仓',
    PyCTP.THOST_FTDC_FCC_NotMultiple: '持仓非整数倍',
    PyCTP.THOST_FTDC_FCC_Violation: '违规',
    PyCTP.THOST_FTDC_FCC_Other: '其它',
    PyCTP.THOST_FTDC_FCC_PersonDeliv: '自然人临近交割',
    PyCTP.THOST_FTDC_FCC_Notverifycapital: '本地强平资金不足忽略敞口',
    PyCTP.THOST_FTDC_FCC_LocalLackDeposit: '本地强平资金不足',
    PyCTP.THOST_FTDC_FCC_LocalViolationNocheck: '本地强平违规持仓忽略敞口',
    PyCTP.THOST_FTDC_FCC_LocalViolation: '本地强平违规持仓'
    }

# TFtdcContingentConditionType是一个触发条件类型
TThostFtdcContingentConditionType = {
    PyCTP.THOST_FTDC_CC_Immediately: '立即',
    PyCTP.THOST_FTDC_CC_Touch: '止损',
    PyCTP.THOST_FTDC_CC_TouchProfit: '止赢',
    PyCTP.THOST_FTDC_CC_ParkedOrder: '预埋单',
    PyCTP.THOST_FTDC_CC_LastPriceGreaterThanStopPrice: '最新价大于条件价',
    PyCTP.THOST_FTDC_CC_LastPriceGreaterEqualStopPrice: '最新价大于等于条件价',
    PyCTP.THOST_FTDC_CC_LastPriceLesserThanStopPrice: '最新价小于条件价',
    PyCTP.THOST_FTDC_CC_LastPriceLesserEqualStopPrice: '最新价小于等于条件价',
    PyCTP.THOST_FTDC_CC_AskPriceGreaterThanStopPrice: '卖一价大于条件价',
    PyCTP.THOST_FTDC_CC_AskPriceGreaterEqualStopPrice: '卖一价大于等于条件价',
    PyCTP.THOST_FTDC_CC_AskPriceLesserThanStopPrice: '卖一价小于条件价',
    PyCTP.THOST_FTDC_CC_AskPriceLesserEqualStopPrice: '卖一价小于等于条件价',
    PyCTP.THOST_FTDC_CC_BidPriceGreaterThanStopPrice: '买一价大于条件价',
    PyCTP.THOST_FTDC_CC_BidPriceGreaterEqualStopPrice: '买一价大于等于条件价',
    PyCTP.THOST_FTDC_CC_BidPriceLesserThanStopPrice: '买一价小于条件价',
    PyCTP.THOST_FTDC_CC_BidPriceLesserEqualStopPrice: '买一价小于等于条件价'
    }

# TFtdcOrderSourceType是一个报单来源类型
TThostFtdcOrderSourceType = {
    PyCTP.THOST_FTDC_OSRC_Participant: '来自参与者',
    PyCTP.THOST_FTDC_OSRC_Administrator: '来自管理员'
    }

# TFtdcVolumeConditionType是一个成交量类型类型
TThostFtdcVolumeConditionType = {
    PyCTP.THOST_FTDC_VC_AV: '任何数量',
    PyCTP.THOST_FTDC_VC_MV: '最小数量',
    PyCTP.THOST_FTDC_VC_CV: '全部数量'
    }

# TFtdcSpecPosiTypeType是一个特殊持仓明细标识类型
TThostFtdcSpecPosiTypeType = {
    PyCTP.THOST_FTDC_SPOST_Common: '普通持仓明细',
    PyCTP.THOST_FTDC_SPOST_Tas: 'TAS合约成交产生的标的合约持仓明细'
    }

# TFtdcPositionDateType是一个持仓日期类型
TThostFtdcPositionDateType = {
    PyCTP.THOST_FTDC_PSD_Today: '今日持仓',
    PyCTP.THOST_FTDC_PSD_History: '历史持仓'
    }

# TFtdcOptionsTypeType是一个期权类型类型
TThostFtdcOptionsTypeType = {
    PyCTP.THOST_FTDC_CP_CallOptions: '看涨',
    PyCTP.THOST_FTDC_CP_PutOptions: '看跌'
    }

# TFtdcPositionTypeType是一个持仓类型类型
TThostFtdcPositionTypeType = {
    PyCTP.THOST_FTDC_PT_Net: '净持仓',
    PyCTP.THOST_FTDC_PT_Gross: '综合持仓'
    }

# TFtdcPositionDateTypeType是一个持仓日期类型类型
TThostFtdcPositionDateTypeType = {
    PyCTP.THOST_FTDC_PDT_UseHistory: '使用历史持仓',
    PyCTP.THOST_FTDC_PDT_NoUseHistory: '不使用历史持仓'
    }

# TFtdcMaxMarginSideAlgorithmType是一个大额单边保证金算法类型
TThostFtdcMaxMarginSideAlgorithmType = {
    PyCTP.THOST_FTDC_MMSA_NO: '不使用大额单边保证金算法',
    PyCTP.THOST_FTDC_MMSA_YES: '使用大额单边保证金算法'
    }

# TFtdcCombinationTypeType是一个组合类型类型
TThostFtdcCombinationTypeType = {
    PyCTP.THOST_FTDC_COMBT_Future: '期货组合',
    PyCTP.THOST_FTDC_COMBT_BUL: '垂直价差BUL',
    PyCTP.THOST_FTDC_COMBT_BER: '垂直价差BER',
    PyCTP.THOST_FTDC_COMBT_STD: '跨式组合',
    PyCTP.THOST_FTDC_COMBT_STG: '宽跨式组合',
    PyCTP.THOST_FTDC_COMBT_PRT: '备兑组合',
    PyCTP.THOST_FTDC_COMBT_CAS: '时间价差组合',
    PyCTP.THOST_FTDC_COMBT_OPL: '期权对锁组合',
    PyCTP.THOST_FTDC_COMBT_BFO: '买备兑组合',
    PyCTP.THOST_FTDC_COMBT_BLS: '买入期权垂直价差组合',
    PyCTP.THOST_FTDC_COMBT_BES: '卖出期权垂直价差组合'
}

# TFtdcInstLifePhaseType是一个合约生命周期状态类型
TThostFtdcInstLifePhaseType = {
    PyCTP.THOST_FTDC_IP_NotStart: '未上市',
    PyCTP.THOST_FTDC_IP_Started: '上市',
    PyCTP.THOST_FTDC_IP_Pause: '停牌',
    PyCTP.THOST_FTDC_IP_Expired: '到期'
    }

# TFtdcOffsetFlagType是一个开平标志类型
TThostFtdcOffsetFlagType = {
    PyCTP.THOST_FTDC_OF_Open: '开仓',
    PyCTP.THOST_FTDC_OF_Close: '平仓',
    PyCTP.THOST_FTDC_OF_ForceClose: '强平',
    PyCTP.THOST_FTDC_OF_CloseToday: '平今',
    PyCTP.THOST_FTDC_OF_CloseYesterday: '平昨',
    PyCTP.THOST_FTDC_OF_ForceOff: '强减',
    PyCTP.THOST_FTDC_OF_LocalForceClose: '本地强平'
    }

# TFtdcInstrumentStatusType是一个合约交易状态类型
TThostFtdcInstrumentStatusType = {
    PyCTP.THOST_FTDC_IS_BeforeTrading: '开盘前',
    PyCTP.THOST_FTDC_IS_NoTrading: '非交易',
    PyCTP.THOST_FTDC_IS_Continous: '连续交易',
    PyCTP.THOST_FTDC_IS_AuctionOrdering: '集合竞价报单',
    PyCTP.THOST_FTDC_IS_AuctionBalance: '集合竞价价格平衡',
    PyCTP.THOST_FTDC_IS_AuctionMatch: '集合竞价撮合',
    PyCTP.THOST_FTDC_IS_Closed: '收盘',
    PyCTP.THOST_FTDC_IS_TransactionProcessing: '交易业务处理'
    }

# TFtdcOrderPriceTypeType是一个报单价格条件类型
TThostFtdcOrderPriceTypeType = {
    PyCTP.THOST_FTDC_OPT_AnyPrice: '任意价',
    PyCTP.THOST_FTDC_OPT_LimitPrice: '限价',
    PyCTP.THOST_FTDC_OPT_BestPrice: '最优价',
    PyCTP.THOST_FTDC_OPT_LastPrice: '最新价',
    PyCTP.THOST_FTDC_OPT_LastPricePlusOneTicks: '最新价浮动上浮1个ticks',
    PyCTP.THOST_FTDC_OPT_LastPricePlusTwoTicks: '最新价浮动上浮2个ticks',
    PyCTP.THOST_FTDC_OPT_LastPricePlusThreeTicks: '最新价浮动上浮3个ticks',
    PyCTP.THOST_FTDC_OPT_AskPrice1: '卖一价',
    PyCTP.THOST_FTDC_OPT_AskPrice1PlusOneTicks: '卖一价浮动上浮1个ticks',
    PyCTP.THOST_FTDC_OPT_AskPrice1PlusTwoTicks: '卖一价浮动上浮2个ticks',
    PyCTP.THOST_FTDC_OPT_AskPrice1PlusThreeTicks: '卖一价浮动上浮3个ticks',
    PyCTP.THOST_FTDC_OPT_BidPrice1: '买一价',
    PyCTP.THOST_FTDC_OPT_BidPrice1PlusOneTicks: '买一价浮动上浮1个ticks',
    PyCTP.THOST_FTDC_OPT_BidPrice1PlusTwoTicks: '买一价浮动上浮2个ticks',
    PyCTP.THOST_FTDC_OPT_BidPrice1PlusThreeTicks: '买一价浮动上浮3个ticks',
    PyCTP.THOST_FTDC_OPT_FiveLevelPrice: '五档价',
    }

# TFtdcHedgeFlagType是一个投机套保标志类型
TThostFtdcHedgeFlagType = {
    PyCTP.THOST_FTDC_HF_Speculation: '投机',
    PyCTP.THOST_FTDC_HF_Arbitrage: '套利',
    PyCTP.THOST_FTDC_HF_Hedge: '套保',
    PyCTP.THOST_FTDC_HF_MarketMaker: '做市商',
    PyCTP.THOST_FTDC_HF_SpecHedge: '第一腿投机第二腿套保',
    PyCTP.THOST_FTDC_HF_HedgeSpec: '第一腿套保第二腿投机'
    }

# TFtdcDirectionType是一个买卖方向类型
TThostFtdcDirectionType = {
    PyCTP.THOST_FTDC_D_Buy: '买',
    PyCTP.THOST_FTDC_D_Sell: '卖'
    }

# TFtdcTradeTypeType是一个成交类型类型
TThostFtdcTradeTypeType = {
    PyCTP.THOST_FTDC_TRDT_SplitCombination: '组合拆分',
    PyCTP.THOST_FTDC_TRDT_Common: '普通成交',
    PyCTP.THOST_FTDC_TRDT_OptionsExecution: '期权执行',
    PyCTP.THOST_FTDC_TRDT_OTC: 'OTC成交',
    PyCTP.THOST_FTDC_TRDT_EFPDerived: '期转现衍生成交',
    PyCTP.THOST_FTDC_TRDT_CombinationDerived: '组合衍生成交',
    PyCTP.THOST_FTDC_TRDT_BlockTrade: '大宗交易成交'
    }

# TFtdcPosiDirectionType是一个持仓多空方向类型
TThostFtdcPosiDirectionType = {
    PyCTP.THOST_FTDC_PD_Net: '净',
    PyCTP.THOST_FTDC_PD_Long: '多头',
    PyCTP.THOST_FTDC_PD_Short: '空头'
    }

# TFtdcInvestorRangeType是一个投资者范围类型
TThostFtdcInvestorRangeType = {
    PyCTP.THOST_FTDC_IR_All: '所有',
    PyCTP.THOST_FTDC_IR_Group: '投资者组',
    PyCTP.THOST_FTDC_IR_Single: '单一投资者'
    }

# TFtdcProductClassType是一个产品类型类型
TThostFtdcProductClassType = {
    PyCTP.THOST_FTDC_PC_Futures: '期货',
    PyCTP.THOST_FTDC_PC_Options: '期货期权',
    PyCTP.THOST_FTDC_PC_Combination: '组合',
    PyCTP.THOST_FTDC_PC_Spot: '即期',
    PyCTP.THOST_FTDC_PC_EFP: '期转现',
    PyCTP.THOST_FTDC_PC_SpotOption: '现货期权',
    PyCTP.THOST_FTDC_PC_TAS: 'TAS合约',
    PyCTP.THOST_FTDC_PC_MI: '金属指数',
    }

# TFtdcExchangePropertyType是一个交易所属性类型
TThostFtdcExchangePropertyType = {
    PyCTP.THOST_FTDC_EXP_Normal: '正常',
    PyCTP.THOST_FTDC_EXP_GenOrderByTrade: '根据成交生成报单'
    }

# TFtdcEnumBoolType是一个枚举bool类型类型
TThostFtdcEnumBoolType = {
    PyCTP.THOST_FTDC_EBL_False: 'false',
    PyCTP.THOST_FTDC_EBL_True: 'true'
    }

# TFtdcIdCardTypeType是一个证件类型类型
TThostFtdcIdCardTypeType = {
    PyCTP.THOST_FTDC_ICT_EID: '组织机构代码',
    PyCTP.THOST_FTDC_ICT_IDCard: '中国公民身份证',
    PyCTP.THOST_FTDC_ICT_OfficerIDCard: '军官证',
    PyCTP.THOST_FTDC_ICT_PoliceIDCard: '警官证',
    PyCTP.THOST_FTDC_ICT_SoldierIDCard: '士兵证',
    PyCTP.THOST_FTDC_ICT_HouseholdRegister: '户口簿',
    PyCTP.THOST_FTDC_ICT_Passport: '护照',
    PyCTP.THOST_FTDC_ICT_TaiwanCompatriotIDCard: '台胞证',
    PyCTP.THOST_FTDC_ICT_HomeComingCard: '回乡证',
    PyCTP.THOST_FTDC_ICT_LicenseNo: '营业执照号',
    PyCTP.THOST_FTDC_ICT_TaxNo: '税务登记号/当地纳税ID',
    PyCTP.THOST_FTDC_ICT_HMMainlandTravelPermit: '港澳居民来往内地通行证',
    PyCTP.THOST_FTDC_ICT_TwMainlandTravelPermit: '台湾居民来往大陆通行证',
    PyCTP.THOST_FTDC_ICT_DrivingLicense: '驾照',
    PyCTP.THOST_FTDC_ICT_SocialID: '当地社保ID',
    PyCTP.THOST_FTDC_ICT_LocalID: '当地身份证',
    PyCTP.THOST_FTDC_ICT_BusinessRegistration: '商业登记证',
    PyCTP.THOST_FTDC_ICT_HKMCIDCard: '港澳永久性居民身份证',
    PyCTP.THOST_FTDC_ICT_AccountsPermits: '人行开户许可证',
    PyCTP.THOST_FTDC_ICT_FrgPrmtRdCard: '外国人永久居留证',
    PyCTP.THOST_FTDC_ICT_CptMngPrdLetter: '资管产品备案函',
    PyCTP.THOST_FTDC_ICT_HKMCTwResidencePermit: '港澳台居民居住证',
    PyCTP.THOST_FTDC_ICT_UniformSocialCreditCode: '统一社会信用代码',
    PyCTP.THOST_FTDC_ICT_CorporationCertNo: '机构成立证明文件',
    PyCTP.THOST_FTDC_ICT_OtherCard: '其他证件'
    }

# TFtdcBizTypeType是一个业务类型类型
TThostFtdcBizTypeType = {
    PyCTP.THOST_FTDC_BZTP_Future: '期货',
    PyCTP.THOST_FTDC_BZTP_Stock: '证券'
    }

# pylint: enable=invalid-name

def user_input(prompt=''):
    """Get user input from console.

    Parameters
    ----------
    prompt : str, optional
        The prompt message displayed in the console. The default is ''.

    Returns
    -------
    str
        The text entered by the user.
    """
    if sys.version_info[0] < 3:
        # Python 2
        # pylint: disable=undefined-variable
        return raw_input(prompt)  # noqa: F821
        # pylint: enable=undefined-variable
    # Python 3
    return input(prompt)


def bytes_to_text(data, encoding='gbk', errors='replace'):
    """Convert bytes to unicode/text string.

    This function decodes byte data into a Unicode string using the specified
    encoding. It supports both Python 2 and Python 3 by handling string/bytes
    type differences internally.

    Parameters
    ----------
    data : bytes or str
        The input data to be converted to text. If already a text string,
        it is returned unchanged.
    encoding : str, optional
        The character encoding to use for decoding, e.g., 'gb2312', 'utf-8'.
        Default is 'gb2312'.
    errors : str, optional
        The error handling strategy for decoding failures.
        Common values: 'strict', 'ignore', 'replace'.
        Default is 'replace', which replaces undecodable bytes with '�'.

    Returns
    -------
    str
        The decoded text string.

    Notes
    -----
    This function provides a unified interface across Python 2 and 3:
    - Python 2: uses `unicode` type and `.decode()` method.
    - Python 3: uses `str` type and `.decode()` method.
    """
    if sys.version_info[0] < 3:
        # Python 2
        # pylint: disable=undefined-variable
        return (data if isinstance(data, unicode)  # noqa: F821
                else data.decode(encoding, errors))
        # pylint: enable=undefined-variable
    # Python 3
    return data if isinstance(data, str) else data.decode(encoding, errors)


def text_to_bytes(data, encoding='gbk', errors='replace'):
    """Convert unicode/text string to bytes.

    This function encodes a Unicode/text string into bytes using the specified
    encoding. If the input is already bytes, it is returned unchanged.
    It supports both Python 2 and Python 3 by handling string/bytes type
    differences internally.

    Parameters
    ----------
    data : str or bytes
        The input text to be converted to bytes. If already bytes, it is
        returned unchanged.
    encoding : str, optional
        The character encoding to use for encoding, e.g., 'gb2312', 'utf-8'.
        Default is 'gb2312'.
    errors : str, optional
        The error handling strategy for encoding failures.
        Common values: 'strict', 'ignore', 'replace'.
        Default is 'replace', which replaces unencodable characters with '?'.

    Returns
    -------
    bytes
        The encoded byte string.

    Notes
    -----
    This function provides a unified interface across Python 2 and 3:
    - Python 2: uses `unicode` type and `.encode()` method.
    - Python 3: uses `str` type and `.encode()` method.
    """
    if sys.version_info[0] < 3:
        # Python 2
        # pylint: disable=undefined-variable
        return (data.encode(encoding, errors)
                if isinstance(data, unicode)  # noqa: F821
                else data)
        # pylint: enable=undefined-variable
    # Python 3
    return data.encode(encoding, errors) if isinstance(data, str) else data


def get_int_in_range_user_input(prompt, min_val=None, max_val=None):
    """Get user input from console, limit the range of input value to number.

    Parameters
    ----------
    prompt : str
        The prompt message displayed in the console.
    min_val : int, optional
        Minimum allowed value (inclusive).
    max_val : int, optional
        Maximum allowed value (inclusive).

    Returns
    -------
    int
        The number entered by the user.
    """
    while True:
        raw = user_input(prompt)
        try:
            val = int(raw)
        except ValueError:
            print('请输入整数')
            continue
        if min_val is not None and val < min_val:
            print('输入值不能小于 %d' % min_val)
            continue
        if max_val is not None and val > max_val:
            print('输入值不能大于 %d' % max_val)
            continue
        return val


def get_float_user_input(prompt, min_val=None, max_val=None):
    """Get user input from console, limit the input value to float.

    Parameters
    ----------
    prompt : str
        The prompt message displayed in the console.
    min_val : float, optional
        Minimum allowed value (inclusive).
    max_val : float, optional
        Maximum allowed value (inclusive).

    Returns
    -------
    float
        The number entered by the user.
    """
    while True:
        raw = user_input(prompt)
        try:
            val = float(raw)
        except ValueError:
            print('请输入数字')
            continue
        if min_val is not None and val < min_val:
            print('输入值不能小于 %f' % min_val)
            continue
        if max_val is not None and val > max_val:
            print('输入值不能大于 %f' % max_val)
            continue
        return val


def get_string_user_input(prompt, min_len=0, max_len=None, hide=False):
    """Get user input from console, limit the length of input string.

    Parameters
    ----------
    prompt : str
        The prompt message displayed in the console.
    min_len : int, optional
        Minimum required characters. Default is 0.
    max_len : int, optional
        Maximum allowed characters. Default is None (no limit).
    hide : bool, optional
        Whether to hide input characters (for passwords). Default is False.

    Returns
    -------
    str
        The string entered by the user.
    """
    while True:
        val = getpass.getpass(prompt) if hide else user_input(prompt)
        if min_len is not None and len(val) < min_len:
            print('输入不能短于 %d 个字符' % min_len)
            continue
        if max_len is not None and len(val) > max_len:
            print('输入不能超过 %d 个字符' % max_len)
            continue
        return val


def format_table(header, data, padding=1, header_separator=True,
                 vertical=False, float_fmt='%.2f',
                 replace_invalid='NaN', encoding='utf8'):
    """Print a formatted table with automatic column width adjustment.

    Parameters
    ----------
    header : list[str]
        Table header, titile columns.
    data : list[list[Any]]
        Table data.
    padding : int, optional
        Number of spaces inserted between columns. Default is 1.
    header_separator : bool, optional
        If True, a horizontal line of dashes is printed after the header row
        (default is True).
    vertical: bool, optional
        The table layout direction to vertical.
        - False 'horizontal': Headers are placed in the top row (scope="col").
        - True 'vertical': Headers are placed in the left column (scope="row").
    float_fmt: str, optional
        The format string for float value columns.
        It will be formatted accordingly. Default is '%.2f'
    replace_invalid: str, optional
        Whether to replace invalid numbers (NaN/Inf) with a specified string.
    encoding : str, optional
        The character encoding to use for encoding, e.g., 'gb2312', 'utf-8'.

    Returns
    -------
    str
        The formatted table as a string, ready for printing or logging
    """
    DBL_MAX = sys.float_info.max  # pylint: disable=invalid-name

    def display_width(text):
        width = 0
        for char in text:
            eaw = unicodedata.east_asian_width(char)
            if eaw in ('W', 'F'):
                width += 2
            else:
                width += 1
        return width

    def pad_to_display(text, target_width):
        cur = display_width(text)
        if cur >= target_width:
            return text
        return text + ' ' * (target_width - cur)
    if not (header and data):
        return None
    header = [bytes_to_text(col, encoding) for col in header]
    # Convert all cell values to strings.
    str_data = []
    for row in data:
        str_row = []
        for cell in row:
            col = '%s' % cell
            if isinstance(cell, float):
                if replace_invalid and cell >= DBL_MAX:
                    col = replace_invalid
                else:
                    col = float_fmt % cell
            col = bytes_to_text(col, encoding)
            str_row.append(col)
        str_data.append(str_row)
    str_table = [header] + str_data
    # ration the table
    if vertical:
        v_table = []
        for j in range(len(str_table[0])):
            v_table.append([str_table[i][j] for i in range(len(str_table))])
        str_table = v_table
        for row in str_table:
            row.insert(1, bytes_to_text('|', encoding))
    num_cols = len(str_table[0])
    # Determine the optimal column widths.
    widths = [0] * num_cols
    for row in str_table:
        for i in range(num_cols):
            cell_len = display_width(row[i])
            widths[i] = max(cell_len, widths[i])
    # padding to optimal column widths each columns
    padded_data = []
    for row in str_table:
        padded_row = [pad_to_display(col, widths[i])
                      for i, col in enumerate(row)]
        padded_data.append(padded_row)
    # Build a format string
    fmt_parts = ['%s' for _ in range(num_cols)]
    fmt_str = (' ' * padding).join(fmt_parts)
    total_width = sum(widths) + (len(widths) - 1) * padding
    formatted = ''
    for idx, row in enumerate(padded_data):
        if vertical and header_separator and idx == 0:
            formatted += '-' * total_width + ' \n'
        formatted += fmt_str % tuple(row) + ' \n'
        if not vertical and header_separator and idx == 0:
            formatted += '-' * total_width + ' \n'
    return formatted


def to_table(objects, mapping=None):
    """Convert list[obj] to table array.

    Parameters
    ----------
    objects: list[Any]
        the data to convert to
    mapping: dict[str, dict | callable | None]
        map to may be callback or other value

    Returns
    -------
    list[str], list[list[Any]]
        header, data, this is used to table show
    """
    if not objects:
        return [], []
    mapping = mapping or {}
    header = [attr for attr in dir(objects[0])
              if not attr.startswith('__')
              and not (attr in mapping and mapping.get(attr) is None)]
    data = []
    for obj in objects:
        row = []
        for name in header:
            val = getattr(obj, name)
            fun = mapping.get(name)
            if isinstance(fun, dict) and val in fun:
                val = fun[val]
            elif callable(fun):
                val = fun(val)
            row.append(val)
        data.append(row)
    return header, data


class ReadonlyModuleWrapper(object):
    """Read-only wrapper for module objects."""

    def __init__(self, wrapped):
        self._wrapped = wrapped

    def __getattr__(self, key):
        """Forward attribute access to the wrapped module."""
        return getattr(self._wrapped, key)

    def __setattr__(self, key, value):
        """Block attribute assignment except for internal `__wrapped`."""
        if key == "_wrapped":
            super(ReadonlyModuleWrapper, self).__setattr__(key, value)
        else:
            raise AttributeError("Module attributes are read-only")

    def __delattr__(self, key):
        """Block attribute deletion."""
        raise AttributeError("Module attributes are read-only")


PyCTP = ReadonlyModuleWrapper(PyCTP)  # pylint: disable=invalid-name


class CTPEvent(object):
    """The Event for ctp response. convert async to sync."""

    def __init__(self, request_id=0):
        self.response = []
        self.info = PyCTP.CThostFtdcRspInfoField()
        self.request_id = request_id
        self.event = threading.Event()
        self.event.clear()

    def update(self, data, info, request_id, is_last):
        """Update Event data and status.

        Parameters
        ----------
        data : Any
            Response data.
        info : PyCTP.CThostFtdcRspInfoField
            Response error info.
        request_id : int
            Request identity, its auto-incrementing number.
        is_last : bool
            True if this is last data response. indicating no more data will
            follow. False otherwise.
        """
        if self.request_id == request_id:
            if data is not None:
                self.response.append(data)
            if info is not None:
                self.info = info
            if is_last:
                self.event.set()


class CTPEventDispatcher(object):
    """Unified event dispatcher for CTP."""

    def __init__(self):
        self.__callback_queue = {}

    def add_listener(self, event_name, callback, propagation=True):
        """Register an event listener (last registered, first executed).

        Parameters
        ----------
        event_name : str
            The name of the event to listen for.
        callback : callable
            The callback function to be invoked when the event is dispatched.
        propagation : bool, optional
            If True, propagation continues to subsequent listeners.
            If False, propagation stops after this callback and no further
            listeners will be executed. Default is True.
        """
        if event_name not in self.__callback_queue:
            self.__callback_queue[event_name] = []
        self.__callback_queue[event_name].insert(0, (callback, propagation))

    def add_once_listener(self, event_name, callback, propagation=True):
        """Register a one-time event listener (auto-removed after execution).

        Parameters
        ----------
        event_name : str
            The name of the event to listen for.
        callback : callable
            The callback function to be invoked when the event is dispatched.
        propagation : bool, optional
            If True, propagation continues to subsequent listeners.
            If False, propagation stops after this callback and no further
            listeners will be executed. Default is True.
        """
        def wrapper(*args, **kwargs):
            callback(*args, **kwargs)
            self.remove_listener(event_name, wrapper)
        self.add_listener(event_name, wrapper, propagation)

    def remove_listener(self, event_name='', callback=None):
        """Remove one or more event listeners.

        Parameters
        ----------
        event_name : str, optional
            The name of the event. If provided, listeners for this event
            are removed. If empty, all listeners for all events are cleared.
        callback : callable, optional
            The specific callback to remove. If provided, only this callback
            is removed from the specified event. If None, all callbacks for
            the specified event are removed. Default is None.
        """
        if event_name:
            if callback:
                self.__callback_queue[event_name] = [
                    (cb, prop)
                    for cb, prop in self.__callback_queue[event_name]
                    if cb != callback]
            else:
                self.__callback_queue[event_name] = []
        else:
            self.__callback_queue.clear()

    def get_handler(self, name):
        """Get the event handler for the specified event.

        Parameters
        ----------
        name : str
            The name of the event.

        Returns
        -------
        callable or None
            The handler function for the event, or None if the event
            has no registered listeners.
        """
        return self.dispatch(name)

    def dispatch(self, event_name):
        """Look up and return the event handler for the specified event.

        Parameters
        ----------
        event_name : str
            The name of the event.

        Returns
        -------
        callable or None
            A handler function that, when called, invokes all registered
            listeners in order. Returns None if no listeners are registered
            for the event.
        """
        try:
            callbacks = self.__callback_queue[event_name]
        except KeyError:
            return None

        def handler(*args, **kwargs):
            for callback, propagation in callbacks:
                callback(*args, **kwargs)
                if not propagation:
                    break
        return handler


class CTPMarketAPI(object):
    """行情API."""

    def __init__(self, flow_path=b'', is_using_udp=False, is_multicast=False,
                 is_production_mode=True):
        """初始化并创建行情API客户端.

        Parameters
        ----------
        flow_path : bytes, optional
            存贮订阅信息文件的目录，默认为当前目录.
        is_using_udp : bool, optional
            是否使用 UDP 协议传输行情数据.
            True,使用 UDP.
            False,使用 TCP. 默认为 False.
        is_multicast : bool, optional
            是否使用组播接收行情数据.
            True,启用组播模式.
            False,使用单播. 默认为 False.
        is_production_mode : bool, optional
            是否使用生产版本的 API。
            True,使用生产版 API. 默认为 True.
            False,使用测评版 API.
        """
        self.event_dispatcher = CTPEventDispatcher()
        self.api = PyCTP.CThostFtdcMdApi.CreateFtdcMdApi(flow_path,
                                                         is_using_udp,
                                                         is_multicast,
                                                         is_production_mode)
        self._timeout = 30
        self._request_id = 0
        # self._is_logined = False
        self._broker_id = b''
        self._user_id = b''
        # self._password = b''

        def callback_on_front_disconnected(reason):
            """当客户端与交易后台通信连接断开时，该方法被调用.

            当发生这个情况后，API会自动重新连接，客户端可不做处理.

            Parameters
            ----------
            reason : int
                错误原因.
                0x1001 网络读失败
                0x1002 网络写失败
                0x2001 接收心跳超时
                0x2002 发送心跳失败
                0x2003 收到错误报文
            """
            logger.warning('CThostFtdcMdApi::OnFrontDisconnected(%s)',
                           hex(reason))
        self.event_dispatcher.add_listener('OnFrontDisconnected',
                                           callback_on_front_disconnected)

        def callback_on_rsp_error(info, request_id, is_last):
            """错误应答.

            Parameters
            ----------
            info : PyCTP.CThostFtdcRspInfoField
                响应信息.
            request_id : int
                请求编号.
            is_last : bool
                是否为最后一个数据包.
                True,最后一条响应.
                False,后续还有数据.
            """
            logger.error(('CThostFtdcMdApi::OnRspError'
                          '({ErrorID:%d, ErrorMsg:%s}'
                          ', RequestID:%d, IsLast:%s)'),
                         info.ErrorID, bytes_to_text(info.ErrorMsg),
                         request_id, is_last)
        self.event_dispatcher.add_listener('OnRspError', callback_on_rsp_error)

    def __getattr__(self, name):
        """拦截CThostFtdcMdSpi回调访问,并尝试从事件分发器获取处理器.

        本方法仅拦截以下前缀的回调:
        - OnRsp*  : 请求响应(如 OnRspUserLogin, OnRspSubMarketData, ...)
        - OnFront*: 前端状态回调(如 OnFrontConnected, OnFrontDisconnected, ...)

        OnRtn* 系列回调(如 OnRtnDepthMarketData)不经过此拦截器,以规避高频调用带来
        的性能开销,请在子类中直接重写.

        Returns
        -------
        callable
            从事件分发器中获取的处理器.

        Raises
        ------
        AttributeError
            如果属性名不是以 OnRsp 或 OnFront 开头,或分发器中未注册对应处理器.
        """
        if name.startswith(('OnRsp', 'OnFront')):
            handler = self.event_dispatcher.get_handler(name)
            if handler:
                return handler
        raise AttributeError("'%s' object has no attribute '%s'"
                             % (self.__class__.__name__, name))

    def release(self):
        """释放资源."""
        self.api.Release()

    def _inc_request_id(self):
        """自增并返回请求编号.

        行情API的请求编号似乎并未有效传递，因此这里注释掉编号自增，始终传递初始编号.

        Returns
        -------
        int
            请求编号.
        """
        # self._request_id += 1
        return self._request_id

    def get_api_version(self):
        """获取API的版本信息.

        Returns
        -------
        bytes
            获取到的版本号.
        """
        return self.api.GetApiVersion()

    def get_trading_day(self):
        """获取当前交易日.

        只有登录成功后,才能得到正确的交易日.

        Returns
        -------
        bytes
            获取到的交易日.
        """
        return self.api.GetTradingDay()

    def connect(self, front_addr):
        """连接前置服务器.

        RegisterSpi 注册回调接口
        RegisterFront 注册前置机网络地址
        Init 初始化运行环境,只有调用后,接口才开始工作

        Parameters
        ----------
        front_addr : bytes
            网络地址的格式为：“protocol://ipaddress:port”，
            如：”tcp://127.0.0.1:17001”。
            “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
        """
        self.api.RegisterSpi(self)
        self.api.RegisterFront(front_addr)
        self.api.Init()
        rsp = CTPEvent()
        # 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用
        event_name = 'OnFrontConnected'

        def callback_for_on_front_connected():
            rsp.event.set()
        self.event_dispatcher.add_listener(event_name,
                                           callback_for_on_front_connected)
        ret = 0 if rsp.event.wait(self._timeout) else -4
        self.event_dispatcher.remove_listener(event_name,
                                              callback_for_on_front_connected)
        return ret

    def login(self, broker_id, user_id, password):
        """用户登录请求.

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        password : bytes
            密码.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcReqUserLoginField()
        req.BrokerID = broker_id
        req.UserID = user_id
        req.Password = password
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspUserLogin'  # 登录请求响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqUserLogin(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        if ret == 0:
            self._broker_id = req.BrokerID
            self._user_id = req.UserID
            # self._password = req.Password
        return ret

    def logout(self):
        """登出请求.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcUserLogoutField()
        req.BrokerID = self._broker_id
        req.UserID = self._user_id
        rsp = CTPEvent(self._inc_request_id())
        event_name_for_callback = 'OnRspError'  # 错误应答
        event_name_for_logout = 'OnRspUserLogout'  # 登出请求响应

        def callback(info, request_id, is_last):
            rsp.update(None, info, request_id, is_last)
        self.event_dispatcher.add_listener(event_name_for_callback, callback,
                                           False)
        self.event_dispatcher.add_listener(event_name_for_logout, rsp.update)
        ret = self.api.ReqUserLogout(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name_for_callback,
                                              callback)
        self.event_dispatcher.remove_listener(event_name_for_logout,
                                              rsp.update)
        if ret == 0:
            pass
            # self._investor_id = False
        else:
            logger.error(bytes_to_text(rsp.info.ErrorMsg))
        return ret

    def subscribe_market_data(self, instrument_id):
        """订阅行情.

        Parameters
        ----------
        instrument_id : list[bytes]
            要订阅行情的合约列表.

        Returns
        -------
        int or list[PyCTP.CThostFtdcSpecificInstrumentField]
            返回类型取决于操作结果:
            - 成功 ： list,指定的合约列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspSubMarketData'  # 订阅行情应答
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.SubscribeMarketData(instrument_id, len(instrument_id))
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def unsubscribe_market_data(self, instrument_id):
        """退订行情.

        Parameters
        ----------
        instrument_id : list[bytes]
            要退订行情的合约列表.

        Returns
        -------
        int or list[PyCTP.CThostFtdcSpecificInstrumentField]
            返回类型取决于操作结果:
            - 成功 ： list,指定的合约列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspUnSubMarketData'  # 取消订阅行情应答
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.UnSubscribeMarketData(instrument_id, len(instrument_id))
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response


class CTPTraderAPI(object):
    """交易API."""

    def __init__(self, flow_path=b'', is_production_mode=True):
        """初始化并创建交易API客户端.

        Parameters
        ----------
        flow_path : bytes, optional
            存贮订阅信息文件的目录，默认为当前目录.
        is_production_mode : bool, optional
            是否使用生产版本的 API。
            True,使用生产版 API. 默认为 True.
            False,使用测评版 API.
        """
        self.event_dispatcher = CTPEventDispatcher()

        self.api = PyCTP.CThostFtdcTraderApi.CreateFtdcTraderApi(
            flow_path,
            is_production_mode)

        self._timeout = 30
        self._request_id = 0

        # self._is_logined = False

        self._broker_id = b''
        self._user_id = b''
        # self._password = b''
        self._order_ref = 0
        self._investor_id = b''

        def callback_on_front_disconnected(reason):
            """当客户端与交易后台通信连接断开时，该方法被调用.

            当发生这个情况后，API会自动重新连接，客户端可不做处理。

            Parameters
            ----------
            reason : int
                错误原因.
                0x1001 网络读失败
                0x1002 网络写失败
                0x2001 接收心跳超时
                0x2002 发送心跳失败
                0x2003 收到错误报文
            """
            logger.warning('CThostFtdcTraderApi::OnFrontDisconnected(%s)',
                           hex(reason))
        self.event_dispatcher.add_listener('OnFrontDisconnected',
                                           callback_on_front_disconnected)

        def callback_on_rsp_error(info, request_id, is_last):
            """错误应答.

            Parameters
            ----------
            info : PyCTP.CThostFtdcRspInfoField
                响应信息.
            request_id : int
                请求编号.
            is_last : bool
                是否为最后一个数据包.
                True,最后一条响应.
                False,后续还有数据.
            """
            logger.error(('CThostFtdcTraderApi::OnRspError'
                          '({ErrorID:%d, ErrorMsg:%s}'
                          ', RequestID:%d, IsLast:%s)'),
                         info.ErrorID, bytes_to_text(info.ErrorMsg),
                         request_id, is_last)
        self.event_dispatcher.add_listener('OnRspError', callback_on_rsp_error)

    def __getattr__(self, name):
        """拦截CThostFtdcTraderSpi回调访问,并尝试从事件分发器获取处理器.

        本方法仅拦截以下前缀的回调:
        - OnRsp*  : 请求响应(如 OnRspUserLogin, OnRspAuthenticate, ...)
        - OnFront*: 前端状态回调(如 OnFrontConnected, OnFrontDisconnected, ...)

        OnRtn*,OnErrRtn* 系列回调(如 OnRtnOrder，OnErrRtnOrderInsert)
        不经过此拦截器,以规避高频调用带来的性能开销,请在子类中直接重写.

        Returns
        -------
        callable
            从事件分发器中获取的处理器.

        Raises
        ------
        AttributeError
            如果属性名不是以 OnRsp 或 OnFront 开头,或分发器中未注册对应处理器.
        """
        if name.startswith(('OnRsp', 'OnFront')):
            handler = self.event_dispatcher.get_handler(name)
            if handler:
                return handler
        raise AttributeError("'%s' object has no attribute '%s'"
                             % (self.__class__.__name__, name))

    def release(self):
        """释放资源."""
        self.api.Release()

    def _inc_request_id(self):
        """自增并返回请求编号.

        Returns
        -------
        int
            请求编号.
        """
        self._request_id += 1
        return self._request_id

    def _inc_order_ref(self):
        """递增报单引用.

        Returns
        -------
        int
            报单引用.
        """
        order_ref = self._order_ref
        self._order_ref += 1
        return order_ref

    def set_investor_id(self, investor_id):
        """设置投资者代码.

        Parameters
        ----------
        investor_id : bytes
            投资者代码.

        Returns
        -------
        bytes
            投资者代码.
        """
        self._investor_id = investor_id
        return self._investor_id

    def get_api_version(self):
        """获取API的版本信息.

        Returns
        -------
        bytes
            获取到的版本号.
        """
        return self.api.GetApiVersion()

    def get_trading_day(self):
        """获取当前交易日.

        只有登录成功后,才能得到正确的交易日.

        Returns
        -------
        bytes
            获取到的交易日.
        """
        return self.api.GetTradingDay()

    def connect(self, front_addr):
        """连接前置服务器.

        RegisterSpi 注册回调接口
        SubscribePrivateTopic 订阅私有流,从上次收到的续传
        SubscribePublicTopic 订阅公共流,从上次收到的续传
        RegisterFront 注册前置机网络地址
        Init 初始化运行环境,只有调用后,接口才开始工作

        Parameters
        ----------
        front_addr : bytes
            网络地址的格式为：“protocol://ipaddress:port”，
            如：”tcp://127.0.0.1:17001”。
            “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
        """
        self.api.RegisterSpi(self)
        self.api.SubscribePrivateTopic(PyCTP.THOST_TERT_RESUME)
        self.api.SubscribePublicTopic(PyCTP.THOST_TERT_RESUME)
        self.api.RegisterFront(front_addr)
        self.api.Init()
        rsp = CTPEvent()
        # 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用
        event_name = 'OnFrontConnected'

        def callback_for_on_front_connected():
            rsp.event.set()
        self.event_dispatcher.add_listener(event_name,
                                           callback_for_on_front_connected)
        ret = 0 if rsp.event.wait(self._timeout) else -4
        self.event_dispatcher.remove_listener(event_name,
                                              callback_for_on_front_connected)
        return ret

    def request_authenticate(self, broker_id, user_id, user_product_info,
                             auth_code, app_id):
        """客户端认证.

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        user_product_info : bytes
            用户端产品信息.
        auth_code : bytes
            认证码.
        app_id : bytes
            App代码.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcReqAuthenticateField()
        req.BrokerID = broker_id
        req.UserID = user_id
        req.UserProductInfo = user_product_info
        req.AuthCode = auth_code
        req.AppID = app_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspAuthenticate'  # 客户端认证响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqAuthenticate(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret

    def login(self, broker_id, user_id, password):
        """用户登录请求.

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        password : bytes
            密码.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcReqUserLoginField()
        req.BrokerID = broker_id
        req.UserID = user_id
        req.Password = password
        req.LoginRemark = b'test'
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspUserLogin'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqUserLogin(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        if ret == 0:
            # self._is_logined = True
            self._broker_id = req.BrokerID
            self._user_id = req.UserID
            # self._password = req.Password
            self._investor_id = user_id
            self._order_ref = int(rsp.response[0].MaxOrderRef)
        return ret

    def logout(self):
        """登出请求.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcUserLogoutField()
        req.BrokerID = self._broker_id
        req.UserID = self._user_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspUserLogout'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqUserLogout(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        if ret == 0:
            pass
            # self._is_logined = False
        return ret

    def submit_user_system_info(self, broker_id, user_id, app_id):
        """上报用户终端信息，用于中继服务器操作员登录模式.

        操作员登录后，可以多次调用该接口上报客户信息

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        app_id : bytes
            App代码.

        Returns
        -------
        int
            具体错误码由底层API决定.
        """
        system_info = PyCTP.CTP_GetSystemInfo()
        user_system_info = PyCTP.CThostFtdcUserSystemInfoField()
        user_system_info.BrokerID = broker_id
        user_system_info.UserID = user_id
        user_system_info.ClientSystemInfo = system_info['SystemInfo']
        user_system_info.ClientSystemInfoLen = system_info['Length']
        user_system_info.ClientPublicIP = b'192.168.0.1'
        user_system_info.ClientIPPort = 51305
        user_system_info.ClientLoginTime = b'20190121'
        user_system_info.ClientAppID = app_id
        return self.api.SubmitUserSystemInfo(user_system_info)

    def register_user_system_info(self, broker_id, user_id, app_id):
        """注册用户终端信息，用于中继服务器多连接模式.

        需要在终端认证成功后，用户登录前调用该接口

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        app_id : bytes
            App代码.

        Returns
        -------
        int
            具体错误码由底层API决定.
        """
        system_info = PyCTP.CTP_GetSystemInfo()
        user_system_info = PyCTP.CThostFtdcUserSystemInfoField()
        user_system_info.BrokerID = broker_id
        user_system_info.UserID = user_id
        user_system_info.ClientSystemInfo = system_info['SystemInfo']
        user_system_info.ClientSystemInfoLen = system_info['Length']
        user_system_info.ClientPublicIP = b'192.168.0.1'
        user_system_info.ClientIPPort = 51305
        user_system_info.ClientLoginTime = b'20190121'
        user_system_info.ClientAppID = app_id
        return self.api.RegisterUserSystemInfo(user_system_info)

    def query_settlement_info(self):
        """请求查询投资者结算结果.

        Returns
        -------
        int or list[PyCTP.CThostFtdcSettlementInfoField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者结算结果
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQrySettlementInfoField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQrySettlementInfo'  # 请求查询投资者结算结果响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQrySettlementInfo(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def request_settlement_info_confirm(self):
        """投资者结算结果确认.

        Returns
        -------
        int or list[PyCTP.CThostFtdcSettlementInfoConfirmField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者结算结果确认信息
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcSettlementInfoConfirmField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspSettlementInfoConfirm'  # 投资者结算结果确认响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqSettlementInfoConfirm(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_exchange(self, exchange_id=b''):
        """请求查询交易所.

        Parameters
        ----------
        exchange_id : bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcExchangeField]
            返回类型取决于操作结果:
            - 成功 ： list,交易所列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryExchangeField(ExchangeID=exchange_id)
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryExchange'  # 请求查询交易所响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryExchange(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_investor(self):
        """请求查询投资者.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInvestorField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInvestorField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryInvestor'  # 请求查询投资者响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInvestor(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_trading_account(self):
        """请求查询资金账户.

        Returns
        -------
        int or list[PyCTP.CThostFtdcTradingAccountField]
            返回类型取决于操作结果:
            - 成功 ： list,资金账户列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryTradingAccountField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryTradingAccount'  # 请求查询资金账户响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryTradingAccount(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_depth_market_data(self, instrument_id=b'', exchange_id=b''):
        """请求查询行情.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        exchange_id: bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcDepthMarketDataField]
            返回类型取决于操作结果:
            - 成功 ： list,深度行情列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryDepthMarketDataField()
        req.ProductClass = PyCTP.THOST_FTDC_PC_Futures  # 期货
        req.ExchangeID = exchange_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryDepthMarketData'  # 请求查询行情响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryDepthMarketData(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_instrument(self, instrument_id=b'', exchange_id=b''):
        """请求查询合约.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        exchange_id: bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInstrumentField]
            返回类型取决于操作结果:
            - 成功 ： list,合约列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInstrumentField()
        req.ExchangeID = exchange_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryInstrument'  # 请求查询合约响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInstrument(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_instrument_commission_rate(self,
                                         instrument_id=b'',
                                         exchange_id=b''):
        """请求查询合约手续费率.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        exchange_id: bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInstrumentCommissionRateField]
            返回类型取决于操作结果:
            - 成功 ： list,合约手续费率列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInstrumentCommissionRateField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.ExchangeID = exchange_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        # 请求查询合约手续费率响应
        event_name = 'OnRspQryInstrumentCommissionRate'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInstrumentCommissionRate(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_instrument_margin_rate(self, instrument_id=b'', exchange_id=b''):
        """请求查询合约保证金率.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        exchange_id: bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInstrumentMarginRateField]
            返回类型取决于操作结果:
            - 成功 ： list,合约保证金率列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInstrumentMarginRateField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.ExchangeID = exchange_id
        req.InstrumentID = instrument_id
        req.HedgeFlag = PyCTP.THOST_FTDC_HF_Speculation  # 投机
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryInstrumentMarginRate'  # 请求查询合约保证金率响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInstrumentMarginRate(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_investor_position(self, instrument_id=b'', exchange_id=b''):
        """请求查询投资者持仓.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        exchange_id: bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInvestorPositionField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者持仓列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInvestorPositionField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.ExchangeID = exchange_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryInvestorPosition'  # 请求查询投资者持仓响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInvestorPosition(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_investor_position_detail(self,
                                       instrument_id=b'',
                                       exchange_id=b''):
        """请求查询投资者持仓明细.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        exchange_id: bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInvestorPositionDetailField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者持仓明细列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInvestorPositionDetailField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.ExchangeID = exchange_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        # 请求查询投资者持仓明细响应
        event_name = 'OnRspQryInvestorPositionDetail'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInvestorPositionDetail(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_trade(self, instrument_id=b'', exchange_id=b''):
        """请求查询成交.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        exchange_id: bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcTradeField]
            返回类型取决于操作结果:
            - 成功 ： list,成交列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryTradeField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.ExchangeID = exchange_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        # 请求查询成交响应
        event_name = 'OnRspQryTrade'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryTrade(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_order(self, instrument_id=b'', exchange_id=b''):
        """请求查询报单.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        exchange_id: bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcOrderField]
            返回类型取决于操作结果:
            - 成功 ： list,报单列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryOrderField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.ExchangeID = exchange_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        # 请求查询报单响应
        event_name = 'OnRspQryOrder'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryOrder(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def order_insert(self, instrument_id, action, direction, volume, price,
                     price_type=PyCTP.THOST_FTDC_OPT_LimitPrice):
        """报单录入请求.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        action : bytes
            组合开平标志. typedef char TThostFtdcCombOffsetFlagType[5]
                        typedef char TThostFtdcOffsetFlagType
            - 开仓 PyCTP.THOST_FTDC_OF_Open '0'
            - 平仓 PyCTP.THOST_FTDC_OF_Close '1'
            - 强平 PyCTP.THOST_FTDC_OF_ForceClose '2'
            - 平今 PyCTP.THOST_FTDC_OF_CloseToday '3'
            - 平昨 PyCTP.THOST_FTDC_OF_CloseYesterday '4'
            - 强减 PyCTP.THOST_FTDC_OF_ForceOff '5'
            - 本地强平 PyCTP.THOST_FTDC_OF_LocalForceClose '6'
        direction : bytes
            买卖方向. typedef char TThostFtdcDirectionType
            - 买 PyCTP.THOST_FTDC_D_Buy '0'
            - 卖 PyCTP.THOST_FTDC_D_Sell '1'
        volume : int
            数量.
        price : float
            价格.
        price_type: bytes
            报单价格条件类型 typedef char TThostFtdcOrderPriceTypeType
            - 任意价 PyCTP.THOST_FTDC_OPT_AnyPrice '1'
            - 限价 PyCTP.THOST_FTDC_OPT_LimitPrice '2'
            - 最优价 PyCTP.THOST_FTDC_OPT_BestPrice '3'
            - 最新价 PyCTP.THOST_FTDC_OPT_LastPrice '4'
            - 最新价上浮1个ticks PyCTP.THOST_FTDC_OPT_LastPricePlusOneTicks '5'
            - 最新价上浮2个ticks PyCTP.THOST_FTDC_OPT_LastPricePlusTwoTicks '6'
            - 最新价上浮3个ticks PyCTP.THOST_FTDC_OPT_LastPricePlusThreeTicks '7'
            - 卖一价 PyCTP.THOST_FTDC_OPT_AskPrice1 '8'
            - 卖一价上浮1个ticks PyCTP.THOST_FTDC_OPT_AskPrice1PlusOneTicks '9'
            - 卖一价上浮2个ticks PyCTP.THOST_FTDC_OPT_AskPrice1PlusTwoTicks 'A'
            - 卖一价上浮3个ticks PyCTP.THOST_FTDC_OPT_AskPrice1PlusThreeTicks 'B'
            - 买一价 PyCTP.THOST_FTDC_OPT_BidPrice1 'C'
            - 买一价上浮1个ticks PyCTP.THOST_FTDC_OPT_BidPrice1PlusOneTicks 'D'
            - 买一价上浮2个ticks PyCTP.THOST_FTDC_OPT_BidPrice1PlusTwoTicks 'E'
            - 买一价上浮3个ticks PyCTP.THOST_FTDC_OPT_BidPrice1PlusThreeTicks 'F'
            - 五档价 PyCTP.THOST_FTDC_OPT_FiveLevelPrice 'G'

        Returns
        -------
        int or list[PyCTP.CThostFtdcInputOrderField]
            返回类型取决于操作结果:
            - 成功 ： list,输入报单列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        input_order = PyCTP.CThostFtdcInputOrderField()
        # 经纪公司代码
        input_order.BrokerID = self._broker_id
        # 投资者代码
        input_order.InvestorID = self._investor_id
        # 合约代码
        input_order.InstrumentID = instrument_id
        # 报单引用
        input_order.OrderRef = text_to_bytes('%012d' % self._inc_order_ref())
        # 用户代码
        input_order.UserID = self._user_id
        # 报单价格条件:限价单
        input_order.OrderPriceType = price_type
        # 买卖方向
        input_order.Direction = direction
        # 组合开平标志
        input_order.CombOffsetFlag = action
        # 组合投机套保标志:投机
        input_order.CombHedgeFlag = PyCTP.THOST_FTDC_HF_Speculation
        # 价格
        input_order.LimitPrice = price
        if price_type != PyCTP.THOST_FTDC_OPT_LimitPrice:
            input_order.LimitPrice = 0.0
        # 数量
        input_order.VolumeTotalOriginal = volume
        # 有效期类型:当日有效
        input_order.TimeCondition = PyCTP.THOST_FTDC_TC_GFD
        # 成交量类型:任意数量
        input_order.VolumeCondition = PyCTP.THOST_FTDC_VC_AV
        # 最小成交量: 仅 VolumeCondition = PyCTP.THOST_FTDC_VC_MV
        input_order.MinVolume = 1
        # 触发条件:立即
        input_order.ContingentCondition = PyCTP.THOST_FTDC_CC_Immediately
        # 强平原因:非强平
        input_order.ForceCloseReason = PyCTP.THOST_FTDC_FCC_NotForceClose
        # 自动挂起标志
        input_order.IsAutoSuspend = 0
        # 用户强平标志
        input_order.UserForceClose = 0
        rsp = CTPEvent(self._inc_request_id())
        # 报单录入请求响应并没有如预期触发，注释此代码并不会影响交易.
        # event_name = 'OnRspOrderInsert'  # 报单录入请求响应
        # self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqOrderInsert(input_order, rsp.request_id)
        # ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
        #              else -4)
        # self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def OnRspOrderInsert(self,  # pylint: disable=invalid-name
                         input_order, rsp_info, request_id, is_last):
        """报单录入请求响应.

        Parameters
        ----------
        input_order : PyCTP.CThostFtdcInputOrderField
            输入报单.
        rsp_info : PyCTP.CThostFtdcRspInfoField
            响应信息.
        request_id : int
            请求编号.
        is_last : bool
            是否为最后一个数据包.
            True,最后一条响应.
            False,后续还有数据.
        """
        logger.info(('CThostFtdcTraderApi::OnRspOrderInsert'
                     '({InstrumentID:%s, OrderRef:%s}'
                     ', {ErrorID:%d, ErrorMsg:%s}, RequestID:%d, IsLast:%s)'),
                    input_order.InstrumentID,
                    input_order.OrderRef,
                    rsp_info.ErrorID,
                    bytes_to_text(rsp_info.ErrorMsg),
                    request_id, is_last)


class CTPMarket(CTPMarketAPI):
    """行情API."""

    def OnRtnDepthMarketData(self,  # pylint: disable=invalid-name
                             depth_market_data):
        """深度行情通知.

        Parameters
        ----------
        depth_market_data : PyCTP.CThostFtdcDepthMarketDataField
            深度行情
        """
        logger.info(
            ('CThostFtdcMdSpi::OnRtnDepthMarketData'
             '({InstrumentID:%s, ActionDay:%s, UpdateTime:%s, LastPrice:%f'
             ', Volume:%d, Turnover:%f, OpenInterest:%f})'),
            depth_market_data.InstrumentID,  # 合约代码
            depth_market_data.ActionDay,  # 交易日
            depth_market_data.UpdateTime,  # 最后修改时间
            depth_market_data.LastPrice,  # 最新价
            depth_market_data.Volume,  # 数量
            depth_market_data.Turnover,  # 成交金额
            depth_market_data.OpenInterest)  # 持仓量


class CTPTrader(CTPTraderAPI):
    """交易API."""

    def OnErrRtnOrderInsert(self,  # pylint: disable=invalid-name
                            input_order, rsp_info):
        """报单录入错误回报.

        Parameters
        ----------
        input_order : PyCTP.CThostFtdcInputOrderField
            输入报单.
        rsp_info : PyCTP.CThostFtdcRspInfoField
            响应信息.
        """
        logger.error(('CThostFtdcTraderApi::OnErrRtnOrderInsert'
                      '({InstrumentID:%s, OrderRef:%s}'
                      ', {ErrorID:%d, ErrorMsg:%s})'),
                     input_order.InstrumentID,
                     input_order.OrderRef,
                     rsp_info.ErrorID,
                     bytes_to_text(rsp_info.ErrorMsg))

    def OnRtnPrivateSeqNo(self, seq_no):  # pylint: disable=invalid-name
        """该方法在处理私有流之前被调用.

        Parameters
        ----------
        seq_no : int
            即将被处理的私有流的序号.
        """
        logger.info('CThostFtdcTraderApi::OnRtnPrivateSeqNo(%d)', seq_no)

    def OnRtnTrade(self, trade):  # pylint: disable=invalid-name
        """成交通知.

        Parameters
        ----------
        trade : PyCTP.CThostFtdcTradeField
            成交.
        """
        logger.info(('CThostFtdcTraderApi::OnRtnTrade'
                     '({InstrumentID:%s, OrderRef:%s, Price:%f})'),
                    trade.InstrumentID, trade.OrderRef, trade.Price)

    def OnRtnOrder(self, order):  # pylint: disable=invalid-name
        """报单通知.

        Parameters
        ----------
        order : PyCTP.CThostFtdcOrderField
            报单.
        """
        logger.info(('CThostFtdcTraderApi::OnRtnOrder'
                     '({InstrumentID:%s, OrderRef:%s, OrderStatus:%s})'),
                    order.InstrumentID,
                    order.OrderRef,
                    TThostFtdcOrderStatusType[order.OrderStatus])

    def OnRtnInstrumentStatus(self,  # pylint: disable=invalid-name
                              instrument_status):
        """合约交易状态通知.

        Parameters
        ----------
        instrument_status : PyCTP.CThostFtdcInstrumentStatusField
            合约状态.
        """
        logger.info(('CThostFtdcTraderApi::OnRtnInstrumentStatus'
                     '({InstrumentID:%s, InstrumentStatus:%s})'),
                    instrument_status.InstrumentID,
                    TThostFtdcInstrumentStatusType[
                        instrument_status.InstrumentStatus])


def main():
    """Entry."""
    logging.basicConfig(
        level=logging.NOTSET,
        format=('%(levelname)s - [%(filename)s:%(lineno)d - %(funcName)s()] - '
                '%(message)s'))

    front_addr = [{'name': '第一套环境 - 第一组',
                   'tFrontAddr': b'tcp://182.254.243.31:30001',
                   'mFrontAddr': b'tcp://182.254.243.31:30011'},
                  {'name': '第一套环境 - 第二组',
                   'tFrontAddr': b'tcp://182.254.243.31:30002',
                   'mFrontAddr': b'tcp://182.254.243.31:30012'},
                  {'name': '第一套环境 - 第三组',
                   'tFrontAddr': b'tcp://182.254.243.31:30003',
                   'mFrontAddr': b'tcp://182.254.243.31:30013'},
                  {'name': '7*24环境',
                   'tFrontAddr': b'tcp://182.254.243.31:40001',
                   'mFrontAddr': b'tcp://182.254.243.31:40011'}]
    menu_text = 'SimNow 仿真环境 \n'
    menu_text += '-' * 40 + ' \n'
    for idx, front in enumerate(front_addr):
        menu_text += '%d. %s \n' % (idx+1, front['name'])
        menu_text += '   交易前置: %s \n' % front['tFrontAddr']
        menu_text += '   行情前置: %s \n' % front['mFrontAddr']
    menu_text += '-' * 40 + ' \n'
    menu_text += '请选择仿真环境 [1-4]: '
    idx = get_int_in_range_user_input(menu_text, 1, len(front_addr))
    t_front_addr = front_addr[idx-1]['tFrontAddr']
    m_front_addr = front_addr[idx-1]['mFrontAddr']

    mode = get_int_in_range_user_input('请选择API模式 [1=生产, 2=评测]: ', 1, 2)
    is_production_mode = mode == 1

    prompt = '连接模式 \n'
    prompt += '-' * 40 + ' \n'
    prompt += '1. 直连模式 \n'
    prompt += '2. 中继服务器操作员模式(一对多模式) \n'
    prompt += '3. 中继服务器非操作员模式(多对多模式) \n'
    prompt += '-' * 40 + ' \n'
    prompt += '请选择连接模式 [1-3]: '
    connect_mode = get_int_in_range_user_input(prompt, 1, 3)

    broker_id = os.getenv('TEST_BROKERID')
    user_id = os.getenv('TEST_USERID')
    password = os.getenv('TEST_PASSWORD')

    if not broker_id:
        broker_id = get_string_user_input('请输入经纪公司代码: ', 4)
    if not user_id:
        user_id = get_string_user_input('请输入用户代码: ', 1)
    if not password:
        password = get_string_user_input('请输入密码: ', 1, None, True)

    broker_id = text_to_bytes(broker_id)
    user_id = text_to_bytes(user_id)
    password = text_to_bytes(password)

    auth_code = b'0000000000000000'
    app_id = b'simnow_client_test'
    product_info = b''

    current_dir = os.path.dirname(os.path.abspath(__file__))
    flow_path = os.path.join(current_dir, 'flow/')
    if not os.path.exists(flow_path):
        os.makedirs(flow_path)
    flow_path = text_to_bytes(flow_path)

    trader = CTPTrader(flow_path, is_production_mode)
    market = CTPMarket(flow_path, False, False, is_production_mode)
    print('Python版本: ', sys.version)
    print('看穿式采集库版本： ', PyCTP.CTP_GetDataCollectApiVersion())
    print('行情API版本: ', market.get_api_version())
    print('交易API版本: ', trader.get_api_version())
    print('连接行情前置: ', market.connect(m_front_addr))
    print('连接交易前置: ', trader.connect(t_front_addr))
    if connect_mode == 1:
        # 1.直连模式
        print('交易客户端认证: ', trader.request_authenticate(broker_id, user_id,
                                                       product_info, auth_code,
                                                       app_id))
        print('交易账号登陆: ', trader.login(broker_id, user_id, password))
    elif connect_mode == 2:
        # 2.中继服务器操作员模式(一对多模式)
        print('交易客户端认证: ', trader.request_authenticate(broker_id, user_id,
                                                       product_info, auth_code,
                                                       app_id))
        print('交易账号登陆: ', trader.login(broker_id, user_id, password))
        print('上报用户终端信息: ', trader.submit_user_system_info(broker_id,
                                                           user_id, app_id))
    elif connect_mode == 3:
        # 3.中继服务器非操作员模式(多对多模式)
        print('交易客户端认证: ', trader.request_authenticate(broker_id, user_id,
                                                       product_info, auth_code,
                                                       app_id))
        print('注册用户终端信息: ', trader.register_user_system_info(broker_id,
                                                             user_id, app_id))
        print('交易账号登陆: ', trader.login(broker_id, user_id, password))
    else:
        pass
    print('行情账号登陆: ', market.login(broker_id, user_id, password))
    print('行情交易日: ', market.get_trading_day())
    print('交易交易日: ', trader.get_trading_day())
    print('投资者代码: ', trader.set_investor_id(user_id))
    while True:
        menu_text = 'CTP 交易终端 \n'
        menu_text += '-' * 40 + ' \n'
        menu_text += ' 0. 退出程序 \n'
        menu_text += ' 1. 结算单确认 \n'
        menu_text += ' 2. 查询交易所 \n'
        menu_text += ' 3. 查询投资者信息 \n'
        menu_text += ' 4. 查询资金账户 \n'
        menu_text += ' 5. 查询行情快照 \n'
        menu_text += ' 6. 查询合约信息 \n'
        menu_text += ' 7. 查询手续费率 \n'
        menu_text += ' 8. 查询保证金率 \n'
        menu_text += ' 9. 查询持仓汇总 \n'
        menu_text += '10. 查询持仓明细 \n'
        menu_text += '11. 查询成交 \n'
        menu_text += '12. 查询报单 \n'
        menu_text += '13. 买入开仓 (多头) \n'
        menu_text += '14. 卖出开仓 (空头) \n'
        menu_text += '15. 卖出平仓 (平多) \n'
        menu_text += '16. 买入平仓 (平空) \n'
        menu_text += '17. 订阅行情 \n'
        menu_text += '18. 退订行情 \n'
        menu_text += '-' * 40 + ' \n'
        menu_text += '请选择操作 [0-18]： '
        inp = get_int_in_range_user_input(menu_text, 0, 18)
        if inp == 0:
            break
        if inp == 1:
            settlement_info = trader.query_settlement_info()
            header, data = to_table(settlement_info, {'Content': None})
            print('查询投资者结算结果响应')
            print(format_table(header, data))
            print('查询投资者结算结果响应 - 消息正文')
            for sinfo in settlement_info:
                print(bytes_to_text(sinfo.Content))
            prompt = '请仔细核对上述结算数据. 确认无误请输入 YES, 拒绝请输入 NO: '
            choice = get_string_user_input(prompt)
            if choice != 'YES':
                print('确认失败，操作已取消')
                continue
            settlement_info_confirm = trader.request_settlement_info_confirm()
            header, data = to_table(settlement_info_confirm)
            print('确认成功')
            print('投资者结算结果确认响应')
            print(format_table(header, data))
        elif inp == 2:
            exchanges = trader.query_exchange()
            header, data = to_table(exchanges, {
                'ExchangeName': bytes_to_text,
                'ExchangeProperty': TThostFtdcExchangePropertyType
                })
            print('查询交易所响应')
            print(format_table(header, data))
        elif inp == 3:
            investors = trader.query_investor()
            header, data = to_table(investors, {
                'Address': bytes_to_text,
                'IdentifiedCardNo': bytes_to_text,
                'InvestorName': bytes_to_text,
                'Telephone': bytes_to_text,
                'Mobile': bytes_to_text,
                'IdentifiedCardType': TThostFtdcIdCardTypeType,
                'IsOrderFreq': TThostFtdcEnumBoolType,
                'IsOpenVolLimit': TThostFtdcEnumBoolType
                })
            print('查询投资者响应')
            print(format_table(header, data))
        elif inp == 4:
            accounts = trader.query_trading_account()
            header, data = to_table(accounts)
            print('查询资金账户响应')
            print(format_table(header, data))
        elif inp == 5:
            instrument_id = text_to_bytes(
                get_string_user_input('请输入合约代码: ', 1))
            ticks = trader.query_depth_market_data(instrument_id)
            header, data = to_table(ticks)
            print('查询行情响应')
            print(format_table(header, data))
        elif inp == 6:
            instrument_id = text_to_bytes(
                get_string_user_input('请输入合约代码: ', 1))
            insts = trader.query_instrument(instrument_id)
            header, data = to_table(insts, {
                'OptionsType': TThostFtdcOptionsTypeType,
                'PositionType': TThostFtdcPositionTypeType,
                'PositionDateType': TThostFtdcPositionDateTypeType,
                'ProductClass': TThostFtdcProductClassType,
                'MaxMarginSideAlgorithm': TThostFtdcMaxMarginSideAlgorithmType,
                'CombinationType': TThostFtdcCombinationTypeType,
                'InstLifePhase': TThostFtdcInstLifePhaseType
                })
            print('查询合约响应')
            print(format_table(header, data))
        elif inp == 7:
            instrument_id = text_to_bytes(
                get_string_user_input('请输入合约代码: ', 1))
            comms = trader.query_instrument_commission_rate(instrument_id)
            header, data = to_table(comms, {
                'BizType': TThostFtdcBizTypeType,
                'InvestorRange': TThostFtdcInvestorRangeType,
                })
            print('查询合约手续费率响应')
            print(format_table(header, data))
        elif inp == 8:
            instrument_id = text_to_bytes(
                get_string_user_input('请输入合约代码: ', 1))
            margins = trader.query_instrument_margin_rate(instrument_id)
            header, data = to_table(margins, {
                'HedgeFlag': TThostFtdcHedgeFlagType,
                'InvestorRange': TThostFtdcInvestorRangeType
                })
            print('查询合约保证金率响应')
            print(format_table(header, data))
        elif inp == 9:
            investor_position = trader.query_investor_position()
            header, data = to_table(investor_position, {
                'PositionDate': TThostFtdcPositionDateType,
                'PosiDirection': TThostFtdcPosiDirectionType,
                'HedgeFlag': TThostFtdcHedgeFlagType
                })
            print('查询投资者持仓响应')
            print(format_table(header, data))
        elif inp == 10:
            details = trader.query_investor_position_detail()
            header, data = to_table(details, {
                'TradeType': TThostFtdcTradeTypeType,
                'Direction': TThostFtdcDirectionType,
                'HedgeFlag': TThostFtdcHedgeFlagType,
                'SpecPosiType': TThostFtdcSpecPosiTypeType
                })
            print('查询投资者持仓明细响应')
            print(format_table(header, data))
        elif inp == 11:
            traders = trader.query_trade()
            header, data = to_table(traders, {
                'Direction': TThostFtdcDirectionType,
                'HedgeFlag': TThostFtdcHedgeFlagType,
                'OffsetFlag': TThostFtdcOffsetFlagType,
                'PriceSource': TThostFtdcPriceSourceType,
                'TradeSource': TThostFtdcTradeSourceType,
                'TradeType': TThostFtdcTradeTypeType,
                'TradingRole': TThostFtdcTradingRoleType
                })
            print('查询成交响应')
            print(format_table(header, data))
        elif inp == 12:
            orders = trader.query_order()
            header, data = to_table(orders, {
                'OrderSource': TThostFtdcOrderSourceType,
                'Direction': TThostFtdcDirectionType,
                'CombHedgeFlag': TThostFtdcHedgeFlagType,
                'CombOffsetFlag': TThostFtdcOffsetFlagType,
                'OrderPriceType': TThostFtdcOrderPriceTypeType,
                'VolumeCondition': TThostFtdcVolumeConditionType,
                'ContingentCondition': TThostFtdcContingentConditionType,
                'ForceCloseReason': TThostFtdcForceCloseReasonType,
                'OrderStatus': TThostFtdcOrderStatusType,
                'OrderSubmitStatus': TThostFtdcOrderSubmitStatusType,
                'OrderType': TThostFtdcOrderTypeType,
                'TimeCondition': TThostFtdcTimeConditionType,
                'StatusMsg': bytes_to_text
                })
            print('查询报单响应')
            print(format_table(header, data))
        elif inp in (13, 14, 15, 16):
            instrument_id = text_to_bytes(
                get_string_user_input('请输入合约代码: ', 1))
            volume = get_int_in_range_user_input('请输入委托数量: ', 1, 999)
            price_type = [PyCTP.THOST_FTDC_OPT_LimitPrice,
                          PyCTP.THOST_FTDC_OPT_BestPrice,
                          PyCTP.THOST_FTDC_OPT_AnyPrice][
                              get_int_in_range_user_input(
                                  '请选择报价方式 [0=限价, 1=对手价, 2=任意价]: ',
                                  0, 2)]
            price = 0.0
            if price_type == PyCTP.THOST_FTDC_OPT_LimitPrice:
                price = get_float_user_input('请输入委托价格: ')
            action = None
            direction = None
            if inp == 13:
                action = PyCTP.THOST_FTDC_OF_Open
                direction = PyCTP.THOST_FTDC_D_Buy
            if inp == 14:
                action = PyCTP.THOST_FTDC_OF_Open
                direction = PyCTP.THOST_FTDC_D_Sell
            if inp in (15, 16):
                action = [
                    PyCTP.THOST_FTDC_OF_Close,
                    PyCTP.THOST_FTDC_OF_CloseToday,
                    PyCTP.THOST_FTDC_OF_CloseYesterday
                    ][get_int_in_range_user_input(
                        '请选择平仓方式 [0=默认, 1=平今, 2=平昨]: ', 0, 2)]
            if inp == 15:
                direction = PyCTP.THOST_FTDC_D_Sell
            if inp == 16:
                direction = PyCTP.THOST_FTDC_D_Buy
            prompt = '请仔细核对上述数据. 确认报单请输入 YES, 拒绝请输入 NO: '
            choice = get_string_user_input(prompt)
            if choice != 'YES':
                print('确认失败，操作已取消')
                continue
            input_order = trader.order_insert(
                instrument_id,
                action=action,
                direction=direction,
                volume=volume,
                price=price,
                price_type=price_type)
            header, data = to_table(input_order)
            print('报单录入请求响应')
            print(format_table(header, data))
        elif inp == 17:
            instrument_id = text_to_bytes(
                get_string_user_input('请输入合约代码: ', 1))
            insts = market.subscribe_market_data([instrument_id])
            header, data = to_table(insts)
            print('订阅行情应答')
            print(format_table(header, data))
        elif inp == 18:
            instrument_id = text_to_bytes(
                get_string_user_input('请输入合约代码: ', 1))
            insts = market.unsubscribe_market_data([instrument_id])
            header, data = to_table(insts)
            print('取消订阅行情应答')
            print(format_table(header, data))
        else:
            print('未实现操作 %d' % inp)
        user_input('--- 按回车继续 --- \n')
    print('交易账号登出:', trader.logout())
    print('行情账号登出:', market.logout())
    market.release()
    trader.release()
    market = None
    trader = None


if __name__ == '__main__':
    main()
