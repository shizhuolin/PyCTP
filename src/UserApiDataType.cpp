// UserApiDataType.cpp : 转换定义CTP预处理定义.
//

#include "stdafx.h"
#include "UserApiDataType.h"
#include <ThostFtdcUserApiDataType.h>


int PyModule_AddCharConstant(PyObject *m, const char *name, char value)
{
	PyObject *o = PyBytes_FromFormat("%c", value);
	if (!o)
		return -1;
	if (PyModule_AddObject(m, name, o) == 0)
		return 0;
	Py_DECREF(o);
	return -1;
}

int PyModule_AddCTPConstant(PyObject *m)
{
	if( PyModule_AddIntMacro(m, THOST_TERT_RESTART) != 0 ) return -1;
	if( PyModule_AddIntMacro(m, THOST_TERT_RESUME) != 0 ) return -1;
	if( PyModule_AddIntMacro(m, THOST_TERT_QUICK) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExchangePropertyType是一个交易所属性类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_EXP_Normal) != 0 ) return -1;
	///根据成交生成报单
	if( PyModule_AddCharMacro(m, THOST_FTDC_EXP_GenOrderByTrade) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcIdCardTypeType是一个证件类型类型
	/////////////////////////////////////////////////////////////////////////
	///组织机构代码
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_EID) != 0 ) return -1;
	///中国公民身份证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_IDCard) != 0 ) return -1;
	///军官证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_OfficerIDCard) != 0 ) return -1;
	///警官证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_PoliceIDCard) != 0 ) return -1;
	///士兵证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_SoldierIDCard) != 0 ) return -1;
	///户口簿
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_HouseholdRegister ) != 0 ) return -1;
	///护照
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_Passport) != 0 ) return -1;
	///台胞证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_TaiwanCompatriotIDCard ) != 0 ) return -1;
	///回乡证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_HomeComingCard) != 0 ) return -1;
	///营业执照号
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_LicenseNo) != 0 ) return -1;
	///税务登记号/当地纳税ID
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_TaxNo) != 0 ) return -1;
	///港澳居民来往内地通行证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_HMMainlandTravelPermit ) != 0 ) return -1;
	///台湾居民来往大陆通行证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_TwMainlandTravelPermit) != 0 ) return -1;
	///驾照
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_DrivingLicense) != 0 ) return -1;
	///当地社保ID
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_SocialID) != 0 ) return -1;
	///当地身份证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_LocalID) != 0 ) return -1;
	///商业登记证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_BusinessRegistration ) != 0 ) return -1;
	///港澳永久性居民身份证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_HKMCIDCard) != 0 ) return -1;
	///人行开户许可证
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_AccountsPermits) != 0 ) return -1;
	///其他证件
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICT_OtherCard) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInvestorRangeType是一个投资者范围类型
	/////////////////////////////////////////////////////////////////////////
	///所有
	if( PyModule_AddCharMacro(m, THOST_FTDC_IR_All) != 0 ) return -1;
	///投资者组
	if( PyModule_AddCharMacro(m, THOST_FTDC_IR_Group) != 0 ) return -1;
	///单一投资者
	if( PyModule_AddCharMacro(m, THOST_FTDC_IR_Single) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDepartmentRangeType是一个投资者范围类型
	/////////////////////////////////////////////////////////////////////////
	///所有
	if( PyModule_AddCharMacro(m, THOST_FTDC_DR_All) != 0 ) return -1;
	///组织架构
	if( PyModule_AddCharMacro(m, THOST_FTDC_DR_Group) != 0 ) return -1;
	///单一投资者
	if( PyModule_AddCharMacro(m, THOST_FTDC_DR_Single) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDataSyncStatusType是一个数据同步状态类型
	/////////////////////////////////////////////////////////////////////////
	///未同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_DS_Asynchronous) != 0 ) return -1;
	///同步中
	if( PyModule_AddCharMacro(m, THOST_FTDC_DS_Synchronizing) != 0 ) return -1;
	///已同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_DS_Synchronized) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBrokerDataSyncStatusType是一个经纪公司数据同步状态类型
	/////////////////////////////////////////////////////////////////////////
	///已同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_BDS_Synchronized) != 0 ) return -1;
	///同步中
	if( PyModule_AddCharMacro(m, THOST_FTDC_BDS_Synchronizing) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExchangeConnectStatusType是一个交易所连接状态类型
	/////////////////////////////////////////////////////////////////////////
	///没有任何连接
	if( PyModule_AddCharMacro(m, THOST_FTDC_ECS_NoConnection) != 0 ) return -1;
	///已经发出合约查询请求
	if( PyModule_AddCharMacro(m, THOST_FTDC_ECS_QryInstrumentSent) != 0 ) return -1;
	///已经获取信息
	if( PyModule_AddCharMacro(m, THOST_FTDC_ECS_GotInformation) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTraderConnectStatusType是一个交易所交易员连接状态类型
	/////////////////////////////////////////////////////////////////////////
	///没有任何连接
	if( PyModule_AddCharMacro(m, THOST_FTDC_TCS_NotConnected) != 0 ) return -1;
	///已经连接
	if( PyModule_AddCharMacro(m, THOST_FTDC_TCS_Connected) != 0 ) return -1;
	///已经发出合约查询请求
	if( PyModule_AddCharMacro(m, THOST_FTDC_TCS_QryInstrumentSent) != 0 ) return -1;
	///订阅私有流
	if( PyModule_AddCharMacro(m, THOST_FTDC_TCS_SubPrivateFlow) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFunctionCodeType是一个功能代码类型
	/////////////////////////////////////////////////////////////////////////
	///数据异步化
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_DataAsync) != 0 ) return -1;
	///强制用户登出
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_ForceUserLogout) != 0 ) return -1;
	///变更管理用户口令
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_UserPasswordUpdate) != 0 ) return -1;
	///变更经纪公司口令
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_BrokerPasswordUpdate) != 0 ) return -1;
	///变更投资者口令
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_InvestorPasswordUpdate) != 0 ) return -1;
	///报单插入
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_OrderInsert) != 0 ) return -1;
	///报单操作
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_OrderAction) != 0 ) return -1;
	///同步系统数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_SyncSystemData) != 0 ) return -1;
	///同步经纪公司数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_SyncBrokerData) != 0 ) return -1;
	///批量同步经纪公司数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_BachSyncBrokerData) != 0 ) return -1;
	///超级查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_SuperQuery) != 0 ) return -1;
	///预埋报单插入
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_ParkedOrderInsert) != 0 ) return -1;
	///预埋报单操作
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_ParkedOrderAction) != 0 ) return -1;
	///同步动态令牌
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_SyncOTP) != 0 ) return -1;
	///删除未知单
	if( PyModule_AddCharMacro(m, THOST_FTDC_FC_DeleteOrder) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBrokerFunctionCodeType是一个经纪公司功能代码类型
	/////////////////////////////////////////////////////////////////////////
	///强制用户登出
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_ForceUserLogout) != 0 ) return -1;
	///变更用户口令
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_UserPasswordUpdate) != 0 ) return -1;
	///同步经纪公司数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_SyncBrokerData) != 0 ) return -1;
	///批量同步经纪公司数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_BachSyncBrokerData) != 0 ) return -1;
	///报单插入
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_OrderInsert) != 0 ) return -1;
	///报单操作
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_OrderAction) != 0 ) return -1;
	///全部查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_AllQuery) != 0 ) return -1;
	///系统功能：登入/登出/修改密码等
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_log) != 0 ) return -1;
	///基本查询：查询基础数据，如合约，交易所等常量
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_BaseQry) != 0 ) return -1;
	///交易查询：如查成交，委托
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_TradeQry) != 0 ) return -1;
	///交易功能：报单，撤单
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_Trade) != 0 ) return -1;
	///银期转账
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_Virement) != 0 ) return -1;
	///风险监控
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_Risk) != 0 ) return -1;
	///查询/管理：查询会话，踢人等
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_Session) != 0 ) return -1;
	///风控通知控制
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_RiskNoticeCtl) != 0 ) return -1;
	///风控通知发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_RiskNotice) != 0 ) return -1;
	///察看经纪公司资金权限
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_BrokerDeposit) != 0 ) return -1;
	///资金查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryFund) != 0 ) return -1;
	///报单查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryOrder) != 0 ) return -1;
	///成交查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryTrade) != 0 ) return -1;
	///持仓查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryPosition) != 0 ) return -1;
	///行情查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryMarketData) != 0 ) return -1;
	///用户事件查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryUserEvent) != 0 ) return -1;
	///风险通知查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryRiskNotify) != 0 ) return -1;
	///出入金查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryFundChange) != 0 ) return -1;
	///投资者信息查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryInvestor) != 0 ) return -1;
	///交易编码查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QueryTradingCode) != 0 ) return -1;
	///强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_ForceClose) != 0 ) return -1;
	///压力测试
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_PressTest) != 0 ) return -1;
	///权益反算
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_RemainCalc) != 0 ) return -1;
	///净持仓保证金指标
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_NetPositionInd) != 0 ) return -1;
	///风险预算
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_RiskPredict) != 0 ) return -1;
	///数据导出
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_DataExport) != 0 ) return -1;
	///风控指标设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_RiskTargetSetup) != 0 ) return -1;
	///行情预警
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_MarketDataWarn) != 0 ) return -1;
	///业务通知查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_QryBizNotice) != 0 ) return -1;
	///业务通知模板设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_CfgBizNotice) != 0 ) return -1;
	///同步动态令牌
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_SyncOTP) != 0 ) return -1;
	///发送业务通知
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_SendBizNotice) != 0 ) return -1;
	///风险级别标准设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_CfgRiskLevelStd) != 0 ) return -1;
	///交易终端应急功能
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_TbCommand) != 0 ) return -1;
	///删除未知单
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_DeleteOrder) != 0 ) return -1;
	///预埋报单插入
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_ParkedOrderInsert) != 0 ) return -1;
	///预埋报单操作
	if( PyModule_AddCharMacro(m, THOST_FTDC_BFC_ParkedOrderAction) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrderActionStatusType是一个报单操作状态类型
	/////////////////////////////////////////////////////////////////////////
	///已经提交
	if( PyModule_AddCharMacro(m, THOST_FTDC_OAS_Submitted) != 0 ) return -1;
	///已经接受
	if( PyModule_AddCharMacro(m, THOST_FTDC_OAS_Accepted) != 0 ) return -1;
	///已经被拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_OAS_Rejected) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrderStatusType是一个报单状态类型
	/////////////////////////////////////////////////////////////////////////
	///全部成交
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_AllTraded) != 0 ) return -1;
	///部分成交还在队列中
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_PartTradedQueueing) != 0 ) return -1;
	///部分成交不在队列中
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_PartTradedNotQueueing) != 0 ) return -1;
	///未成交还在队列中
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_NoTradeQueueing) != 0 ) return -1;
	///未成交不在队列中
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_NoTradeNotQueueing) != 0 ) return -1;
	///撤单
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_Canceled) != 0 ) return -1;
	///未知
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_Unknown) != 0 ) return -1;
	///尚未触发
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_NotTouched) != 0 ) return -1;
	///已触发
	if( PyModule_AddCharMacro(m, THOST_FTDC_OST_Touched) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrderSubmitStatusType是一个报单提交状态类型
	/////////////////////////////////////////////////////////////////////////
	///已经提交
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSS_InsertSubmitted) != 0 ) return -1;
	///撤单已经提交
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSS_CancelSubmitted) != 0 ) return -1;
	///修改已经提交
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSS_ModifySubmitted) != 0 ) return -1;
	///已经接受
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSS_Accepted) != 0 ) return -1;
	///报单已经被拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSS_InsertRejected) != 0 ) return -1;
	///撤单已经被拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSS_CancelRejected) != 0 ) return -1;
	///改单已经被拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSS_ModifyRejected) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPositionDateType是一个持仓日期类型
	/////////////////////////////////////////////////////////////////////////
	///今日持仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_PSD_Today) != 0 ) return -1;
	///历史持仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_PSD_History) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPositionDateTypeType是一个持仓日期类型类型
	/////////////////////////////////////////////////////////////////////////
	///使用历史持仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_PDT_UseHistory) != 0 ) return -1;
	///不使用历史持仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_PDT_NoUseHistory) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTradingRoleType是一个交易角色类型
	/////////////////////////////////////////////////////////////////////////
	///代理
	if( PyModule_AddCharMacro(m, THOST_FTDC_ER_Broker) != 0 ) return -1;
	///自营
	if( PyModule_AddCharMacro(m, THOST_FTDC_ER_Host) != 0 ) return -1;
	///做市商
	if( PyModule_AddCharMacro(m, THOST_FTDC_ER_Maker) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcProductClassType是一个产品类型类型
	/////////////////////////////////////////////////////////////////////////
	///期货
	if( PyModule_AddCharMacro(m, THOST_FTDC_PC_Futures) != 0 ) return -1;
	///期货期权
	if( PyModule_AddCharMacro(m, THOST_FTDC_PC_Options) != 0 ) return -1;
	///组合
	if( PyModule_AddCharMacro(m, THOST_FTDC_PC_Combination) != 0 ) return -1;
	///即期
	if( PyModule_AddCharMacro(m, THOST_FTDC_PC_Spot) != 0 ) return -1;
	///期转现
	if( PyModule_AddCharMacro(m, THOST_FTDC_PC_EFP) != 0 ) return -1;
	///现货期权
	if( PyModule_AddCharMacro(m, THOST_FTDC_PC_SpotOption) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInstLifePhaseType是一个合约生命周期状态类型
	/////////////////////////////////////////////////////////////////////////
	///未上市
	if( PyModule_AddCharMacro(m, THOST_FTDC_IP_NotStart) != 0 ) return -1;
	///上市
	if( PyModule_AddCharMacro(m, THOST_FTDC_IP_Started) != 0 ) return -1;
	///停牌
	if( PyModule_AddCharMacro(m, THOST_FTDC_IP_Pause) != 0 ) return -1;
	///到期
	if( PyModule_AddCharMacro(m, THOST_FTDC_IP_Expired) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDirectionType是一个买卖方向类型
	/////////////////////////////////////////////////////////////////////////
	///买
	if( PyModule_AddCharMacro(m, THOST_FTDC_D_Buy) != 0 ) return -1;
	///卖
	if( PyModule_AddCharMacro(m, THOST_FTDC_D_Sell) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPositionTypeType是一个持仓类型类型
	/////////////////////////////////////////////////////////////////////////
	///净持仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_PT_Net) != 0 ) return -1;
	///综合持仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_PT_Gross) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPosiDirectionType是一个持仓多空方向类型
	/////////////////////////////////////////////////////////////////////////
	///净
	if( PyModule_AddCharMacro(m, THOST_FTDC_PD_Net) != 0 ) return -1;
	///多头
	if( PyModule_AddCharMacro(m, THOST_FTDC_PD_Long) != 0 ) return -1;
	///空头
	if( PyModule_AddCharMacro(m, THOST_FTDC_PD_Short) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSysSettlementStatusType是一个系统结算状态类型
	/////////////////////////////////////////////////////////////////////////
	///不活跃
	if( PyModule_AddCharMacro(m, THOST_FTDC_SS_NonActive) != 0 ) return -1;
	///启动
	if( PyModule_AddCharMacro(m, THOST_FTDC_SS_Startup) != 0 ) return -1;
	///操作
	if( PyModule_AddCharMacro(m, THOST_FTDC_SS_Operating) != 0 ) return -1;
	///结算
	if( PyModule_AddCharMacro(m, THOST_FTDC_SS_Settlement) != 0 ) return -1;
	///结算完成
	if( PyModule_AddCharMacro(m, THOST_FTDC_SS_SettlementFinished) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcRatioAttrType是一个费率属性类型
	/////////////////////////////////////////////////////////////////////////
	///交易费率
	if( PyModule_AddCharMacro(m, THOST_FTDC_RA_Trade) != 0 ) return -1;
	///结算费率
	if( PyModule_AddCharMacro(m, THOST_FTDC_RA_Settlement) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcHedgeFlagType是一个投机套保标志类型
	/////////////////////////////////////////////////////////////////////////
	///投机
	if( PyModule_AddCharMacro(m, THOST_FTDC_HF_Speculation) != 0 ) return -1;
	///套利
	if( PyModule_AddCharMacro(m, THOST_FTDC_HF_Arbitrage) != 0 ) return -1;
	///套保
	if( PyModule_AddCharMacro(m, THOST_FTDC_HF_Hedge) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBillHedgeFlagType是一个投机套保标志类型
	/////////////////////////////////////////////////////////////////////////
	///投机
	if( PyModule_AddCharMacro(m, THOST_FTDC_BHF_Speculation) != 0 ) return -1;
	///套利
	if( PyModule_AddCharMacro(m, THOST_FTDC_BHF_Arbitrage) != 0 ) return -1;
	///套保
	if( PyModule_AddCharMacro(m, THOST_FTDC_BHF_Hedge) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcClientIDTypeType是一个交易编码类型类型
	/////////////////////////////////////////////////////////////////////////
	///投机
	if( PyModule_AddCharMacro(m, THOST_FTDC_CIDT_Speculation) != 0 ) return -1;
	///套利
	if( PyModule_AddCharMacro(m, THOST_FTDC_CIDT_Arbitrage) != 0 ) return -1;
	///套保
	if( PyModule_AddCharMacro(m, THOST_FTDC_CIDT_Hedge) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrderPriceTypeType是一个报单价格条件类型
	/////////////////////////////////////////////////////////////////////////
	///任意价
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_AnyPrice) != 0 ) return -1;
	///限价
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_LimitPrice) != 0 ) return -1;
	///最优价
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_BestPrice) != 0 ) return -1;
	///最新价
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_LastPrice) != 0 ) return -1;
	///最新价浮动上浮1个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_LastPricePlusOneTicks) != 0 ) return -1;
	///最新价浮动上浮2个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_LastPricePlusTwoTicks) != 0 ) return -1;
	///最新价浮动上浮3个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_LastPricePlusThreeTicks) != 0 ) return -1;
	///卖一价
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_AskPrice1) != 0 ) return -1;
	///卖一价浮动上浮1个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_AskPrice1PlusOneTicks) != 0 ) return -1;
	///卖一价浮动上浮2个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_AskPrice1PlusTwoTicks) != 0 ) return -1;
	///卖一价浮动上浮3个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_AskPrice1PlusThreeTicks) != 0 ) return -1;
	///买一价
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_BidPrice1) != 0 ) return -1;
	///买一价浮动上浮1个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_BidPrice1PlusOneTicks) != 0 ) return -1;
	///买一价浮动上浮2个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_BidPrice1PlusTwoTicks) != 0 ) return -1;
	///买一价浮动上浮3个ticks
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_BidPrice1PlusThreeTicks) != 0 ) return -1;
	///五档价
	if( PyModule_AddCharMacro(m, THOST_FTDC_OPT_FiveLevelPrice) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOffsetFlagType是一个开平标志类型
	/////////////////////////////////////////////////////////////////////////
	///开仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_OF_Open) != 0 ) return -1;
	///平仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_OF_Close) != 0 ) return -1;
	///强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_OF_ForceClose) != 0 ) return -1;
	///平今
	if( PyModule_AddCharMacro(m, THOST_FTDC_OF_CloseToday) != 0 ) return -1;
	///平昨
	if( PyModule_AddCharMacro(m, THOST_FTDC_OF_CloseYesterday) != 0 ) return -1;
	///强减
	if( PyModule_AddCharMacro(m, THOST_FTDC_OF_ForceOff) != 0 ) return -1;
	///本地强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_OF_LocalForceClose) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcForceCloseReasonType是一个强平原因类型
	/////////////////////////////////////////////////////////////////////////
	///非强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCC_NotForceClose) != 0 ) return -1;
	///资金不足
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCC_LackDeposit) != 0 ) return -1;
	///客户超仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCC_ClientOverPositionLimit) != 0 ) return -1;
	///会员超仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCC_MemberOverPositionLimit) != 0 ) return -1;
	///持仓非整数倍
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCC_NotMultiple) != 0 ) return -1;
	///违规
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCC_Violation) != 0 ) return -1;
	///其它
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCC_Other) != 0 ) return -1;
	///自然人临近交割
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCC_PersonDeliv) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrderTypeType是一个报单类型类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORDT_Normal) != 0 ) return -1;
	///报价衍生
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORDT_DeriveFromQuote) != 0 ) return -1;
	///组合衍生
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORDT_DeriveFromCombination) != 0 ) return -1;
	///组合报单
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORDT_Combination) != 0 ) return -1;
	///条件单
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORDT_ConditionalOrder) != 0 ) return -1;
	///互换单
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORDT_Swap) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTimeConditionType是一个有效期类型类型
	/////////////////////////////////////////////////////////////////////////
	///立即完成，否则撤销
	if( PyModule_AddCharMacro(m, THOST_FTDC_TC_IOC) != 0 ) return -1;
	///本节有效
	if( PyModule_AddCharMacro(m, THOST_FTDC_TC_GFS) != 0 ) return -1;
	///当日有效
	if( PyModule_AddCharMacro(m, THOST_FTDC_TC_GFD) != 0 ) return -1;
	///指定日期前有效
	if( PyModule_AddCharMacro(m, THOST_FTDC_TC_GTD) != 0 ) return -1;
	///撤销前有效
	if( PyModule_AddCharMacro(m, THOST_FTDC_TC_GTC) != 0 ) return -1;
	///集合竞价有效
	if( PyModule_AddCharMacro(m, THOST_FTDC_TC_GFA) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcVolumeConditionType是一个成交量类型类型
	/////////////////////////////////////////////////////////////////////////
	///任何数量
	if( PyModule_AddCharMacro(m, THOST_FTDC_VC_AV) != 0 ) return -1;
	///最小数量
	if( PyModule_AddCharMacro(m, THOST_FTDC_VC_MV) != 0 ) return -1;
	///全部数量
	if( PyModule_AddCharMacro(m, THOST_FTDC_VC_CV) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcContingentConditionType是一个触发条件类型
	/////////////////////////////////////////////////////////////////////////
	///立即
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_Immediately) != 0 ) return -1;
	///止损
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_Touch) != 0 ) return -1;
	///止赢
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_TouchProfit) != 0 ) return -1;
	///预埋单
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_ParkedOrder) != 0 ) return -1;
	///最新价大于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_LastPriceGreaterThanStopPrice) != 0 ) return -1;
	///最新价大于等于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_LastPriceGreaterEqualStopPrice) != 0 ) return -1;
	///最新价小于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_LastPriceLesserThanStopPrice) != 0 ) return -1;
	///最新价小于等于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_LastPriceLesserEqualStopPrice) != 0 ) return -1;
	///卖一价大于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_AskPriceGreaterThanStopPrice) != 0 ) return -1;
	///卖一价大于等于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_AskPriceGreaterEqualStopPrice) != 0 ) return -1;
	///卖一价小于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_AskPriceLesserThanStopPrice) != 0 ) return -1;
	///卖一价小于等于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_AskPriceLesserEqualStopPrice) != 0 ) return -1;
	///买一价大于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_BidPriceGreaterThanStopPrice) != 0 ) return -1;
	///买一价大于等于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_BidPriceGreaterEqualStopPrice) != 0 ) return -1;
	///买一价小于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_BidPriceLesserThanStopPrice) != 0 ) return -1;
	///买一价小于等于条件价
	if( PyModule_AddCharMacro(m, THOST_FTDC_CC_BidPriceLesserEqualStopPrice) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcActionFlagType是一个操作标志类型
	/////////////////////////////////////////////////////////////////////////
	///删除
	if( PyModule_AddCharMacro(m, THOST_FTDC_AF_Delete) != 0 ) return -1;
	///修改
	if( PyModule_AddCharMacro(m, THOST_FTDC_AF_Modify) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTradingRightType是一个交易权限类型
	/////////////////////////////////////////////////////////////////////////
	///可以交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_TR_Allow) != 0 ) return -1;
	///只能平仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_TR_CloseOnly) != 0 ) return -1;
	///不能交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_TR_Forbidden) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrderSourceType是一个报单来源类型
	/////////////////////////////////////////////////////////////////////////
	///来自参与者
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSRC_Participant) != 0 ) return -1;
	///来自管理员
	if( PyModule_AddCharMacro(m, THOST_FTDC_OSRC_Administrator) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTradeTypeType是一个成交类型类型
	/////////////////////////////////////////////////////////////////////////
	///组合持仓拆分为单一持仓,初始化不应包含该类型的持仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_TRDT_SplitCombination) != 0 ) return -1;
	///普通成交
	if( PyModule_AddCharMacro(m, THOST_FTDC_TRDT_Common) != 0 ) return -1;
	///期权执行
	if( PyModule_AddCharMacro(m, THOST_FTDC_TRDT_OptionsExecution) != 0 ) return -1;
	///OTC成交
	if( PyModule_AddCharMacro(m, THOST_FTDC_TRDT_OTC) != 0 ) return -1;
	///期转现衍生成交
	if( PyModule_AddCharMacro(m, THOST_FTDC_TRDT_EFPDerived) != 0 ) return -1;
	///组合衍生成交
	if( PyModule_AddCharMacro(m, THOST_FTDC_TRDT_CombinationDerived) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPriceSourceType是一个成交价来源类型
	/////////////////////////////////////////////////////////////////////////
	///前成交价
	if( PyModule_AddCharMacro(m, THOST_FTDC_PSRC_LastPrice) != 0 ) return -1;
	///买委托价
	if( PyModule_AddCharMacro(m, THOST_FTDC_PSRC_Buy) != 0 ) return -1;
	///卖委托价
	if( PyModule_AddCharMacro(m, THOST_FTDC_PSRC_Sell) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInstrumentStatusType是一个合约交易状态类型
	/////////////////////////////////////////////////////////////////////////
	///开盘前
	if( PyModule_AddCharMacro(m, THOST_FTDC_IS_BeforeTrading) != 0 ) return -1;
	///非交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_IS_NoTrading) != 0 ) return -1;
	///连续交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_IS_Continous) != 0 ) return -1;
	///集合竞价报单
	if( PyModule_AddCharMacro(m, THOST_FTDC_IS_AuctionOrdering) != 0 ) return -1;
	///集合竞价价格平衡
	if( PyModule_AddCharMacro(m, THOST_FTDC_IS_AuctionBalance) != 0 ) return -1;
	///集合竞价撮合
	if( PyModule_AddCharMacro(m, THOST_FTDC_IS_AuctionMatch) != 0 ) return -1;
	///收盘
	if( PyModule_AddCharMacro(m, THOST_FTDC_IS_Closed) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInstStatusEnterReasonType是一个品种进入交易状态原因类型
	/////////////////////////////////////////////////////////////////////////
	///自动切换
	if( PyModule_AddCharMacro(m, THOST_FTDC_IER_Automatic) != 0 ) return -1;
	///手动切换
	if( PyModule_AddCharMacro(m, THOST_FTDC_IER_Manual) != 0 ) return -1;
	///熔断
	if( PyModule_AddCharMacro(m, THOST_FTDC_IER_Fuse) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBatchStatusType是一个处理状态类型
	/////////////////////////////////////////////////////////////////////////
	///未上传
	if( PyModule_AddCharMacro(m, THOST_FTDC_BS_NoUpload) != 0 ) return -1;
	///已上传
	if( PyModule_AddCharMacro(m, THOST_FTDC_BS_Uploaded) != 0 ) return -1;
	///审核失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_BS_Failed) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcReturnStyleType是一个按品种返还方式类型
	/////////////////////////////////////////////////////////////////////////
	///按所有品种
	if( PyModule_AddCharMacro(m, THOST_FTDC_RS_All) != 0 ) return -1;
	///按品种
	if( PyModule_AddCharMacro(m, THOST_FTDC_RS_ByProduct) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcReturnPatternType是一个返还模式类型
	/////////////////////////////////////////////////////////////////////////
	///按成交手数
	if( PyModule_AddCharMacro(m, THOST_FTDC_RP_ByVolume) != 0 ) return -1;
	///按留存手续费
	if( PyModule_AddCharMacro(m, THOST_FTDC_RP_ByFeeOnHand) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcReturnLevelType是一个返还级别类型
	/////////////////////////////////////////////////////////////////////////
	///级别1
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level1) != 0 ) return -1;
	///级别2
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level2) != 0 ) return -1;
	///级别3
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level3) != 0 ) return -1;
	///级别4
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level4) != 0 ) return -1;
	///级别5
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level5) != 0 ) return -1;
	///级别6
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level6) != 0 ) return -1;
	///级别7
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level7) != 0 ) return -1;
	///级别8
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level8) != 0 ) return -1;
	///级别9
	if( PyModule_AddCharMacro(m, THOST_FTDC_RL_Level9) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcReturnStandardType是一个返还标准类型
	/////////////////////////////////////////////////////////////////////////
	///分阶段返还
	if( PyModule_AddCharMacro(m, THOST_FTDC_RSD_ByPeriod) != 0 ) return -1;
	///按某一标准
	if( PyModule_AddCharMacro(m, THOST_FTDC_RSD_ByStandard) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcMortgageTypeType是一个质押类型类型
	/////////////////////////////////////////////////////////////////////////
	///质出
	if( PyModule_AddCharMacro(m, THOST_FTDC_MT_Out) != 0 ) return -1;
	///质入
	if( PyModule_AddCharMacro(m, THOST_FTDC_MT_In) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInvestorSettlementParamIDType是一个投资者结算参数代码类型
	/////////////////////////////////////////////////////////////////////////
	///质押比例
	if( PyModule_AddCharMacro(m, THOST_FTDC_ISPI_MortgageRatio) != 0 ) return -1;
	///保证金算法
	if( PyModule_AddCharMacro(m, THOST_FTDC_ISPI_MarginWay) != 0 ) return -1;
	///结算单结存是否包含质押
	if( PyModule_AddCharMacro(m, THOST_FTDC_ISPI_BillDeposit) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExchangeSettlementParamIDType是一个交易所结算参数代码类型
	/////////////////////////////////////////////////////////////////////////
	///质押比例
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_MortgageRatio) != 0 ) return -1;
	///分项资金导入项
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_OtherFundItem) != 0 ) return -1;
	///分项资金入交易所出入金
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_OtherFundImport) != 0 ) return -1;
	///中金所开户最低可用金额
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_CFFEXMinPrepa) != 0 ) return -1;
	///郑商所结算方式
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_CZCESettlementType) != 0 ) return -1;
	///交易所交割手续费收取方式
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_ExchDelivFeeMode) != 0 ) return -1;
	///投资者交割手续费收取方式
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_DelivFeeMode) != 0 ) return -1;
	///郑商所组合持仓保证金收取方式
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_CZCEComMarginType) != 0 ) return -1;
	///大商所套利保证金是否优惠
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_DceComMarginType) != 0 ) return -1;
	///虚值期权保证金优惠比率
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_OptOutDisCountRate) != 0 ) return -1;
	///最低保障系数
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESPI_OptMiniGuarantee) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSystemParamIDType是一个系统参数代码类型
	/////////////////////////////////////////////////////////////////////////
	///投资者代码最小长度
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_InvestorIDMinLength) != 0 ) return -1;
	///投资者帐号代码最小长度
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_AccountIDMinLength) != 0 ) return -1;
	///投资者开户默认登录权限
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_UserRightLogon) != 0 ) return -1;
	///投资者交易结算单成交汇总方式
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_SettlementBillTrade) != 0 ) return -1;
	///统一开户更新交易编码方式
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_TradingCode) != 0 ) return -1;
	///结算是否判断存在未复核的出入金和分项资金
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_CheckFund) != 0 ) return -1;
	///是否启用手续费模板数据权限
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_CommModelRight) != 0 ) return -1;
	///是否启用保证金率模板数据权限
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_MarginModelRight) != 0 ) return -1;
	///是否规范用户才能激活
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_IsStandardActive) != 0 ) return -1;
	///上传的交易所结算文件路径
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_UploadSettlementFile) != 0 ) return -1;
	///上报保证金监控中心文件路径
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_DownloadCSRCFile) != 0 ) return -1;
	///生成的结算单文件路径
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_SettlementBillFile) != 0 ) return -1;
	///证监会文件标识
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_CSRCOthersFile) != 0 ) return -1;
	///投资者照片路径
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_InvestorPhoto) != 0 ) return -1;
	///全结经纪公司上传文件路径
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_CSRCData) != 0 ) return -1;
	///开户密码录入方式
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_InvestorPwdModel) != 0 ) return -1;
	///投资者中金所结算文件下载路径
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_CFFEXInvestorSettleFile) != 0 ) return -1;
	///投资者代码编码方式
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_InvestorIDType) != 0 ) return -1;
	///休眠户最高权益
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_FreezeMaxReMain) != 0 ) return -1;
	///手续费相关操作实时上场开关
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_IsSync) != 0 ) return -1;
	///解除开仓权限限制
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_RelieveOpenLimit) != 0 ) return -1;
	///是否规范用户才能休眠
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_IsStandardFreeze) != 0 ) return -1;
	///郑商所是否开放所有品种套保交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPI_CZCENormalProductHedge) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTradeParamIDType是一个交易系统参数代码类型
	/////////////////////////////////////////////////////////////////////////
	///系统加密算法
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_EncryptionStandard) != 0 ) return -1;
	///系统风险算法
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_RiskMode) != 0 ) return -1;
	///系统风险算法是否全局 0-否 1-是
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_RiskModeGlobal) != 0 ) return -1;
	///密码加密算法
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_modeEncode) != 0 ) return -1;
	///价格小数位数参数
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_tickMode) != 0 ) return -1;
	///用户最大会话数
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_SingleUserSessionMaxNum) != 0 ) return -1;
	///最大连续登录失败数
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_LoginFailMaxNum) != 0 ) return -1;
	///是否强制认证
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_IsAuthForce) != 0 ) return -1;
	///是否冻结证券持仓
	//if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_IsPosiFreeze) != 0 ) return -1;
	///是否限仓
	//if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_IsPosiLimit) != 0 ) return -1;
	///郑商所询价时间间隔
	//if( PyModule_AddCharMacro(m, THOST_FTDC_TPID_ForQuoteTimeInterval) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFileIDType是一个文件标识类型
	/////////////////////////////////////////////////////////////////////////
	///资金数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_SettlementFund) != 0 ) return -1;
	///成交数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_Trade) != 0 ) return -1;
	///投资者持仓数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_InvestorPosition) != 0 ) return -1;
	///投资者分项资金数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_SubEntryFund) != 0 ) return -1;
	///组合持仓数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_CZCECombinationPos) != 0 ) return -1;
	///上报保证金监控中心数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_CSRCData) != 0 ) return -1;
	///郑商所平仓了结数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_CZCEClose) != 0 ) return -1;
	///郑商所非平仓了结数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_CZCENoClose) != 0 ) return -1;
	///持仓明细数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_PositionDtl) != 0 ) return -1;
	///期权执行文件
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_OptionStrike) != 0 ) return -1;
	///结算价比对文件
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_SettlementPriceComparison) != 0 ) return -1;
	///上期所非持仓变动明细
	if( PyModule_AddCharMacro(m, THOST_FTDC_FI_NonTradePosChange) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFileTypeType是一个文件上传类型类型
	/////////////////////////////////////////////////////////////////////////
	///结算
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUT_Settlement) != 0 ) return -1;
	///核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUT_Check) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFileFormatType是一个文件格式类型
	/////////////////////////////////////////////////////////////////////////
	///文本文件(.txt)
	if( PyModule_AddCharMacro(m, THOST_FTDC_FFT_Txt) != 0 ) return -1;
	///压缩文件(.zip)
	if( PyModule_AddCharMacro(m, THOST_FTDC_FFT_Zip) != 0 ) return -1;
	///DBF文件(.dbf)
	if( PyModule_AddCharMacro(m, THOST_FTDC_FFT_DBF) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFileUploadStatusType是一个文件状态类型
	/////////////////////////////////////////////////////////////////////////
	///上传成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUS_SucceedUpload) != 0 ) return -1;
	///上传失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUS_FailedUpload) != 0 ) return -1;
	///导入成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUS_SucceedLoad) != 0 ) return -1;
	///导入部分成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUS_PartSucceedLoad) != 0 ) return -1;
	///导入失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUS_FailedLoad) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTransferDirectionType是一个移仓方向类型
	/////////////////////////////////////////////////////////////////////////
	///移出
	if( PyModule_AddCharMacro(m, THOST_FTDC_TD_Out) != 0 ) return -1;
	///移入
	if( PyModule_AddCharMacro(m, THOST_FTDC_TD_In) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSpecialCreateRuleType是一个特殊的创建规则类型
	/////////////////////////////////////////////////////////////////////////
	///没有特殊创建规则
	if( PyModule_AddCharMacro(m, THOST_FTDC_SC_NoSpecialRule) != 0 ) return -1;
	///不包含春节
	if( PyModule_AddCharMacro(m, THOST_FTDC_SC_NoSpringFestival) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBasisPriceTypeType是一个挂牌基准价类型类型
	/////////////////////////////////////////////////////////////////////////
	///上一合约结算价
	if( PyModule_AddCharMacro(m, THOST_FTDC_IPT_LastSettlement) != 0 ) return -1;
	///上一合约收盘价
	if( PyModule_AddCharMacro(m, THOST_FTDC_IPT_LaseClose) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcProductLifePhaseType是一个产品生命周期状态类型
	/////////////////////////////////////////////////////////////////////////
	///活跃
	if( PyModule_AddCharMacro(m, THOST_FTDC_PLP_Active) != 0 ) return -1;
	///不活跃
	if( PyModule_AddCharMacro(m, THOST_FTDC_PLP_NonActive) != 0 ) return -1;
	///注销
	if( PyModule_AddCharMacro(m, THOST_FTDC_PLP_Canceled) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDeliveryModeType是一个交割方式类型
	/////////////////////////////////////////////////////////////////////////
	///现金交割
	if( PyModule_AddCharMacro(m, THOST_FTDC_DM_CashDeliv) != 0 ) return -1;
	///实物交割
	if( PyModule_AddCharMacro(m, THOST_FTDC_DM_CommodityDeliv) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundIOTypeType是一个出入金类型类型
	/////////////////////////////////////////////////////////////////////////
	///出入金
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIOT_FundIO) != 0 ) return -1;
	///银期转帐
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIOT_Transfer) != 0 ) return -1;
	///银期换汇
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIOT_SwapCurrency) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundTypeType是一个资金类型类型
	/////////////////////////////////////////////////////////////////////////
	///银行存款
	if( PyModule_AddCharMacro(m, THOST_FTDC_FT_Deposite) != 0 ) return -1;
	///分项资金
	if( PyModule_AddCharMacro(m, THOST_FTDC_FT_ItemFund) != 0 ) return -1;
	///公司调整
	if( PyModule_AddCharMacro(m, THOST_FTDC_FT_Company) != 0 ) return -1;
	///资金内转
	if( PyModule_AddCharMacro(m, THOST_FTDC_FT_InnerTransfer) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundDirectionType是一个出入金方向类型
	/////////////////////////////////////////////////////////////////////////
	///入金
	if( PyModule_AddCharMacro(m, THOST_FTDC_FD_In) != 0 ) return -1;
	///出金
	if( PyModule_AddCharMacro(m, THOST_FTDC_FD_Out) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundStatusType是一个资金状态类型
	/////////////////////////////////////////////////////////////////////////
	///已录入
	if( PyModule_AddCharMacro(m, THOST_FTDC_FS_Record) != 0 ) return -1;
	///已复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_FS_Check) != 0 ) return -1;
	///已冲销
	if( PyModule_AddCharMacro(m, THOST_FTDC_FS_Charge) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPublishStatusType是一个发布状态类型
	/////////////////////////////////////////////////////////////////////////
	///未发布
	if( PyModule_AddCharMacro(m, THOST_FTDC_PS_None) != 0 ) return -1;
	///正在发布
	if( PyModule_AddCharMacro(m, THOST_FTDC_PS_Publishing) != 0 ) return -1;
	///已发布
	if( PyModule_AddCharMacro(m, THOST_FTDC_PS_Published) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSystemStatusType是一个系统状态类型
	/////////////////////////////////////////////////////////////////////////
	///不活跃
	if( PyModule_AddCharMacro(m, THOST_FTDC_ES_NonActive) != 0 ) return -1;
	///启动
	if( PyModule_AddCharMacro(m, THOST_FTDC_ES_Startup) != 0 ) return -1;
	///交易开始初始化
	if( PyModule_AddCharMacro(m, THOST_FTDC_ES_Initialize) != 0 ) return -1;
	///交易完成初始化
	if( PyModule_AddCharMacro(m, THOST_FTDC_ES_Initialized) != 0 ) return -1;
	///收市开始
	if( PyModule_AddCharMacro(m, THOST_FTDC_ES_Close) != 0 ) return -1;
	///收市完成
	if( PyModule_AddCharMacro(m, THOST_FTDC_ES_Closed) != 0 ) return -1;
	///结算
	if( PyModule_AddCharMacro(m, THOST_FTDC_ES_Settlement) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSettlementStatusType是一个结算状态类型
	/////////////////////////////////////////////////////////////////////////
	///初始
	if( PyModule_AddCharMacro(m, THOST_FTDC_STS_Initialize) != 0 ) return -1;
	///结算中
	if( PyModule_AddCharMacro(m, THOST_FTDC_STS_Settlementing) != 0 ) return -1;
	///已结算
	if( PyModule_AddCharMacro(m, THOST_FTDC_STS_Settlemented) != 0 ) return -1;
	///结算完成
	if( PyModule_AddCharMacro(m, THOST_FTDC_STS_Finished) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInvestorTypeType是一个投资者类型类型
	/////////////////////////////////////////////////////////////////////////
	///自然人
	if( PyModule_AddCharMacro(m, THOST_FTDC_CT_Person) != 0 ) return -1;
	///法人
	if( PyModule_AddCharMacro(m, THOST_FTDC_CT_Company) != 0 ) return -1;
	///投资基金
	if( PyModule_AddCharMacro(m, THOST_FTDC_CT_Fund) != 0 ) return -1;
	///特殊法人
	if( PyModule_AddCharMacro(m, THOST_FTDC_CT_SpecialOrgan) != 0 ) return -1;
	///资管户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CT_Asset) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBrokerTypeType是一个经纪公司类型类型
	/////////////////////////////////////////////////////////////////////////
	///交易会员
	if( PyModule_AddCharMacro(m, THOST_FTDC_BT_Trade) != 0 ) return -1;
	///交易结算会员
	if( PyModule_AddCharMacro(m, THOST_FTDC_BT_TradeSettle) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcRiskLevelType是一个风险等级类型
	/////////////////////////////////////////////////////////////////////////
	///低风险客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAS_Low) != 0 ) return -1;
	///普通客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAS_Normal) != 0 ) return -1;
	///关注客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAS_Focus) != 0 ) return -1;
	///风险客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAS_Risk) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFeeAcceptStyleType是一个手续费收取方式类型
	/////////////////////////////////////////////////////////////////////////
	///按交易收取
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAS_ByTrade) != 0 ) return -1;
	///按交割收取
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAS_ByDeliv) != 0 ) return -1;
	///不收
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAS_None) != 0 ) return -1;
	///按指定手续费收取
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAS_FixFee) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPasswordTypeType是一个密码类型类型
	/////////////////////////////////////////////////////////////////////////
	///交易密码
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWDT_Trade) != 0 ) return -1;
	///资金密码
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWDT_Account) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAlgorithmType是一个盈亏算法类型
	/////////////////////////////////////////////////////////////////////////
	///浮盈浮亏都计算
	if( PyModule_AddCharMacro(m, THOST_FTDC_AG_All) != 0 ) return -1;
	///浮盈不计，浮亏计
	if( PyModule_AddCharMacro(m, THOST_FTDC_AG_OnlyLost) != 0 ) return -1;
	///浮盈计，浮亏不计
	if( PyModule_AddCharMacro(m, THOST_FTDC_AG_OnlyGain) != 0 ) return -1;
	///浮盈浮亏都不计算
	if( PyModule_AddCharMacro(m, THOST_FTDC_AG_None) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcIncludeCloseProfitType是一个是否包含平仓盈利类型
	/////////////////////////////////////////////////////////////////////////
	///包含平仓盈利
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICP_Include) != 0 ) return -1;
	///不包含平仓盈利
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICP_NotInclude) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAllWithoutTradeType是一个是否受可提比例限制类型
	/////////////////////////////////////////////////////////////////////////
	///无仓无成交不受可提比例限制
	if( PyModule_AddCharMacro(m, THOST_FTDC_AWT_Enable) != 0 ) return -1;
	///受可提比例限制
	if( PyModule_AddCharMacro(m, THOST_FTDC_AWT_Disable) != 0 ) return -1;
	///无仓不受可提比例限制
	if( PyModule_AddCharMacro(m, THOST_FTDC_AWT_NoHoldEnable) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFuturePwdFlagType是一个资金密码核对标志类型
	/////////////////////////////////////////////////////////////////////////
	///不核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_FPWD_UnCheck) != 0 ) return -1;
	///核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_FPWD_Check) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTransferTypeType是一个银期转账类型类型
	/////////////////////////////////////////////////////////////////////////
	///银行转期货
	if( PyModule_AddCharMacro(m, THOST_FTDC_TT_BankToFuture) != 0 ) return -1;
	///期货转银行
	if( PyModule_AddCharMacro(m, THOST_FTDC_TT_FutureToBank) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTransferValidFlagType是一个转账有效标志类型
	/////////////////////////////////////////////////////////////////////////
	///无效或失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_TVF_Invalid) != 0 ) return -1;
	///有效
	if( PyModule_AddCharMacro(m, THOST_FTDC_TVF_Valid) != 0 ) return -1;
	///冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_TVF_Reverse) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcReasonType是一个事由类型
	/////////////////////////////////////////////////////////////////////////
	///错单
	if( PyModule_AddCharMacro(m, THOST_FTDC_RN_CD) != 0 ) return -1;
	///资金在途
	if( PyModule_AddCharMacro(m, THOST_FTDC_RN_ZT) != 0 ) return -1;
	///其它
	if( PyModule_AddCharMacro(m, THOST_FTDC_RN_QT) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSexType是一个性别类型
	/////////////////////////////////////////////////////////////////////////
	///未知
	if( PyModule_AddCharMacro(m, THOST_FTDC_SEX_None) != 0 ) return -1;
	///男
	if( PyModule_AddCharMacro(m, THOST_FTDC_SEX_Man) != 0 ) return -1;
	///女
	if( PyModule_AddCharMacro(m, THOST_FTDC_SEX_Woman) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcUserTypeType是一个用户类型类型
	/////////////////////////////////////////////////////////////////////////
	///投资者
	if( PyModule_AddCharMacro(m, THOST_FTDC_UT_Investor) != 0 ) return -1;
	///操作员
	if( PyModule_AddCharMacro(m, THOST_FTDC_UT_Operator) != 0 ) return -1;
	///管理员
	if( PyModule_AddCharMacro(m, THOST_FTDC_UT_SuperUser) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcRateTypeType是一个费率类型类型
	/////////////////////////////////////////////////////////////////////////
	///保证金率
	if( PyModule_AddCharMacro(m, THOST_FTDC_RATETYPE_MarginRate) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcNoteTypeType是一个通知类型类型
	/////////////////////////////////////////////////////////////////////////
	///交易结算单
	if( PyModule_AddCharMacro(m, THOST_FTDC_NOTETYPE_TradeSettleBill) != 0 ) return -1;
	///交易结算月报
	if( PyModule_AddCharMacro(m, THOST_FTDC_NOTETYPE_TradeSettleMonth) != 0 ) return -1;
	///追加保证金通知书
	if( PyModule_AddCharMacro(m, THOST_FTDC_NOTETYPE_CallMarginNotes) != 0 ) return -1;
	///强行平仓通知书
	if( PyModule_AddCharMacro(m, THOST_FTDC_NOTETYPE_ForceCloseNotes) != 0 ) return -1;
	///成交通知书
	if( PyModule_AddCharMacro(m, THOST_FTDC_NOTETYPE_TradeNotes) != 0 ) return -1;
	///交割通知书
	if( PyModule_AddCharMacro(m, THOST_FTDC_NOTETYPE_DelivNotes) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSettlementStyleType是一个结算单方式类型
	/////////////////////////////////////////////////////////////////////////
	///逐日盯市
	if( PyModule_AddCharMacro(m, THOST_FTDC_SBS_Day) != 0 ) return -1;
	///逐笔对冲
	if( PyModule_AddCharMacro(m, THOST_FTDC_SBS_Volume) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSettlementBillTypeType是一个结算单类型类型
	/////////////////////////////////////////////////////////////////////////
	///日报
	if( PyModule_AddCharMacro(m, THOST_FTDC_ST_Day) != 0 ) return -1;
	///月报
	if( PyModule_AddCharMacro(m, THOST_FTDC_ST_Month) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcUserRightTypeType是一个客户权限类型类型
	/////////////////////////////////////////////////////////////////////////
	///登录
	if( PyModule_AddCharMacro(m, THOST_FTDC_URT_Logon) != 0 ) return -1;
	///银期转帐
	if( PyModule_AddCharMacro(m, THOST_FTDC_URT_Transfer) != 0 ) return -1;
	///邮寄结算单
	if( PyModule_AddCharMacro(m, THOST_FTDC_URT_EMail) != 0 ) return -1;
	///传真结算单
	if( PyModule_AddCharMacro(m, THOST_FTDC_URT_Fax) != 0 ) return -1;
	///条件单
	if( PyModule_AddCharMacro(m, THOST_FTDC_URT_ConditionOrder) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcMarginPriceTypeType是一个保证金价格类型类型
	/////////////////////////////////////////////////////////////////////////
	///昨结算价
	if( PyModule_AddCharMacro(m, THOST_FTDC_MPT_PreSettlementPrice) != 0 ) return -1;
	///最新价
	if( PyModule_AddCharMacro(m, THOST_FTDC_MPT_SettlementPrice) != 0 ) return -1;
	///成交均价
	if( PyModule_AddCharMacro(m, THOST_FTDC_MPT_AveragePrice) != 0 ) return -1;
	///开仓价
	if( PyModule_AddCharMacro(m, THOST_FTDC_MPT_OpenPrice) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBillGenStatusType是一个结算单生成状态类型
	/////////////////////////////////////////////////////////////////////////
	///未生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_BGS_None) != 0 ) return -1;
	///生成中
	if( PyModule_AddCharMacro(m, THOST_FTDC_BGS_NoGenerated) != 0 ) return -1;
	///已生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_BGS_Generated) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAlgoTypeType是一个算法类型类型
	/////////////////////////////////////////////////////////////////////////
	///持仓处理算法
	if( PyModule_AddCharMacro(m, THOST_FTDC_AT_HandlePositionAlgo) != 0 ) return -1;
	///寻找保证金率算法
	if( PyModule_AddCharMacro(m, THOST_FTDC_AT_FindMarginRateAlgo) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcHandlePositionAlgoIDType是一个持仓处理算法编号类型
	/////////////////////////////////////////////////////////////////////////
	///基本
	if( PyModule_AddCharMacro(m, THOST_FTDC_HPA_Base) != 0 ) return -1;
	///大连商品交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_HPA_DCE) != 0 ) return -1;
	///郑州商品交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_HPA_CZCE) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFindMarginRateAlgoIDType是一个寻找保证金率算法编号类型
	/////////////////////////////////////////////////////////////////////////
	///基本
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMRA_Base) != 0 ) return -1;
	///大连商品交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMRA_DCE) != 0 ) return -1;
	///郑州商品交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMRA_CZCE) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcHandleTradingAccountAlgoIDType是一个资金处理算法编号类型
	/////////////////////////////////////////////////////////////////////////
	///基本
	if( PyModule_AddCharMacro(m, THOST_FTDC_HTAA_Base) != 0 ) return -1;
	///大连商品交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_HTAA_DCE) != 0 ) return -1;
	///郑州商品交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_HTAA_CZCE) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPersonTypeType是一个联系人类型类型
	/////////////////////////////////////////////////////////////////////////
	///指定下单人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_Order) != 0 ) return -1;
	///开户授权人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_Open) != 0 ) return -1;
	///资金调拨人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_Fund) != 0 ) return -1;
	///结算单确认人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_Settlement) != 0 ) return -1;
	///法人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_Company) != 0 ) return -1;
	///法人代表
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_Corporation) != 0 ) return -1;
	///投资者联系人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_LinkMan) != 0 ) return -1;
	///分户管理资产负责人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_Ledger) != 0 ) return -1;
	///托（保）管人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_Trustee) != 0 ) return -1;
	///托（保）管机构法人代表
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_TrusteeCorporation) != 0 ) return -1;
	///托（保）管机构开户授权人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_TrusteeOpen) != 0 ) return -1;
	///托（保）管机构联系人
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_TrusteeContact) != 0 ) return -1;
	///境外自然人参考证件
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_ForeignerRefer) != 0 ) return -1;
	///法人代表参考证件
	if( PyModule_AddCharMacro(m, THOST_FTDC_PST_CorporationRefer) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcQueryInvestorRangeType是一个查询范围类型
	/////////////////////////////////////////////////////////////////////////
	///所有
	if( PyModule_AddCharMacro(m, THOST_FTDC_QIR_All) != 0 ) return -1;
	///查询分类
	if( PyModule_AddCharMacro(m, THOST_FTDC_QIR_Group) != 0 ) return -1;
	///单一投资者
	if( PyModule_AddCharMacro(m, THOST_FTDC_QIR_Single) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInvestorRiskStatusType是一个投资者风险状态类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_IRS_Normal) != 0 ) return -1;
	///警告
	if( PyModule_AddCharMacro(m, THOST_FTDC_IRS_Warn) != 0 ) return -1;
	///追保
	if( PyModule_AddCharMacro(m, THOST_FTDC_IRS_Call) != 0 ) return -1;
	///强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_IRS_Force) != 0 ) return -1;
	///异常
	if( PyModule_AddCharMacro(m, THOST_FTDC_IRS_Exception) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcUserEventTypeType是一个用户事件类型类型
	/////////////////////////////////////////////////////////////////////////
	///登录
	if( PyModule_AddCharMacro(m, THOST_FTDC_UET_Login) != 0 ) return -1;
	///登出
	if( PyModule_AddCharMacro(m, THOST_FTDC_UET_Logout) != 0 ) return -1;
	///交易成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_UET_Trading) != 0 ) return -1;
	///交易失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_UET_TradingError) != 0 ) return -1;
	///修改密码
	if( PyModule_AddCharMacro(m, THOST_FTDC_UET_UpdatePassword) != 0 ) return -1;
	///客户端认证
	if( PyModule_AddCharMacro(m, THOST_FTDC_UET_Authenticate) != 0 ) return -1;
	///其他
	if( PyModule_AddCharMacro(m, THOST_FTDC_UET_Other) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCloseStyleType是一个平仓方式类型
	/////////////////////////////////////////////////////////////////////////
	///先开先平
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICS_Close) != 0 ) return -1;
	///先平今再平昨
	if( PyModule_AddCharMacro(m, THOST_FTDC_ICS_CloseToday) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcStatModeType是一个统计方式类型
	/////////////////////////////////////////////////////////////////////////
	///----
	if( PyModule_AddCharMacro(m, THOST_FTDC_SM_Non) != 0 ) return -1;
	///按合约统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_SM_Instrument) != 0 ) return -1;
	///按产品统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_SM_Product) != 0 ) return -1;
	///按投资者统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_SM_Investor) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcParkedOrderStatusType是一个预埋单状态类型
	/////////////////////////////////////////////////////////////////////////
	///未发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_PAOS_NotSend) != 0 ) return -1;
	///已发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_PAOS_Send) != 0 ) return -1;
	///已删除
	if( PyModule_AddCharMacro(m, THOST_FTDC_PAOS_Deleted) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcVirDealStatusType是一个处理状态类型
	/////////////////////////////////////////////////////////////////////////
	///正在处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_VDS_Dealing) != 0 ) return -1;
	///处理成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_VDS_DeaclSucceed) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrgSystemIDType是一个原有系统代码类型
	/////////////////////////////////////////////////////////////////////////
	///综合交易平台
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORGS_Standard) != 0 ) return -1;
	///易盛系统
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORGS_ESunny) != 0 ) return -1;
	///金仕达V6系统
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORGS_KingStarV6) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcVirTradeStatusType是一个交易状态类型
	/////////////////////////////////////////////////////////////////////////
	///正常处理中
	if( PyModule_AddCharMacro(m, THOST_FTDC_VTS_NaturalDeal) != 0 ) return -1;
	///成功结束
	if( PyModule_AddCharMacro(m, THOST_FTDC_VTS_SucceedEnd) != 0 ) return -1;
	///失败结束
	if( PyModule_AddCharMacro(m, THOST_FTDC_VTS_FailedEND) != 0 ) return -1;
	///异常中
	if( PyModule_AddCharMacro(m, THOST_FTDC_VTS_Exception) != 0 ) return -1;
	///已人工异常处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_VTS_ManualDeal) != 0 ) return -1;
	///通讯异常 ，请人工处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_VTS_MesException) != 0 ) return -1;
	///系统出错，请人工处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_VTS_SysException) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcVirBankAccTypeType是一个银行帐户类型类型
	/////////////////////////////////////////////////////////////////////////
	///存折
	if( PyModule_AddCharMacro(m, THOST_FTDC_VBAT_BankBook) != 0 ) return -1;
	///储蓄卡
	if( PyModule_AddCharMacro(m, THOST_FTDC_VBAT_BankCard) != 0 ) return -1;
	///信用卡
	if( PyModule_AddCharMacro(m, THOST_FTDC_VBAT_CreditCard) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcVirementStatusType是一个银行帐户类型类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_VMS_Natural) != 0 ) return -1;
	///销户
	if( PyModule_AddCharMacro(m, THOST_FTDC_VMS_Canceled) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcVirementAvailAbilityType是一个有效标志类型
	/////////////////////////////////////////////////////////////////////////
	///未确认
	if( PyModule_AddCharMacro(m, THOST_FTDC_VAA_NoAvailAbility) != 0 ) return -1;
	///有效
	if( PyModule_AddCharMacro(m, THOST_FTDC_VAA_AvailAbility) != 0 ) return -1;
	///冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_VAA_Repeal) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcVirementTradeCodeType是一个交易代码类型
	/////////////////////////////////////////////////////////////////////////
	///银行发起银行资金转期货
	//if( PyModule_AddStringMacro(m, THOST_FTDC_VTC_BankBankToFuture) != 0 ) return -1;
	///银行发起期货资金转银行
	//if( PyModule_AddStringMacro(m, THOST_FTDC_VTC_BankFutureToBank) != 0 ) return -1;
	///期货发起银行资金转期货
	//if( PyModule_AddStringMacro(m, THOST_FTDC_VTC_FutureBankToFuture) != 0 ) return -1;
	///期货发起期货资金转银行
	//if( PyModule_AddStringMacro(m, THOST_FTDC_VTC_FutureFutureToBank) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAMLGenStatusType是一个Aml生成方式类型
	/////////////////////////////////////////////////////////////////////////
	///程序生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_GEN_Program) != 0 ) return -1;
	///人工生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_GEN_HandWork) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCFMMCKeyKindType是一个动态密钥类别(保证金监管)类型
	/////////////////////////////////////////////////////////////////////////
	///主动请求更新
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFMMCKK_REQUEST) != 0 ) return -1;
	///CFMMC自动更新
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFMMCKK_AUTO) != 0 ) return -1;
	///CFMMC手动更新
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFMMCKK_MANUAL) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCertificationTypeType是一个证件类型类型
	/////////////////////////////////////////////////////////////////////////
	///身份证
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_IDCard) != 0 ) return -1;
	///护照
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_Passport) != 0 ) return -1;
	///军官证
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_OfficerIDCard) != 0 ) return -1;
	///士兵证
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_SoldierIDCard) != 0 ) return -1;
	///回乡证
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_HomeComingCard) != 0 ) return -1;
	///户口簿
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_HouseholdRegister ) != 0 ) return -1;
	///营业执照号
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_LicenseNo) != 0 ) return -1;
	///组织机构代码证
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_InstitutionCodeCard) != 0 ) return -1;
	///临时营业执照号
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_TempLicenseNo) != 0 ) return -1;
	///民办非企业登记证书
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_NoEnterpriseLicenseNo) != 0 ) return -1;
	///其他证件
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_OtherCard) != 0 ) return -1;
	///主管部门批文
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFT_SuperDepAgree) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFileBusinessCodeType是一个文件业务功能类型
	/////////////////////////////////////////////////////////////////////////
	///其他
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_Others) != 0 ) return -1;
	///转账交易明细对账
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_TransferDetails) != 0 ) return -1;
	///客户账户状态对账
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_CustAccStatus) != 0 ) return -1;
	///账户类交易明细对账
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_AccountTradeDetails) != 0 ) return -1;
	///期货账户信息变更明细对账
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_FutureAccountChangeInfoDetails) != 0 ) return -1;
	///客户资金台账余额明细对账
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_CustMoneyDetail) != 0 ) return -1;
	///客户销户结息明细对账
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_CustCancelAccountInfo) != 0 ) return -1;
	///客户资金余额对账结果
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_CustMoneyResult) != 0 ) return -1;
	///其它对账异常结果文件
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_OthersExceptionResult) != 0 ) return -1;
	///客户结息净额明细
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_CustInterestNetMoneyDetails) != 0 ) return -1;
	///客户资金交收明细
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_CustMoneySendAndReceiveDetails) != 0 ) return -1;
	///法人存管银行资金交收汇总
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_CorporationMoneyTotal) != 0 ) return -1;
	///主体间资金交收汇总
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_MainbodyMoneyTotal) != 0 ) return -1;
	///总分平衡监管数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_MainPartMonitorData) != 0 ) return -1;
	///存管银行备付金余额
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_PreparationMoney) != 0 ) return -1;
	///协办存管银行资金监管数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBC_BankMoneyMonitorData) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCashExchangeCodeType是一个汇钞标志类型
	/////////////////////////////////////////////////////////////////////////
	///汇
	if( PyModule_AddCharMacro(m, THOST_FTDC_CEC_Exchange) != 0 ) return -1;
	///钞
	if( PyModule_AddCharMacro(m, THOST_FTDC_CEC_Cash) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcYesNoIndicatorType是一个是或否标识类型
	/////////////////////////////////////////////////////////////////////////
	///是
	if( PyModule_AddCharMacro(m, THOST_FTDC_YNI_Yes) != 0 ) return -1;
	///否
	if( PyModule_AddCharMacro(m, THOST_FTDC_YNI_No) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBanlanceTypeType是一个余额类型类型
	/////////////////////////////////////////////////////////////////////////
	///当前余额
	if( PyModule_AddCharMacro(m, THOST_FTDC_BLT_CurrentMoney) != 0 ) return -1;
	///可用余额
	if( PyModule_AddCharMacro(m, THOST_FTDC_BLT_UsableMoney) != 0 ) return -1;
	///可取余额
	if( PyModule_AddCharMacro(m, THOST_FTDC_BLT_FetchableMoney) != 0 ) return -1;
	///冻结余额
	if( PyModule_AddCharMacro(m, THOST_FTDC_BLT_FreezeMoney) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcGenderType是一个性别类型
	/////////////////////////////////////////////////////////////////////////
	///未知状态
	if( PyModule_AddCharMacro(m, THOST_FTDC_GD_Unknown) != 0 ) return -1;
	///男
	if( PyModule_AddCharMacro(m, THOST_FTDC_GD_Male) != 0 ) return -1;
	///女
	if( PyModule_AddCharMacro(m, THOST_FTDC_GD_Female) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFeePayFlagType是一个费用支付标志类型
	/////////////////////////////////////////////////////////////////////////
	///由受益方支付费用
	if( PyModule_AddCharMacro(m, THOST_FTDC_FPF_BEN) != 0 ) return -1;
	///由发送方支付费用
	if( PyModule_AddCharMacro(m, THOST_FTDC_FPF_OUR) != 0 ) return -1;
	///由发送方支付发起的费用，受益方支付接受的费用
	if( PyModule_AddCharMacro(m, THOST_FTDC_FPF_SHA) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPassWordKeyTypeType是一个密钥类型类型
	/////////////////////////////////////////////////////////////////////////
	///交换密钥
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWKT_ExchangeKey) != 0 ) return -1;
	///密码密钥
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWKT_PassWordKey) != 0 ) return -1;
	///MAC密钥
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWKT_MACKey) != 0 ) return -1;
	///报文密钥
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWKT_MessageKey) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBTPassWordTypeType是一个密码类型类型
	/////////////////////////////////////////////////////////////////////////
	///查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWT_Query) != 0 ) return -1;
	///取款
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWT_Fetch) != 0 ) return -1;
	///转帐
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWT_Transfer) != 0 ) return -1;
	///交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_PWT_Trade) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBTEncryModeType是一个加密方式类型
	/////////////////////////////////////////////////////////////////////////
	///不加密
	if( PyModule_AddCharMacro(m, THOST_FTDC_EM_NoEncry) != 0 ) return -1;
	///DES
	if( PyModule_AddCharMacro(m, THOST_FTDC_EM_DES) != 0 ) return -1;
	///3DES
	if( PyModule_AddCharMacro(m, THOST_FTDC_EM_3DES) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBankRepealFlagType是一个银行冲正标志类型
	/////////////////////////////////////////////////////////////////////////
	///银行无需自动冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_BRF_BankNotNeedRepeal) != 0 ) return -1;
	///银行待自动冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_BRF_BankWaitingRepeal) != 0 ) return -1;
	///银行已自动冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_BRF_BankBeenRepealed) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBrokerRepealFlagType是一个期商冲正标志类型
	/////////////////////////////////////////////////////////////////////////
	///期商无需自动冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_BRORF_BrokerNotNeedRepeal) != 0 ) return -1;
	///期商待自动冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_BRORF_BrokerWaitingRepeal) != 0 ) return -1;
	///期商已自动冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_BRORF_BrokerBeenRepealed) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInstitutionTypeType是一个机构类别类型
	/////////////////////////////////////////////////////////////////////////
	///银行
	if( PyModule_AddCharMacro(m, THOST_FTDC_TS_Bank) != 0 ) return -1;
	///期商
	if( PyModule_AddCharMacro(m, THOST_FTDC_TS_Future) != 0 ) return -1;
	///券商
	if( PyModule_AddCharMacro(m, THOST_FTDC_TS_Store) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcLastFragmentType是一个最后分片标志类型
	/////////////////////////////////////////////////////////////////////////
	///是最后分片
	if( PyModule_AddCharMacro(m, THOST_FTDC_LF_Yes) != 0 ) return -1;
	///不是最后分片
	if( PyModule_AddCharMacro(m, THOST_FTDC_LF_No) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBankAccStatusType是一个银行账户状态类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_BAS_Normal) != 0 ) return -1;
	///冻结
	if( PyModule_AddCharMacro(m, THOST_FTDC_BAS_Freeze) != 0 ) return -1;
	///挂失
	if( PyModule_AddCharMacro(m, THOST_FTDC_BAS_ReportLoss) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcMoneyAccountStatusType是一个资金账户状态类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_MAS_Normal) != 0 ) return -1;
	///销户
	if( PyModule_AddCharMacro(m, THOST_FTDC_MAS_Cancel) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcManageStatusType是一个存管状态类型
	/////////////////////////////////////////////////////////////////////////
	///指定存管
	if( PyModule_AddCharMacro(m, THOST_FTDC_MSS_Point) != 0 ) return -1;
	///预指定
	if( PyModule_AddCharMacro(m, THOST_FTDC_MSS_PrePoint) != 0 ) return -1;
	///撤销指定
	if( PyModule_AddCharMacro(m, THOST_FTDC_MSS_CancelPoint) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSystemTypeType是一个应用系统类型类型
	/////////////////////////////////////////////////////////////////////////
	///银期转帐
	if( PyModule_AddCharMacro(m, THOST_FTDC_SYT_FutureBankTransfer) != 0 ) return -1;
	///银证转帐
	if( PyModule_AddCharMacro(m, THOST_FTDC_SYT_StockBankTransfer) != 0 ) return -1;
	///第三方存管
	if( PyModule_AddCharMacro(m, THOST_FTDC_SYT_TheThirdPartStore) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTxnEndFlagType是一个银期转帐划转结果标志类型
	/////////////////////////////////////////////////////////////////////////
	///正常处理中
	if( PyModule_AddCharMacro(m, THOST_FTDC_TEF_NormalProcessing) != 0 ) return -1;
	///成功结束
	if( PyModule_AddCharMacro(m, THOST_FTDC_TEF_Success) != 0 ) return -1;
	///失败结束
	if( PyModule_AddCharMacro(m, THOST_FTDC_TEF_Failed) != 0 ) return -1;
	///异常中
	if( PyModule_AddCharMacro(m, THOST_FTDC_TEF_Abnormal) != 0 ) return -1;
	///已人工异常处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_TEF_ManualProcessedForException) != 0 ) return -1;
	///通讯异常 ，请人工处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_TEF_CommuFailedNeedManualProcess) != 0 ) return -1;
	///系统出错，请人工处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_TEF_SysErrorNeedManualProcess) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcProcessStatusType是一个银期转帐服务处理状态类型
	/////////////////////////////////////////////////////////////////////////
	///未处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_PSS_NotProcess) != 0 ) return -1;
	///开始处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_PSS_StartProcess) != 0 ) return -1;
	///处理完成
	if( PyModule_AddCharMacro(m, THOST_FTDC_PSS_Finished) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCustTypeType是一个客户类型类型
	/////////////////////////////////////////////////////////////////////////
	///自然人
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUSTT_Person) != 0 ) return -1;
	///机构户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUSTT_Institution) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBTTransferDirectionType是一个银期转帐方向类型
	/////////////////////////////////////////////////////////////////////////
	///入金，银行转期货
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTTD_FromBankToFuture) != 0 ) return -1;
	///出金，期货转银行
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTTD_FromFutureToBank) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOpenOrDestroyType是一个开销户类别类型
	/////////////////////////////////////////////////////////////////////////
	///开户
	if( PyModule_AddCharMacro(m, THOST_FTDC_OOD_Open) != 0 ) return -1;
	///销户
	if( PyModule_AddCharMacro(m, THOST_FTDC_OOD_Destroy) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAvailabilityFlagType是一个有效标志类型
	/////////////////////////////////////////////////////////////////////////
	///未确认
	if( PyModule_AddCharMacro(m, THOST_FTDC_AVAF_Invalid) != 0 ) return -1;
	///有效
	if( PyModule_AddCharMacro(m, THOST_FTDC_AVAF_Valid) != 0 ) return -1;
	///冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_AVAF_Repeal) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrganTypeType是一个机构类型类型
	/////////////////////////////////////////////////////////////////////////
	///银行代理
	if( PyModule_AddCharMacro(m, THOST_FTDC_OT_Bank) != 0 ) return -1;
	///交易前置
	if( PyModule_AddCharMacro(m, THOST_FTDC_OT_Future) != 0 ) return -1;
	///银期转帐平台管理
	if( PyModule_AddCharMacro(m, THOST_FTDC_OT_PlateForm) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrganLevelType是一个机构级别类型
	/////////////////////////////////////////////////////////////////////////
	///银行总行或期商总部
	if( PyModule_AddCharMacro(m, THOST_FTDC_OL_HeadQuarters) != 0 ) return -1;
	///银行分中心或期货公司营业部
	if( PyModule_AddCharMacro(m, THOST_FTDC_OL_Branch) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcProtocalIDType是一个协议类型类型
	/////////////////////////////////////////////////////////////////////////
	///期商协议
	if( PyModule_AddCharMacro(m, THOST_FTDC_PID_FutureProtocal) != 0 ) return -1;
	///工行协议
	if( PyModule_AddCharMacro(m, THOST_FTDC_PID_ICBCProtocal) != 0 ) return -1;
	///农行协议
	if( PyModule_AddCharMacro(m, THOST_FTDC_PID_ABCProtocal) != 0 ) return -1;
	///中国银行协议
	if( PyModule_AddCharMacro(m, THOST_FTDC_PID_CBCProtocal) != 0 ) return -1;
	///建行协议
	if( PyModule_AddCharMacro(m, THOST_FTDC_PID_CCBProtocal) != 0 ) return -1;
	///交行协议
	if( PyModule_AddCharMacro(m, THOST_FTDC_PID_BOCOMProtocal) != 0 ) return -1;
	///银期转帐平台协议
	if( PyModule_AddCharMacro(m, THOST_FTDC_PID_FBTPlateFormProtocal) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcConnectModeType是一个套接字连接方式类型
	/////////////////////////////////////////////////////////////////////////
	///短连接
	if( PyModule_AddCharMacro(m, THOST_FTDC_CM_ShortConnect) != 0 ) return -1;
	///长连接
	if( PyModule_AddCharMacro(m, THOST_FTDC_CM_LongConnect) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSyncModeType是一个套接字通信方式类型
	/////////////////////////////////////////////////////////////////////////
	///异步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SRM_ASync) != 0 ) return -1;
	///同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SRM_Sync) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBankAccTypeType是一个银行帐号类型类型
	/////////////////////////////////////////////////////////////////////////
	///银行存折
	if( PyModule_AddCharMacro(m, THOST_FTDC_BAT_BankBook) != 0 ) return -1;
	///储蓄卡
	if( PyModule_AddCharMacro(m, THOST_FTDC_BAT_SavingCard) != 0 ) return -1;
	///信用卡
	if( PyModule_AddCharMacro(m, THOST_FTDC_BAT_CreditCard) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFutureAccTypeType是一个期货公司帐号类型类型
	/////////////////////////////////////////////////////////////////////////
	///银行存折
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAT_BankBook) != 0 ) return -1;
	///储蓄卡
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAT_SavingCard) != 0 ) return -1;
	///信用卡
	if( PyModule_AddCharMacro(m, THOST_FTDC_FAT_CreditCard) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOrganStatusType是一个接入机构状态类型
	/////////////////////////////////////////////////////////////////////////
	///启用
	if( PyModule_AddCharMacro(m, THOST_FTDC_OS_Ready) != 0 ) return -1;
	///签到
	if( PyModule_AddCharMacro(m, THOST_FTDC_OS_CheckIn) != 0 ) return -1;
	///签退
	if( PyModule_AddCharMacro(m, THOST_FTDC_OS_CheckOut) != 0 ) return -1;
	///对帐文件到达
	if( PyModule_AddCharMacro(m, THOST_FTDC_OS_CheckFileArrived) != 0 ) return -1;
	///对帐
	if( PyModule_AddCharMacro(m, THOST_FTDC_OS_CheckDetail) != 0 ) return -1;
	///日终清理
	if( PyModule_AddCharMacro(m, THOST_FTDC_OS_DayEndClean) != 0 ) return -1;
	///注销
	if( PyModule_AddCharMacro(m, THOST_FTDC_OS_Invalid) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCCBFeeModeType是一个建行收费模式类型
	/////////////////////////////////////////////////////////////////////////
	///按金额扣收
	if( PyModule_AddCharMacro(m, THOST_FTDC_CCBFM_ByAmount) != 0 ) return -1;
	///按月扣收
	if( PyModule_AddCharMacro(m, THOST_FTDC_CCBFM_ByMonth) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCommApiTypeType是一个通讯API类型类型
	/////////////////////////////////////////////////////////////////////////
	///客户端
	if( PyModule_AddCharMacro(m, THOST_FTDC_CAPIT_Client) != 0 ) return -1;
	///服务端
	if( PyModule_AddCharMacro(m, THOST_FTDC_CAPIT_Server) != 0 ) return -1;
	///交易系统的UserApi
	if( PyModule_AddCharMacro(m, THOST_FTDC_CAPIT_UserApi) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcLinkStatusType是一个连接状态类型
	/////////////////////////////////////////////////////////////////////////
	///已经连接
	if( PyModule_AddCharMacro(m, THOST_FTDC_LS_Connected) != 0 ) return -1;
	///没有连接
	if( PyModule_AddCharMacro(m, THOST_FTDC_LS_Disconnected) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPwdFlagType是一个密码核对标志类型
	/////////////////////////////////////////////////////////////////////////
	///不核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_BPWDF_NoCheck) != 0 ) return -1;
	///明文核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_BPWDF_BlankCheck) != 0 ) return -1;
	///密文核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_BPWDF_EncryptCheck) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSecuAccTypeType是一个期货帐号类型类型
	/////////////////////////////////////////////////////////////////////////
	///资金帐号
	if( PyModule_AddCharMacro(m, THOST_FTDC_SAT_AccountID) != 0 ) return -1;
	///资金卡号
	if( PyModule_AddCharMacro(m, THOST_FTDC_SAT_CardID) != 0 ) return -1;
	///上海股东帐号
	if( PyModule_AddCharMacro(m, THOST_FTDC_SAT_SHStockholderID) != 0 ) return -1;
	///深圳股东帐号
	if( PyModule_AddCharMacro(m, THOST_FTDC_SAT_SZStockholderID) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTransferStatusType是一个转账交易状态类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_TRFS_Normal) != 0 ) return -1;
	///被冲正
	if( PyModule_AddCharMacro(m, THOST_FTDC_TRFS_Repealed) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSponsorTypeType是一个发起方类型
	/////////////////////////////////////////////////////////////////////////
	///期商
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPTYPE_Broker) != 0 ) return -1;
	///银行
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPTYPE_Bank) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcReqRspTypeType是一个请求响应类别类型
	/////////////////////////////////////////////////////////////////////////
	///请求
	if( PyModule_AddCharMacro(m, THOST_FTDC_REQRSP_Request) != 0 ) return -1;
	///响应
	if( PyModule_AddCharMacro(m, THOST_FTDC_REQRSP_Response) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBTUserEventTypeType是一个银期转帐用户事件类型类型
	/////////////////////////////////////////////////////////////////////////
	///签到
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_SignIn) != 0 ) return -1;
	///银行转期货
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_FromBankToFuture) != 0 ) return -1;
	///期货转银行
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_FromFutureToBank) != 0 ) return -1;
	///开户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_OpenAccount) != 0 ) return -1;
	///销户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_CancelAccount) != 0 ) return -1;
	///变更银行账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_ChangeAccount) != 0 ) return -1;
	///冲正银行转期货
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_RepealFromBankToFuture) != 0 ) return -1;
	///冲正期货转银行
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_RepealFromFutureToBank) != 0 ) return -1;
	///查询银行账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_QueryBankAccount) != 0 ) return -1;
	///查询期货账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_QueryFutureAccount) != 0 ) return -1;
	///签退
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_SignOut) != 0 ) return -1;
	///密钥同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_SyncKey) != 0 ) return -1;
	///其他
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBTUET_Other) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDBOperationType是一个记录操作类型类型
	/////////////////////////////////////////////////////////////////////////
	///插入
	if( PyModule_AddCharMacro(m, THOST_FTDC_DBOP_Insert) != 0 ) return -1;
	///更新
	if( PyModule_AddCharMacro(m, THOST_FTDC_DBOP_Update) != 0 ) return -1;
	///删除
	if( PyModule_AddCharMacro(m, THOST_FTDC_DBOP_Delete) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSyncFlagType是一个同步标记类型
	/////////////////////////////////////////////////////////////////////////
	///已同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SYNF_Yes) != 0 ) return -1;
	///未同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SYNF_No) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSyncTypeType是一个同步类型类型
	/////////////////////////////////////////////////////////////////////////
	///一次同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SYNT_OneOffSync) != 0 ) return -1;
	///定时同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SYNT_TimerSync) != 0 ) return -1;
	///定时完全同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SYNT_TimerFullSync) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExDirectionType是一个换汇方向类型
	/////////////////////////////////////////////////////////////////////////
	///结汇
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEDIR_Settlement) != 0 ) return -1;
	///售汇
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEDIR_Sale) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBEResultFlagType是一个换汇成功标志类型
	/////////////////////////////////////////////////////////////////////////
	///成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERES_Success) != 0 ) return -1;
	///账户余额不足
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERES_InsufficientBalance) != 0 ) return -1;
	///交易结果未知
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERES_UnknownTrading) != 0 ) return -1;
	///失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERES_Fail) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBEExchStatusType是一个换汇交易状态类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEES_Normal) != 0 ) return -1;
	///交易重发
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEES_ReExchange) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBEFileFlagType是一个换汇文件标志类型
	/////////////////////////////////////////////////////////////////////////
	///数据包
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEFG_DataPackage) != 0 ) return -1;
	///文件
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEFG_File) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBEAlreadyTradeType是一个换汇已交易标志类型
	/////////////////////////////////////////////////////////////////////////
	///未交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEAT_NotTrade) != 0 ) return -1;
	///已交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEAT_Trade) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBEUserEventTypeType是一个银期换汇用户事件类型类型
	/////////////////////////////////////////////////////////////////////////
	///签到
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_SignIn) != 0 ) return -1;
	///换汇
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_Exchange) != 0 ) return -1;
	///换汇重发
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_ReExchange) != 0 ) return -1;
	///银行账户查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_QueryBankAccount) != 0 ) return -1;
	///换汇明细查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_QueryExchDetial) != 0 ) return -1;
	///换汇汇总查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_QueryExchSummary) != 0 ) return -1;
	///换汇汇率查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_QueryExchRate) != 0 ) return -1;
	///对账文件通知
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_CheckBankAccount) != 0 ) return -1;
	///签退
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_SignOut) != 0 ) return -1;
	///其他
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBEUET_Other) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBEReqFlagType是一个换汇发送标志类型
	/////////////////////////////////////////////////////////////////////////
	///未处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERF_UnProcessed) != 0 ) return -1;
	///等待发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERF_WaitSend) != 0 ) return -1;
	///发送成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERF_SendSuccess) != 0 ) return -1;
	///发送失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERF_SendFailed) != 0 ) return -1;
	///等待重发
	if( PyModule_AddCharMacro(m, THOST_FTDC_FBERF_WaitReSend) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcNotifyClassType是一个风险通知类型类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_NC_NOERROR) != 0 ) return -1;
	///警示
	if( PyModule_AddCharMacro(m, THOST_FTDC_NC_Warn) != 0 ) return -1;
	///追保
	if( PyModule_AddCharMacro(m, THOST_FTDC_NC_Call) != 0 ) return -1;
	///强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_NC_Force) != 0 ) return -1;
	///穿仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_NC_CHUANCANG) != 0 ) return -1;
	///异常
	if( PyModule_AddCharMacro(m, THOST_FTDC_NC_Exception) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcForceCloseTypeType是一个强平单类型类型
	/////////////////////////////////////////////////////////////////////////
	///手工强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCT_Manual) != 0 ) return -1;
	///单一投资者辅助强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCT_Single) != 0 ) return -1;
	///批量投资者辅助强平
	if( PyModule_AddCharMacro(m, THOST_FTDC_FCT_Group) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcRiskNotifyMethodType是一个风险通知途径类型
	/////////////////////////////////////////////////////////////////////////
	///系统通知
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNM_System) != 0 ) return -1;
	///短信通知
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNM_SMS) != 0 ) return -1;
	///邮件通知
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNM_EMail) != 0 ) return -1;
	///人工通知
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNM_Manual) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcRiskNotifyStatusType是一个风险通知状态类型
	/////////////////////////////////////////////////////////////////////////
	///未生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNS_NotGen) != 0 ) return -1;
	///已生成未发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNS_Generated) != 0 ) return -1;
	///发送失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNS_SendError) != 0 ) return -1;
	///已发送未接收
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNS_SendOk) != 0 ) return -1;
	///已接收未确认
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNS_Received) != 0 ) return -1;
	///已确认
	if( PyModule_AddCharMacro(m, THOST_FTDC_RNS_Confirmed) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcRiskUserEventType是一个风控用户操作事件类型
	/////////////////////////////////////////////////////////////////////////
	///导出数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_RUE_ExportData) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcConditionalOrderSortTypeType是一个条件单索引条件类型
	/////////////////////////////////////////////////////////////////////////
	///使用最新价升序
	if( PyModule_AddCharMacro(m, THOST_FTDC_COST_LastPriceAsc) != 0 ) return -1;
	///使用最新价降序
	if( PyModule_AddCharMacro(m, THOST_FTDC_COST_LastPriceDesc) != 0 ) return -1;
	///使用卖价升序
	if( PyModule_AddCharMacro(m, THOST_FTDC_COST_AskPriceAsc) != 0 ) return -1;
	///使用卖价降序
	if( PyModule_AddCharMacro(m, THOST_FTDC_COST_AskPriceDesc) != 0 ) return -1;
	///使用买价升序
	if( PyModule_AddCharMacro(m, THOST_FTDC_COST_BidPriceAsc) != 0 ) return -1;
	///使用买价降序
	if( PyModule_AddCharMacro(m, THOST_FTDC_COST_BidPriceDesc) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSendTypeType是一个报送状态类型
	/////////////////////////////////////////////////////////////////////////
	///未发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAST_NoSend) != 0 ) return -1;
	///已发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAST_Sended) != 0 ) return -1;
	///已生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAST_Generated) != 0 ) return -1;
	///报送失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAST_SendFail) != 0 ) return -1;
	///接收成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAST_Success) != 0 ) return -1;
	///接收失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAST_Fail) != 0 ) return -1;
	///取消报送
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAST_Cancel) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcClientIDStatusType是一个交易编码状态类型
	/////////////////////////////////////////////////////////////////////////
	///未申请
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOACS_NoApply) != 0 ) return -1;
	///已提交申请
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOACS_Submited) != 0 ) return -1;
	///已发送申请
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOACS_Sended) != 0 ) return -1;
	///完成
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOACS_Success) != 0 ) return -1;
	///拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOACS_Refuse) != 0 ) return -1;
	///已撤销编码
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOACS_Cancel) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcQuestionTypeType是一个特有信息类型类型
	/////////////////////////////////////////////////////////////////////////
	///单选
	if( PyModule_AddCharMacro(m, THOST_FTDC_QT_Radio) != 0 ) return -1;
	///多选
	if( PyModule_AddCharMacro(m, THOST_FTDC_QT_Option) != 0 ) return -1;
	///填空
	if( PyModule_AddCharMacro(m, THOST_FTDC_QT_Blank) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBusinessTypeType是一个业务类型类型
	/////////////////////////////////////////////////////////////////////////
	///请求
	if( PyModule_AddCharMacro(m, THOST_FTDC_BT_Request) != 0 ) return -1;
	///应答
	if( PyModule_AddCharMacro(m, THOST_FTDC_BT_Response) != 0 ) return -1;
	///通知
	if( PyModule_AddCharMacro(m, THOST_FTDC_BT_Notice) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCfmmcReturnCodeType是一个监控中心返回码类型
	/////////////////////////////////////////////////////////////////////////
	///成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_CRC_Success) != 0 ) return -1;
	///该客户已经有流程在处理中
	if( PyModule_AddCharMacro(m, THOST_FTDC_CRC_Working) != 0 ) return -1;
	///监控中客户资料检查失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_CRC_InfoFail) != 0 ) return -1;
	///监控中实名制检查失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_CRC_IDCardFail) != 0 ) return -1;
	///其他错误
	if( PyModule_AddCharMacro(m, THOST_FTDC_CRC_OtherFail) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcClientTypeType是一个客户类型类型
	/////////////////////////////////////////////////////////////////////////
	///所有
	if( PyModule_AddCharMacro(m, THOST_FTDC_CfMMCCT_All) != 0 ) return -1;
	///个人
	if( PyModule_AddCharMacro(m, THOST_FTDC_CfMMCCT_Person) != 0 ) return -1;
	///单位
	if( PyModule_AddCharMacro(m, THOST_FTDC_CfMMCCT_Company) != 0 ) return -1;
	///其他
	if( PyModule_AddCharMacro(m, THOST_FTDC_CfMMCCT_Other) != 0 ) return -1;
	///特殊法人
	if( PyModule_AddCharMacro(m, THOST_FTDC_CfMMCCT_SpecialOrgan) != 0 ) return -1;
	///资管户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CfMMCCT_Asset) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExchangeIDTypeType是一个交易所编号类型
	/////////////////////////////////////////////////////////////////////////
	///上海期货交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_EIDT_SHFE) != 0 ) return -1;
	///郑州商品交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_EIDT_CZCE) != 0 ) return -1;
	///大连商品交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_EIDT_DCE) != 0 ) return -1;
	///中国金融期货交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_EIDT_CFFEX) != 0 ) return -1;
	///上海国际能源交易中心股份有限公司
	if( PyModule_AddCharMacro(m, THOST_FTDC_EIDT_INE) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExClientIDTypeType是一个交易编码类型类型
	/////////////////////////////////////////////////////////////////////////
	///套保
	if( PyModule_AddCharMacro(m, THOST_FTDC_ECIDT_Hedge) != 0 ) return -1;
	///套利
	if( PyModule_AddCharMacro(m, THOST_FTDC_ECIDT_Arbitrage) != 0 ) return -1;
	///投机
	if( PyModule_AddCharMacro(m, THOST_FTDC_ECIDT_Speculation) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcUpdateFlagType是一个更新状态类型
	/////////////////////////////////////////////////////////////////////////
	///未更新
	if( PyModule_AddCharMacro(m, THOST_FTDC_UF_NoUpdate) != 0 ) return -1;
	///更新全部信息成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_UF_Success) != 0 ) return -1;
	///更新全部信息失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_UF_Fail) != 0 ) return -1;
	///更新交易编码成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_UF_TCSuccess) != 0 ) return -1;
	///更新交易编码失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_UF_TCFail) != 0 ) return -1;
	///已丢弃
	if( PyModule_AddCharMacro(m, THOST_FTDC_UF_Cancel) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcApplyOperateIDType是一个申请动作类型
	/////////////////////////////////////////////////////////////////////////
	///开户
	if( PyModule_AddCharMacro(m, THOST_FTDC_AOID_OpenInvestor) != 0 ) return -1;
	///修改身份信息
	if( PyModule_AddCharMacro(m, THOST_FTDC_AOID_ModifyIDCard) != 0 ) return -1;
	///修改一般信息
	if( PyModule_AddCharMacro(m, THOST_FTDC_AOID_ModifyNoIDCard) != 0 ) return -1;
	///申请交易编码
	if( PyModule_AddCharMacro(m, THOST_FTDC_AOID_ApplyTradingCode) != 0 ) return -1;
	///撤销交易编码
	if( PyModule_AddCharMacro(m, THOST_FTDC_AOID_CancelTradingCode) != 0 ) return -1;
	///销户
	if( PyModule_AddCharMacro(m, THOST_FTDC_AOID_CancelInvestor) != 0 ) return -1;
	///账户休眠
	if( PyModule_AddCharMacro(m, THOST_FTDC_AOID_FreezeAccount) != 0 ) return -1;
	///激活休眠账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_AOID_ActiveFreezeAccount) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcApplyStatusIDType是一个申请状态类型
	/////////////////////////////////////////////////////////////////////////
	///未补全
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASID_NoComplete) != 0 ) return -1;
	///已提交
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASID_Submited) != 0 ) return -1;
	///已审核
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASID_Checked) != 0 ) return -1;
	///已拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASID_Refused) != 0 ) return -1;
	///已删除
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASID_Deleted) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSendMethodType是一个发送方式类型
	/////////////////////////////////////////////////////////////////////////
	///文件发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOASM_ByAPI) != 0 ) return -1;
	///电子发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOASM_ByFile) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcEventModeType是一个操作方法类型
	/////////////////////////////////////////////////////////////////////////
	///增加
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_ADD) != 0 ) return -1;
	///修改
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_UPDATE) != 0 ) return -1;
	///删除
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_DELETE) != 0 ) return -1;
	///复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_CHECK) != 0 ) return -1;
	///复制
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_COPY) != 0 ) return -1;
	///注销
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_CANCEL) != 0 ) return -1;
	///冲销
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_Reverse) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcUOAAutoSendType是一个统一开户申请自动发送类型
	/////////////////////////////////////////////////////////////////////////
	///自动发送并接收
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAA_ASR) != 0 ) return -1;
	///自动发送，不自动接收
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAA_ASNR) != 0 ) return -1;
	///不自动发送，自动接收
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAA_NSAR) != 0 ) return -1;
	///不自动发送，也不自动接收
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAA_NSR) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFlowIDType是一个流程ID类型
	/////////////////////////////////////////////////////////////////////////
	///投资者对应投资者组设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_InvestorGroupFlow) != 0 ) return -1;
	///投资者手续费率设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_InvestorRate) != 0 ) return -1;
	///投资者手续费率模板关系设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_EvM_InvestorCommRateModel) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCheckLevelType是一个复核级别类型
	/////////////////////////////////////////////////////////////////////////
	///零级复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_CL_Zero) != 0 ) return -1;
	///一级复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_CL_One) != 0 ) return -1;
	///二级复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_CL_Two) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCheckStatusType是一个复核级别类型
	/////////////////////////////////////////////////////////////////////////
	///未复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_CHS_Init) != 0 ) return -1;
	///复核中
	if( PyModule_AddCharMacro(m, THOST_FTDC_CHS_Checking) != 0 ) return -1;
	///已复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_CHS_Checked) != 0 ) return -1;
	///拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_CHS_Refuse) != 0 ) return -1;
	///作废
	if( PyModule_AddCharMacro(m, THOST_FTDC_CHS_Cancel) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcUsedStatusType是一个生效状态类型
	/////////////////////////////////////////////////////////////////////////
	///未生效
	if( PyModule_AddCharMacro(m, THOST_FTDC_CHU_Unused) != 0 ) return -1;
	///已生效
	if( PyModule_AddCharMacro(m, THOST_FTDC_CHU_Used) != 0 ) return -1;
	///生效失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_CHU_Fail) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBankAcountOriginType是一个账户来源类型
	/////////////////////////////////////////////////////////////////////////
	///手工录入
	if( PyModule_AddCharMacro(m, THOST_FTDC_BAO_ByAccProperty) != 0 ) return -1;
	///银期转账
	if( PyModule_AddCharMacro(m, THOST_FTDC_BAO_ByFBTransfer) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcMonthBillTradeSumType是一个结算单月报成交汇总方式类型
	/////////////////////////////////////////////////////////////////////////
	///同日同合约
	if( PyModule_AddCharMacro(m, THOST_FTDC_MBTS_ByInstrument) != 0 ) return -1;
	///同日同合约同价格
	if( PyModule_AddCharMacro(m, THOST_FTDC_MBTS_ByDayInsPrc) != 0 ) return -1;
	///同合约
	if( PyModule_AddCharMacro(m, THOST_FTDC_MBTS_ByDayIns) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFBTTradeCodeEnumType是一个银期交易代码枚举类型
	/////////////////////////////////////////////////////////////////////////
	///银行发起银行转期货
	//if( PyModule_AddStringMacro(m, THOST_FTDC_FTC_BankLaunchBankToBroker) != 0 ) return -1;
	///期货发起银行转期货
	//if( PyModule_AddStringMacro(m, THOST_FTDC_FTC_BrokerLaunchBankToBroker) != 0 ) return -1;
	///银行发起期货转银行
	//if( PyModule_AddStringMacro(m, THOST_FTDC_FTC_BankLaunchBrokerToBank) != 0 ) return -1;
	///期货发起期货转银行
	//if( PyModule_AddStringMacro(m, THOST_FTDC_FTC_BrokerLaunchBrokerToBank) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOTPTypeType是一个动态令牌类型类型
	/////////////////////////////////////////////////////////////////////////
	///无动态令牌
	if( PyModule_AddCharMacro(m, THOST_FTDC_OTP_NONE) != 0 ) return -1;
	///时间令牌
	if( PyModule_AddCharMacro(m, THOST_FTDC_OTP_TOTP) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOTPStatusType是一个动态令牌状态类型
	/////////////////////////////////////////////////////////////////////////
	///未使用
	if( PyModule_AddCharMacro(m, THOST_FTDC_OTPS_Unused) != 0 ) return -1;
	///已使用
	if( PyModule_AddCharMacro(m, THOST_FTDC_OTPS_Used) != 0 ) return -1;
	///注销
	if( PyModule_AddCharMacro(m, THOST_FTDC_OTPS_Disuse) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBrokerUserTypeType是一个经济公司用户类型类型
	/////////////////////////////////////////////////////////////////////////
	///投资者
	if( PyModule_AddCharMacro(m, THOST_FTDC_BUT_Investor) != 0 ) return -1;
	///操作员
	if( PyModule_AddCharMacro(m, THOST_FTDC_BUT_BrokerUser) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFutureTypeType是一个期货类型类型
	/////////////////////////////////////////////////////////////////////////
	///商品期货
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUTT_Commodity) != 0 ) return -1;
	///金融期货
	if( PyModule_AddCharMacro(m, THOST_FTDC_FUTT_Financial) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundEventTypeType是一个资金管理操作类型类型
	/////////////////////////////////////////////////////////////////////////
	///转账限额
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_Restriction) != 0 ) return -1;
	///当日转账限额
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_TodayRestriction) != 0 ) return -1;
	///期商流水
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_Transfer) != 0 ) return -1;
	///资金冻结
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_Credit) != 0 ) return -1;
	///投资者可提资金比例
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_InvestorWithdrawAlm) != 0 ) return -1;
	///单个银行帐户转账限额
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_BankRestriction) != 0 ) return -1;
	///银期签约账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_Accountregister) != 0 ) return -1;
	///交易所出入金
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_ExchangeFundIO) != 0 ) return -1;
	///投资者出入金
	if( PyModule_AddCharMacro(m, THOST_FTDC_FET_InvestorFundIO) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAccountSourceTypeType是一个资金账户来源类型
	/////////////////////////////////////////////////////////////////////////
	///银期同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_AST_FBTransfer) != 0 ) return -1;
	///手工录入
	if( PyModule_AddCharMacro(m, THOST_FTDC_AST_ManualEntry) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCodeSourceTypeType是一个交易编码来源类型
	/////////////////////////////////////////////////////////////////////////
	///统一开户(已规范)
	if( PyModule_AddCharMacro(m, THOST_FTDC_CST_UnifyAccount) != 0 ) return -1;
	///手工录入(未规范)
	if( PyModule_AddCharMacro(m, THOST_FTDC_CST_ManualEntry) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcUserRangeType是一个操作员范围类型
	/////////////////////////////////////////////////////////////////////////
	///所有
	if( PyModule_AddCharMacro(m, THOST_FTDC_UR_All) != 0 ) return -1;
	///单一操作员
	if( PyModule_AddCharMacro(m, THOST_FTDC_UR_Single) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcByGroupType是一个交易统计表按客户统计方式类型
	/////////////////////////////////////////////////////////////////////////
	///按投资者统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_BG_Investor) != 0 ) return -1;
	///按类统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_BG_Group) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTradeSumStatModeType是一个交易统计表按范围统计方式类型
	/////////////////////////////////////////////////////////////////////////
	///按合约统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_TSSM_Instrument) != 0 ) return -1;
	///按产品统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_TSSM_Product) != 0 ) return -1;
	///按交易所统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_TSSM_Exchange) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExprSetModeType是一个日期表达式设置类型类型
	/////////////////////////////////////////////////////////////////////////
	///相对已有规则设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESM_Relative) != 0 ) return -1;
	///典型设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_ESM_Typical) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcRateInvestorRangeType是一个投资者范围类型
	/////////////////////////////////////////////////////////////////////////
	///公司标准
	if( PyModule_AddCharMacro(m, THOST_FTDC_RIR_All) != 0 ) return -1;
	///模板
	if( PyModule_AddCharMacro(m, THOST_FTDC_RIR_Model) != 0 ) return -1;
	///单一投资者
	if( PyModule_AddCharMacro(m, THOST_FTDC_RIR_Single) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSyncDataStatusType是一个主次用系统数据同步状态类型
	/////////////////////////////////////////////////////////////////////////
	///未同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SDS_Initialize) != 0 ) return -1;
	///同步中
	if( PyModule_AddCharMacro(m, THOST_FTDC_SDS_Settlementing) != 0 ) return -1;
	///已同步
	if( PyModule_AddCharMacro(m, THOST_FTDC_SDS_Settlemented) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTradeSourceType是一个成交来源类型
	/////////////////////////////////////////////////////////////////////////
	///来自交易所普通回报
	if( PyModule_AddCharMacro(m, THOST_FTDC_TSRC_NORMAL) != 0 ) return -1;
	///来自查询
	if( PyModule_AddCharMacro(m, THOST_FTDC_TSRC_QUERY) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFlexStatModeType是一个产品合约统计方式类型
	/////////////////////////////////////////////////////////////////////////
	///产品统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_FSM_Product) != 0 ) return -1;
	///交易所统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_FSM_Exchange) != 0 ) return -1;
	///统计所有
	if( PyModule_AddCharMacro(m, THOST_FTDC_FSM_All) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcByInvestorRangeType是一个投资者范围统计方式类型
	/////////////////////////////////////////////////////////////////////////
	///属性统计
	if( PyModule_AddCharMacro(m, THOST_FTDC_BIR_Property) != 0 ) return -1;
	///统计所有
	if( PyModule_AddCharMacro(m, THOST_FTDC_BIR_All) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPropertyInvestorRangeType是一个投资者范围类型
	/////////////////////////////////////////////////////////////////////////
	///所有
	if( PyModule_AddCharMacro(m, THOST_FTDC_PIR_All) != 0 ) return -1;
	///投资者属性
	if( PyModule_AddCharMacro(m, THOST_FTDC_PIR_Property) != 0 ) return -1;
	///单一投资者
	if( PyModule_AddCharMacro(m, THOST_FTDC_PIR_Single) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFileStatusType是一个文件状态类型
	/////////////////////////////////////////////////////////////////////////
	///未生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIS_NoCreate) != 0 ) return -1;
	///已生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIS_Created) != 0 ) return -1;
	///生成失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIS_Failed) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFileGenStyleType是一个文件生成方式类型
	/////////////////////////////////////////////////////////////////////////
	///下发
	if( PyModule_AddCharMacro(m, THOST_FTDC_FGS_FileTransmit) != 0 ) return -1;
	///生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_FGS_FileGen) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSysOperModeType是一个系统日志操作方法类型
	/////////////////////////////////////////////////////////////////////////
	///增加
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoM_Add) != 0 ) return -1;
	///修改
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoM_Update) != 0 ) return -1;
	///删除
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoM_Delete) != 0 ) return -1;
	///复制
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoM_Copy) != 0 ) return -1;
	///激活
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoM_AcTive) != 0 ) return -1;
	///注销
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoM_CanCel) != 0 ) return -1;
	///重置
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoM_ReSet) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSysOperTypeType是一个系统日志操作类型类型
	/////////////////////////////////////////////////////////////////////////
	///修改操作员密码
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_UpdatePassword) != 0 ) return -1;
	///操作员组织架构关系
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_UserDepartment) != 0 ) return -1;
	///角色管理
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_RoleManager) != 0 ) return -1;
	///角色功能设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_RoleFunction) != 0 ) return -1;
	///基础参数设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_BaseParam) != 0 ) return -1;
	///设置操作员
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_SetUserID) != 0 ) return -1;
	///用户角色设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_SetUserRole) != 0 ) return -1;
	///用户IP限制
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_UserIpRestriction) != 0 ) return -1;
	///组织架构管理
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_DepartmentManager) != 0 ) return -1;
	///组织架构向查询分类复制
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_DepartmentCopy) != 0 ) return -1;
	///交易编码管理
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_Tradingcode) != 0 ) return -1;
	///投资者状态维护
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_InvestorStatus) != 0 ) return -1;
	///投资者权限管理
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_InvestorAuthority) != 0 ) return -1;
	///属性设置
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_PropertySet) != 0 ) return -1;
	///重置投资者密码
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_ReSetInvestorPasswd) != 0 ) return -1;
	///投资者个性信息维护
	if( PyModule_AddCharMacro(m, THOST_FTDC_SoT_InvestorPersonalityInfo) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCSRCDataQueyTypeType是一个上报数据查询类型类型
	/////////////////////////////////////////////////////////////////////////
	///查询当前交易日报送的数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSRCQ_Current) != 0 ) return -1;
	///查询历史报送的代理经纪公司的数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSRCQ_History) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFreezeStatusType是一个休眠状态类型
	/////////////////////////////////////////////////////////////////////////
	///活跃
	if( PyModule_AddCharMacro(m, THOST_FTDC_FRS_Normal) != 0 ) return -1;
	///休眠
	if( PyModule_AddCharMacro(m, THOST_FTDC_FRS_Freeze) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcStandardStatusType是一个规范状态类型
	/////////////////////////////////////////////////////////////////////////
	///已规范
	if( PyModule_AddCharMacro(m, THOST_FTDC_STST_Standard) != 0 ) return -1;
	///未规范
	if( PyModule_AddCharMacro(m, THOST_FTDC_STST_NonStandard) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcRightParamTypeType是一个配置类型类型
	/////////////////////////////////////////////////////////////////////////
	///休眠户
	if( PyModule_AddCharMacro(m, THOST_FTDC_RPT_Freeze) != 0 ) return -1;
	///激活休眠户
	if( PyModule_AddCharMacro(m, THOST_FTDC_RPT_FreezeActive) != 0 ) return -1;
	///开仓权限限制
	if( PyModule_AddCharMacro(m, THOST_FTDC_RPT_OpenLimit) != 0 ) return -1;
	///解除开仓权限限制
	if( PyModule_AddCharMacro(m, THOST_FTDC_RPT_RelieveOpenLimit) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDataStatusType是一个反洗钱审核表数据状态类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLDS_Normal) != 0 ) return -1;
	///已删除
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLDS_Deleted) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAMLCheckStatusType是一个审核状态类型
	/////////////////////////////////////////////////////////////////////////
	///未复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLCHS_Init) != 0 ) return -1;
	///复核中
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLCHS_Checking) != 0 ) return -1;
	///已复核
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLCHS_Checked) != 0 ) return -1;
	///拒绝上报
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLCHS_RefuseReport) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAmlDateTypeType是一个日期类型类型
	/////////////////////////////////////////////////////////////////////////
	///检查日期
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLDT_DrawDay) != 0 ) return -1;
	///发生日期
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLDT_TouchDay) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAmlCheckLevelType是一个审核级别类型
	/////////////////////////////////////////////////////////////////////////
	///零级审核
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLCL_CheckLevel0) != 0 ) return -1;
	///一级审核
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLCL_CheckLevel1) != 0 ) return -1;
	///二级审核
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLCL_CheckLevel2) != 0 ) return -1;
	///三级审核
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMLCL_CheckLevel3) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExportFileTypeType是一个导出文件类型类型
	/////////////////////////////////////////////////////////////////////////
	///CSV
	if( PyModule_AddCharMacro(m, THOST_FTDC_EFT_CSV) != 0 ) return -1;
	///Excel
	if( PyModule_AddCharMacro(m, THOST_FTDC_EFT_EXCEL) != 0 ) return -1;
	///DBF
	if( PyModule_AddCharMacro(m, THOST_FTDC_EFT_DBF) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSettleManagerTypeType是一个结算配置类型类型
	/////////////////////////////////////////////////////////////////////////
	///结算前准备
	if( PyModule_AddCharMacro(m, THOST_FTDC_SMT_Before) != 0 ) return -1;
	///结算
	if( PyModule_AddCharMacro(m, THOST_FTDC_SMT_Settlement) != 0 ) return -1;
	///结算后核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_SMT_After) != 0 ) return -1;
	///结算后处理
	if( PyModule_AddCharMacro(m, THOST_FTDC_SMT_Settlemented) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSettleManagerLevelType是一个结算配置等级类型
	/////////////////////////////////////////////////////////////////////////
	///必要
	if( PyModule_AddCharMacro(m, THOST_FTDC_SML_Must) != 0 ) return -1;
	///警告
	if( PyModule_AddCharMacro(m, THOST_FTDC_SML_Alarm) != 0 ) return -1;
	///提示
	if( PyModule_AddCharMacro(m, THOST_FTDC_SML_Prompt) != 0 ) return -1;
	///不检查
	if( PyModule_AddCharMacro(m, THOST_FTDC_SML_Ignore) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSettleManagerGroupType是一个模块分组类型
	/////////////////////////////////////////////////////////////////////////
	///交易所核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_SMG_Exhcange) != 0 ) return -1;
	///内部核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_SMG_ASP) != 0 ) return -1;
	///上报数据核对
	if( PyModule_AddCharMacro(m, THOST_FTDC_SMG_CSRC) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcLimitUseTypeType是一个保值额度使用类型类型
	/////////////////////////////////////////////////////////////////////////
	///可重复使用
	if( PyModule_AddCharMacro(m, THOST_FTDC_LUT_Repeatable) != 0 ) return -1;
	///不可重复使用
	if( PyModule_AddCharMacro(m, THOST_FTDC_LUT_Unrepeatable) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDataResourceType是一个数据来源类型
	/////////////////////////////////////////////////////////////////////////
	///本系统
	if( PyModule_AddCharMacro(m, THOST_FTDC_DAR_Settle) != 0 ) return -1;
	///交易所
	if( PyModule_AddCharMacro(m, THOST_FTDC_DAR_Exchange) != 0 ) return -1;
	///报送数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_DAR_CSRC) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcMarginTypeType是一个保证金类型类型
	/////////////////////////////////////////////////////////////////////////
	///交易所保证金率
	if( PyModule_AddCharMacro(m, THOST_FTDC_MGT_ExchMarginRate) != 0 ) return -1;
	///投资者保证金率
	if( PyModule_AddCharMacro(m, THOST_FTDC_MGT_InstrMarginRate) != 0 ) return -1;
	///投资者交易保证金率
	if( PyModule_AddCharMacro(m, THOST_FTDC_MGT_InstrMarginRateTrade) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcActiveTypeType是一个生效类型类型
	/////////////////////////////////////////////////////////////////////////
	///仅当日生效
	if( PyModule_AddCharMacro(m, THOST_FTDC_ACT_Intraday) != 0 ) return -1;
	///长期生效
	if( PyModule_AddCharMacro(m, THOST_FTDC_ACT_Long) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcMarginRateTypeType是一个冲突保证金率类型类型
	/////////////////////////////////////////////////////////////////////////
	///交易所保证金率
	if( PyModule_AddCharMacro(m, THOST_FTDC_MRT_Exchange) != 0 ) return -1;
	///投资者保证金率
	if( PyModule_AddCharMacro(m, THOST_FTDC_MRT_Investor) != 0 ) return -1;
	///投资者交易保证金率
	if( PyModule_AddCharMacro(m, THOST_FTDC_MRT_InvestorTrade) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBackUpStatusType是一个备份数据状态类型
	/////////////////////////////////////////////////////////////////////////
	///未生成备份数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_BUS_UnBak) != 0 ) return -1;
	///备份数据生成中
	if( PyModule_AddCharMacro(m, THOST_FTDC_BUS_BakUp) != 0 ) return -1;
	///已生成备份数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_BUS_BakUped) != 0 ) return -1;
	///备份数据失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_BUS_BakFail) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcInitSettlementType是一个结算初始化状态类型
	/////////////////////////////////////////////////////////////////////////
	///结算初始化未开始
	if( PyModule_AddCharMacro(m, THOST_FTDC_SIS_UnInitialize) != 0 ) return -1;
	///结算初始化中
	if( PyModule_AddCharMacro(m, THOST_FTDC_SIS_Initialize) != 0 ) return -1;
	///结算初始化完成
	if( PyModule_AddCharMacro(m, THOST_FTDC_SIS_Initialized) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcReportStatusType是一个报表数据生成状态类型
	/////////////////////////////////////////////////////////////////////////
	///未生成报表数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_SRS_NoCreate) != 0 ) return -1;
	///报表数据生成中
	if( PyModule_AddCharMacro(m, THOST_FTDC_SRS_Create) != 0 ) return -1;
	///已生成报表数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_SRS_Created) != 0 ) return -1;
	///生成报表数据失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_SRS_CreateFail) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSaveStatusType是一个数据归档状态类型
	/////////////////////////////////////////////////////////////////////////
	///归档未完成
	if( PyModule_AddCharMacro(m, THOST_FTDC_SSS_UnSaveData) != 0 ) return -1;
	///归档完成
	if( PyModule_AddCharMacro(m, THOST_FTDC_SSS_SaveDatad) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSettArchiveStatusType是一个结算确认数据归档状态类型
	/////////////////////////////////////////////////////////////////////////
	///未归档数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_SAS_UnArchived) != 0 ) return -1;
	///数据归档中
	if( PyModule_AddCharMacro(m, THOST_FTDC_SAS_Archiving) != 0 ) return -1;
	///已归档数据
	if( PyModule_AddCharMacro(m, THOST_FTDC_SAS_Archived) != 0 ) return -1;
	///归档数据失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_SAS_ArchiveFail) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCTPTypeType是一个CTP交易系统类型类型
	/////////////////////////////////////////////////////////////////////////
	///未知类型
	if( PyModule_AddCharMacro(m, THOST_FTDC_CTPT_Unkown) != 0 ) return -1;
	///主中心
	if( PyModule_AddCharMacro(m, THOST_FTDC_CTPT_MainCenter) != 0 ) return -1;
	///备中心
	if( PyModule_AddCharMacro(m, THOST_FTDC_CTPT_BackUp) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCloseDealTypeType是一个平仓处理类型类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_CDT_Normal) != 0 ) return -1;
	///投机平仓优先
	if( PyModule_AddCharMacro(m, THOST_FTDC_CDT_SpecFirst) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcMortgageFundUseRangeType是一个货币质押资金可用范围类型
	/////////////////////////////////////////////////////////////////////////
	///不能使用
	if( PyModule_AddCharMacro(m, THOST_FTDC_MFUR_None) != 0 ) return -1;
	///用于保证金
	if( PyModule_AddCharMacro(m, THOST_FTDC_MFUR_Margin) != 0 ) return -1;
	///用于手续费、盈亏、保证金
	if( PyModule_AddCharMacro(m, THOST_FTDC_MFUR_All) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSpecProductTypeType是一个特殊产品类型类型
	/////////////////////////////////////////////////////////////////////////
	///郑商所套保产品
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPT_CzceHedge) != 0 ) return -1;
	///货币质押产品
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPT_IneForeignCurrency) != 0 ) return -1;
	///大连短线开平仓产品
	if( PyModule_AddCharMacro(m, THOST_FTDC_SPT_DceOpenClose) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundMortgageTypeType是一个货币质押类型类型
	/////////////////////////////////////////////////////////////////////////
	///质押
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMT_Mortgage) != 0 ) return -1;
	///解质
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMT_Redemption) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAccountSettlementParamIDType是一个投资者账户结算参数代码类型
	/////////////////////////////////////////////////////////////////////////
	///基础保证金
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASPI_BaseMargin) != 0 ) return -1;
	///最低权益标准
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASPI_LowestInterest) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundMortDirectionType是一个货币质押方向类型
	/////////////////////////////////////////////////////////////////////////
	///货币质入
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMD_In) != 0 ) return -1;
	///货币质出
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMD_Out) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBusinessClassType是一个换汇类别类型
	/////////////////////////////////////////////////////////////////////////
	///盈利
	if( PyModule_AddCharMacro(m, THOST_FTDC_BT_Profit) != 0 ) return -1;
	///亏损
	if( PyModule_AddCharMacro(m, THOST_FTDC_BT_Loss) != 0 ) return -1;
	///其他
	if( PyModule_AddCharMacro(m, THOST_FTDC_BT_Other) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSwapSourceTypeType是一个换汇数据来源类型
	/////////////////////////////////////////////////////////////////////////
	///手工
	if( PyModule_AddCharMacro(m, THOST_FTDC_SST_Manual) != 0 ) return -1;
	///自动生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_SST_Automatic) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCurrExDirectionType是一个换汇类型类型
	/////////////////////////////////////////////////////////////////////////
	///结汇
	if( PyModule_AddCharMacro(m, THOST_FTDC_CED_Settlement) != 0 ) return -1;
	///售汇
	if( PyModule_AddCharMacro(m, THOST_FTDC_CED_Sale) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCurrencySwapStatusType是一个申请状态类型
	/////////////////////////////////////////////////////////////////////////
	///已录入
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSS_Entry) != 0 ) return -1;
	///已审核
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSS_Approve) != 0 ) return -1;
	///已拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSS_Refuse) != 0 ) return -1;
	///已撤销
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSS_Revoke) != 0 ) return -1;
	///已发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSS_Send) != 0 ) return -1;
	///换汇成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSS_Success) != 0 ) return -1;
	///换汇失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_CSS_Failure) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcReqFlagType是一个换汇发送标志类型
	/////////////////////////////////////////////////////////////////////////
	///未发送
	if( PyModule_AddCharMacro(m, THOST_FTDC_REQF_NoSend) != 0 ) return -1;
	///发送成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_REQF_SendSuccess) != 0 ) return -1;
	///发送失败
	if( PyModule_AddCharMacro(m, THOST_FTDC_REQF_SendFailed) != 0 ) return -1;
	///等待重发
	if( PyModule_AddCharMacro(m, THOST_FTDC_REQF_WaitReSend) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcResFlagType是一个换汇返回成功标志类型
	/////////////////////////////////////////////////////////////////////////
	///成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_RESF_Success) != 0 ) return -1;
	///账户余额不足
	if( PyModule_AddCharMacro(m, THOST_FTDC_RESF_InsuffiCient) != 0 ) return -1;
	///交易结果未知
	if( PyModule_AddCharMacro(m, THOST_FTDC_RESF_UnKnown) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExStatusType是一个修改状态类型
	/////////////////////////////////////////////////////////////////////////
	///修改前
	if( PyModule_AddCharMacro(m, THOST_FTDC_EXS_Before) != 0 ) return -1;
	///修改后
	if( PyModule_AddCharMacro(m, THOST_FTDC_EXS_After) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcClientRegionType是一个开户客户地域类型
	/////////////////////////////////////////////////////////////////////////
	///国内客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CR_Domestic) != 0 ) return -1;
	///港澳台客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CR_GMT) != 0 ) return -1;
	///国外客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CR_Foreign) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcHasBoardType是一个是否有董事会类型
	/////////////////////////////////////////////////////////////////////////
	///没有
	if( PyModule_AddCharMacro(m, THOST_FTDC_HB_No) != 0 ) return -1;
	///有
	if( PyModule_AddCharMacro(m, THOST_FTDC_HB_Yes) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcStartModeType是一个启动模式类型
	/////////////////////////////////////////////////////////////////////////
	///正常
	if( PyModule_AddCharMacro(m, THOST_FTDC_SM_Normal) != 0 ) return -1;
	///应急
	if( PyModule_AddCharMacro(m, THOST_FTDC_SM_Emerge) != 0 ) return -1;
	///恢复
	if( PyModule_AddCharMacro(m, THOST_FTDC_SM_Restore) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcTemplateTypeType是一个模型类型类型
	/////////////////////////////////////////////////////////////////////////
	///全量
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPT_Full) != 0 ) return -1;
	///增量
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPT_Increment) != 0 ) return -1;
	///备份
	if( PyModule_AddCharMacro(m, THOST_FTDC_TPT_BackUp) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcLoginModeType是一个登录模式类型
	/////////////////////////////////////////////////////////////////////////
	///交易
	if( PyModule_AddCharMacro(m, THOST_FTDC_LM_Trade) != 0 ) return -1;
	///转账
	if( PyModule_AddCharMacro(m, THOST_FTDC_LM_Transfer) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcPromptTypeType是一个日历提示类型类型
	/////////////////////////////////////////////////////////////////////////
	///合约上下市
	if( PyModule_AddCharMacro(m, THOST_FTDC_CPT_Instrument) != 0 ) return -1;
	///保证金分段生效
	if( PyModule_AddCharMacro(m, THOST_FTDC_CPT_Margin) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcHasTrusteeType是一个是否有托管人类型
	/////////////////////////////////////////////////////////////////////////
	///有
	if( PyModule_AddCharMacro(m, THOST_FTDC_HT_Yes) != 0 ) return -1;
	///没有
	if( PyModule_AddCharMacro(m, THOST_FTDC_HT_No) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAmTypeType是一个机构类型类型
	/////////////////////////////////////////////////////////////////////////
	///银行
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMT_Bank) != 0 ) return -1;
	///证券公司
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMT_Securities) != 0 ) return -1;
	///基金公司
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMT_Fund) != 0 ) return -1;
	///保险公司
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMT_Insurance) != 0 ) return -1;
	///信托公司
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMT_Trust) != 0 ) return -1;
	///其他
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMT_Other) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCSRCFundIOTypeType是一个出入金类型类型
	/////////////////////////////////////////////////////////////////////////
	///出入金
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFIOT_FundIO) != 0 ) return -1;
	///银期换汇
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFIOT_SwapCurrency) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCusAccountTypeType是一个结算账户类型类型
	/////////////////////////////////////////////////////////////////////////
	///期货结算账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CAT_Futures) != 0 ) return -1;
	///纯期货资管业务下的资管结算账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CAT_AssetmgrFuture) != 0 ) return -1;
	///综合类资管业务下的期货资管托管账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CAT_AssetmgrTrustee) != 0 ) return -1;
	///综合类资管业务下的资金中转账户
	if( PyModule_AddCharMacro(m, THOST_FTDC_CAT_AssetmgrTransfer) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcLanguageTypeType是一个通知语言类型类型
	/////////////////////////////////////////////////////////////////////////
	///中文
	if( PyModule_AddCharMacro(m, THOST_FTDC_LT_Chinese) != 0 ) return -1;
	///英文
	if( PyModule_AddCharMacro(m, THOST_FTDC_LT_English) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAssetmgrClientTypeType是一个资产管理客户类型类型
	/////////////////////////////////////////////////////////////////////////
	///个人资管客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMCT_Person) != 0 ) return -1;
	///单位资管客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMCT_Organ) != 0 ) return -1;
	///特殊单位资管客户
	if( PyModule_AddCharMacro(m, THOST_FTDC_AMCT_SpecialOrgan) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcAssetmgrTypeType是一个投资类型类型
	/////////////////////////////////////////////////////////////////////////
	///期货类
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASST_Futures) != 0 ) return -1;
	///综合类
	if( PyModule_AddCharMacro(m, THOST_FTDC_ASST_SpecialOrgan) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCheckInstrTypeType是一个合约比较类型类型
	/////////////////////////////////////////////////////////////////////////
	///合约交易所不存在
	if( PyModule_AddCharMacro(m, THOST_FTDC_CIT_HasExch) != 0 ) return -1;
	///合约本系统不存在
	if( PyModule_AddCharMacro(m, THOST_FTDC_CIT_HasATP) != 0 ) return -1;
	///合约比较不一致
	if( PyModule_AddCharMacro(m, THOST_FTDC_CIT_HasDiff) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDeliveryTypeType是一个交割类型类型
	/////////////////////////////////////////////////////////////////////////
	///手工交割
	if( PyModule_AddCharMacro(m, THOST_FTDC_DT_HandDeliv) != 0 ) return -1;
	///到期交割
	if( PyModule_AddCharMacro(m, THOST_FTDC_DT_PersonDeliv) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcMaxMarginSideAlgorithmType是一个大额单边保证金算法类型
	/////////////////////////////////////////////////////////////////////////
	///不使用大额单边保证金算法
	if( PyModule_AddCharMacro(m, THOST_FTDC_MMSA_NO) != 0 ) return -1;
	///使用大额单边保证金算法
	if( PyModule_AddCharMacro(m, THOST_FTDC_MMSA_YES) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDAClientTypeType是一个资产管理客户类型类型
	/////////////////////////////////////////////////////////////////////////
	///自然人
	if( PyModule_AddCharMacro(m, THOST_FTDC_CACT_Person) != 0 ) return -1;
	///法人
	if( PyModule_AddCharMacro(m, THOST_FTDC_CACT_Company) != 0 ) return -1;
	///其他
	if( PyModule_AddCharMacro(m, THOST_FTDC_CACT_Other) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcUOAAssetmgrTypeType是一个投资类型类型
	/////////////////////////////////////////////////////////////////////////
	///期货类
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAAT_Futures) != 0 ) return -1;
	///综合类
	if( PyModule_AddCharMacro(m, THOST_FTDC_UOAAT_SpecialOrgan) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDirectionEnType是一个买卖方向类型
	/////////////////////////////////////////////////////////////////////////
	///Buy
	if( PyModule_AddCharMacro(m, THOST_FTDC_DEN_Buy) != 0 ) return -1;
	///Sell
	if( PyModule_AddCharMacro(m, THOST_FTDC_DEN_Sell) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOffsetFlagEnType是一个开平标志类型
	/////////////////////////////////////////////////////////////////////////
	///Position Opening
	if( PyModule_AddCharMacro(m, THOST_FTDC_OFEN_Open) != 0 ) return -1;
	///Position Close
	if( PyModule_AddCharMacro(m, THOST_FTDC_OFEN_Close) != 0 ) return -1;
	///Forced Liquidation
	if( PyModule_AddCharMacro(m, THOST_FTDC_OFEN_ForceClose) != 0 ) return -1;
	///Close Today
	if( PyModule_AddCharMacro(m, THOST_FTDC_OFEN_CloseToday) != 0 ) return -1;
	///Close Prev.
	if( PyModule_AddCharMacro(m, THOST_FTDC_OFEN_CloseYesterday) != 0 ) return -1;
	///Forced Reduction
	if( PyModule_AddCharMacro(m, THOST_FTDC_OFEN_ForceOff) != 0 ) return -1;
	///Local Forced Liquidation
	if( PyModule_AddCharMacro(m, THOST_FTDC_OFEN_LocalForceClose) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcHedgeFlagEnType是一个投机套保标志类型
	/////////////////////////////////////////////////////////////////////////
	///Speculation
	if( PyModule_AddCharMacro(m, THOST_FTDC_HFEN_Speculation) != 0 ) return -1;
	///Arbitrage
	if( PyModule_AddCharMacro(m, THOST_FTDC_HFEN_Arbitrage) != 0 ) return -1;
	///Hedge
	if( PyModule_AddCharMacro(m, THOST_FTDC_HFEN_Hedge) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundIOTypeEnType是一个出入金类型类型
	/////////////////////////////////////////////////////////////////////////
	///Deposit/Withdrawal
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIOTEN_FundIO) != 0 ) return -1;
	///Bank-Futures Transfer
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIOTEN_Transfer) != 0 ) return -1;
	///Bank-Futures FX Exchange
	if( PyModule_AddCharMacro(m, THOST_FTDC_FIOTEN_SwapCurrency) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundTypeEnType是一个资金类型类型
	/////////////////////////////////////////////////////////////////////////
	///Bank Deposit
	if( PyModule_AddCharMacro(m, THOST_FTDC_FTEN_Deposite) != 0 ) return -1;
	///Payment/Fee
	if( PyModule_AddCharMacro(m, THOST_FTDC_FTEN_ItemFund) != 0 ) return -1;
	///Brokerage Adj
	if( PyModule_AddCharMacro(m, THOST_FTDC_FTEN_Company) != 0 ) return -1;
	///Internal Transfer
	if( PyModule_AddCharMacro(m, THOST_FTDC_FTEN_InnerTransfer) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundDirectionEnType是一个出入金方向类型
	/////////////////////////////////////////////////////////////////////////
	///Deposit
	if( PyModule_AddCharMacro(m, THOST_FTDC_FDEN_In) != 0 ) return -1;
	///Withdrawal
	if( PyModule_AddCharMacro(m, THOST_FTDC_FDEN_Out) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcFundMortDirectionEnType是一个货币质押方向类型
	/////////////////////////////////////////////////////////////////////////
	///Pledge
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMDEN_In) != 0 ) return -1;
	///Redemption
	if( PyModule_AddCharMacro(m, THOST_FTDC_FMDEN_Out) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOptionsTypeType是一个期权类型类型
	/////////////////////////////////////////////////////////////////////////
	///看涨
	if( PyModule_AddCharMacro(m, THOST_FTDC_CP_CallOptions) != 0 ) return -1;
	///看跌
	if( PyModule_AddCharMacro(m, THOST_FTDC_CP_PutOptions) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcStrikeModeType是一个执行方式类型
	/////////////////////////////////////////////////////////////////////////
	///欧式
	if( PyModule_AddCharMacro(m, THOST_FTDC_STM_Continental) != 0 ) return -1;
	///美式
	if( PyModule_AddCharMacro(m, THOST_FTDC_STM_American) != 0 ) return -1;
	///百慕大
	if( PyModule_AddCharMacro(m, THOST_FTDC_STM_Bermuda) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcStrikeTypeType是一个执行类型类型
	/////////////////////////////////////////////////////////////////////////
	///自身对冲
	if( PyModule_AddCharMacro(m, THOST_FTDC_STT_Hedge) != 0 ) return -1;
	///匹配执行
	if( PyModule_AddCharMacro(m, THOST_FTDC_STT_Match) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcApplyTypeType是一个中金所期权放弃执行申请类型类型
	/////////////////////////////////////////////////////////////////////////
	///不执行数量
	if( PyModule_AddCharMacro(m, THOST_FTDC_APPT_NotStrikeNum) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcGiveUpDataSourceType是一个放弃执行申请数据来源类型
	/////////////////////////////////////////////////////////////////////////
	///系统生成
	if( PyModule_AddCharMacro(m, THOST_FTDC_GUDS_Gen) != 0 ) return -1;
	///手工添加
	if( PyModule_AddCharMacro(m, THOST_FTDC_GUDS_Hand) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExecResultType是一个执行结果类型
	/////////////////////////////////////////////////////////////////////////
	///没有执行
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_NoExec) != 0 ) return -1;
	///已经取消
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_Canceled) != 0 ) return -1;
	///执行成功
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_OK) != 0 ) return -1;
	///期权持仓不够
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_NoPosition) != 0 ) return -1;
	///资金不够
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_NoDeposit) != 0 ) return -1;
	///会员不存在
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_NoParticipant) != 0 ) return -1;
	///客户不存在
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_NoClient) != 0 ) return -1;
	///合约不存在
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_NoInstrument) != 0 ) return -1;
	///没有执行权限
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_NoRight) != 0 ) return -1;
	///不合理的数量
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_InvalidVolume) != 0 ) return -1;
	///没有足够的历史成交
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_NoEnoughHistoryTrade) != 0 ) return -1;
	///未知
	if( PyModule_AddCharMacro(m, THOST_FTDC_OER_Unknown) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCombinationTypeType是一个组合类型类型
	/////////////////////////////////////////////////////////////////////////
	///期货组合
	if( PyModule_AddCharMacro(m, THOST_FTDC_COMBT_Future) != 0 ) return -1;
	///垂直价差BUL
	if( PyModule_AddCharMacro(m, THOST_FTDC_COMBT_BUL) != 0 ) return -1;
	///垂直价差BER
	if( PyModule_AddCharMacro(m, THOST_FTDC_COMBT_BER) != 0 ) return -1;
	///跨式组合
	if( PyModule_AddCharMacro(m, THOST_FTDC_COMBT_STD) != 0 ) return -1;
	///宽跨式组合
	if( PyModule_AddCharMacro(m, THOST_FTDC_COMBT_STG) != 0 ) return -1;
	///备兑组合
	if( PyModule_AddCharMacro(m, THOST_FTDC_COMBT_PRT) != 0 ) return -1;
	///时间价差组合
	if( PyModule_AddCharMacro(m, THOST_FTDC_COMBT_CLD) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcOptionRoyaltyPriceTypeType是一个期权权利金价格类型类型
	/////////////////////////////////////////////////////////////////////////
	///昨结算价
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORPT_PreSettlementPrice) != 0 ) return -1;
	///开仓价
	if( PyModule_AddCharMacro(m, THOST_FTDC_ORPT_OpenPrice) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcBalanceAlgorithmType是一个权益算法类型
	/////////////////////////////////////////////////////////////////////////
	///不计算期权市值盈亏
	if( PyModule_AddCharMacro(m, THOST_FTDC_BLAG_Default) != 0 ) return -1;
	///计算期权市值亏损
	if( PyModule_AddCharMacro(m, THOST_FTDC_BLAG_IncludeOptValLost) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcActionTypeType是一个执行类型类型
	/////////////////////////////////////////////////////////////////////////
	///执行
	if( PyModule_AddCharMacro(m, THOST_FTDC_ACTP_Exec) != 0 ) return -1;
	///放弃
	if( PyModule_AddCharMacro(m, THOST_FTDC_ACTP_Abandon) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcForQuoteStatusType是一个询价状态类型
	/////////////////////////////////////////////////////////////////////////
	///已经提交
	if( PyModule_AddCharMacro(m, THOST_FTDC_FQST_Submitted) != 0 ) return -1;
	///已经接受
	if( PyModule_AddCharMacro(m, THOST_FTDC_FQST_Accepted) != 0 ) return -1;
	///已经被拒绝
	if( PyModule_AddCharMacro(m, THOST_FTDC_FQST_Rejected) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcValueMethodType是一个取值方式类型
	/////////////////////////////////////////////////////////////////////////
	///按绝对值
	if( PyModule_AddCharMacro(m, THOST_FTDC_VM_Absolute) != 0 ) return -1;
	///按比率
	if( PyModule_AddCharMacro(m, THOST_FTDC_VM_Ratio) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExecOrderPositionFlagType是一个期权行权后是否保留期货头寸的标记类型
	/////////////////////////////////////////////////////////////////////////
	///保留
	if( PyModule_AddCharMacro(m, THOST_FTDC_EOPF_Reserve) != 0 ) return -1;
	///不保留
	if( PyModule_AddCharMacro(m, THOST_FTDC_EOPF_UnReserve) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcExecOrderCloseFlagType是一个期权行权后生成的头寸是否自动平仓类型
	/////////////////////////////////////////////////////////////////////////
	///自动平仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_EOCF_AutoClose) != 0 ) return -1;
	///免于自动平仓
	if( PyModule_AddCharMacro(m, THOST_FTDC_EOCF_NotToClose) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcProductTypeType是一个产品类型类型
	/////////////////////////////////////////////////////////////////////////
	///期货
	if( PyModule_AddCharMacro(m, THOST_FTDC_PTE_Futures) != 0 ) return -1;
	///期权
	if( PyModule_AddCharMacro(m, THOST_FTDC_PTE_Options) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCZCEUploadFileNameType是一个郑商所结算文件名类型
	/////////////////////////////////////////////////////////////////////////
	///^\d{8}_zz_\d{4}
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUFN_CUFN_O) != 0 ) return -1;
	///^\d{8}成交表
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUFN_CUFN_T) != 0 ) return -1;
	///^\d{8}单腿持仓表new
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUFN_CUFN_P) != 0 ) return -1;
	///^\d{8}非平仓了结表
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUFN_CUFN_N) != 0 ) return -1;
	///^\d{8}平仓表
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUFN_CUFN_L) != 0 ) return -1;
	///^\d{8}资金表
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUFN_CUFN_F) != 0 ) return -1;
	///^\d{8}组合持仓表
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUFN_CUFN_C) != 0 ) return -1;
	///^\d{8}保证金参数表
	if( PyModule_AddCharMacro(m, THOST_FTDC_CUFN_CUFN_M) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcDCEUploadFileNameType是一个大商所结算文件名类型
	/////////////////////////////////////////////////////////////////////////
	///^\d{8}_dl_\d{3}
	if( PyModule_AddCharMacro(m, THOST_FTDC_DUFN_DUFN_O) != 0 ) return -1;
	///^\d{8}_成交表
	if( PyModule_AddCharMacro(m, THOST_FTDC_DUFN_DUFN_T) != 0 ) return -1;
	///^\d{8}_持仓表
	if( PyModule_AddCharMacro(m, THOST_FTDC_DUFN_DUFN_P) != 0 ) return -1;
	///^\d{8}_资金结算表
	if( PyModule_AddCharMacro(m, THOST_FTDC_DUFN_DUFN_F) != 0 ) return -1;
	///^\d{8}_优惠组合持仓明细表
	if( PyModule_AddCharMacro(m, THOST_FTDC_DUFN_DUFN_C) != 0 ) return -1;
	///^\d{8}_持仓明细表
	if( PyModule_AddCharMacro(m, THOST_FTDC_DUFN_DUFN_D) != 0 ) return -1;
	///^\d{8}_保证金参数表
	if( PyModule_AddCharMacro(m, THOST_FTDC_DUFN_DUFN_M) != 0 ) return -1;
	///^\d{8}_期权执行表
	if( PyModule_AddCharMacro(m, THOST_FTDC_DUFN_DUFN_S) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcSHFEUploadFileNameType是一个上期所结算文件名类型
	/////////////////////////////////////////////////////////////////////////
	///^\d{4}_\d{8}_\d{8}_DailyFundChg
	if( PyModule_AddCharMacro(m, THOST_FTDC_SUFN_SUFN_O) != 0 ) return -1;
	///^\d{4}_\d{8}_\d{8}_Trade
	if( PyModule_AddCharMacro(m, THOST_FTDC_SUFN_SUFN_T) != 0 ) return -1;
	///^\d{4}_\d{8}_\d{8}_SettlementDetail
	if( PyModule_AddCharMacro(m, THOST_FTDC_SUFN_SUFN_P) != 0 ) return -1;
	///^\d{4}_\d{8}_\d{8}_Capital
	if( PyModule_AddCharMacro(m, THOST_FTDC_SUFN_SUFN_F) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCFFEXUploadFileNameType是一个中金所结算文件名类型
	/////////////////////////////////////////////////////////////////////////
	///^\d{4}_SG\d{1}_\d{8}_\d{1}_Trade
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFUFN_SUFN_T) != 0 ) return -1;
	///^\d{4}_SG\d{1}_\d{8}_\d{1}_SettlementDetail
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFUFN_SUFN_P) != 0 ) return -1;
	///^\d{4}_SG\d{1}_\d{8}_\d{1}_Capital
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFUFN_SUFN_F) != 0 ) return -1;
	///^\d{4}_SG\d{1}_\d{8}_\d{1}_OptionExec
	if( PyModule_AddCharMacro(m, THOST_FTDC_CFUFN_SUFN_S) != 0 ) return -1;

	/////////////////////////////////////////////////////////////////////////
	///TFtdcCombDirectionType是一个组合指令方向类型
	/////////////////////////////////////////////////////////////////////////
	///申请组合
	if( PyModule_AddCharMacro(m, THOST_FTDC_CMDR_Comb) != 0 ) return -1;
	///申请拆分
	if( PyModule_AddCharMacro(m, THOST_FTDC_CMDR_UnComb) != 0 ) return -1;
	

	return 0;
}
