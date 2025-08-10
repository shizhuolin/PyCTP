#include "stdafx.h"
#include "main.h"
#include <thread>

int main()
{
	system("COLOR 0A");
	logfile = fopen("syslog.txt", "w");
	while (true)
	{
		LOG("请选择连接行情/交易:\n");
		LOG("1.连接交易\n");
		LOG("2.连接行情\n");
		int trade_md;
		cin >> trade_md;
		switch (trade_md) {
		case 2:
		{
			string g_chFrontMdaddr = getConfig("config", "FrontMdAddr");
			LOG("g_chFrontMdaddr = %s\n", g_chFrontMdaddr.c_str());

			CThostFtdcMdApi  *pUserMdApi =
				CThostFtdcMdApi::CreateFtdcMdApi(".\\flow\\", false, false);
			CSimpleMdHandler ash(pUserMdApi);
			pUserMdApi->RegisterSpi(&ash);
			pUserMdApi->RegisterFront(const_cast<char *>(g_chFrontMdaddr.c_str()));
			pUserMdApi->Init();
			WaitForSingleObject(xinhao, INFINITE);
			ash.ReqUserLogin();
			WaitForSingleObject(xinhao, INFINITE);
			//开始获取合约
			md_InstrumentID.clear();
			string New_instrument;
			LOG("请输入合约号，多个合约请以':'分隔:\n");
			cin >> New_instrument;
			md_InstrumentID = split(New_instrument, ":");

			ash.SubscribeMarketData();//订阅行情
			//ash.SubscribeForQuoteRsp();//订阅询价
			//ash.UnSubscribeMarketData();//退订行情
			//ash.UnSubscribeForQuoteRsp();//退订询价
			//ash.ReqQryMulticastInstrument();//请求查询组播合约
			//WaitForSingleObject(xinhao, INFINITE);
			_getch();
			pUserMdApi->Release();
			return 0;
			exit(-1);
		}
		case 1:
		{
			string g_chFrontaddr = getConfig("config", "FrontAddr");
			cout << "g_chFrontaddr = " << g_chFrontaddr << "\n" << endl;
			CTraderApi *pUserApi = new CTraderApi;//--------------------------
			pUserApi->CreateFtdcTraderApi(".\\flow\\");
			LOG("\napi版本: \n%s",pUserApi->GetApiVersion());
			LOG("\n采集库版本：\n%s",CTP_GetDataCollectApiVersion());
			cout << endl;
			CSimpleHandler sh(pUserApi);
		cir:pUserApi->RegisterSpi(&sh);
			pUserApi->SubscribePrivateTopic(THOST_TERT_QUICK);
			pUserApi->SubscribePublicTopic(THOST_TERT_QUICK);
			pUserApi->RegisterFront(const_cast<char *>(g_chFrontaddr.c_str()));
			pUserApi->Init();
			WaitForSingleObject(g_hEvent, INFINITE);

			while (true)
			{
				LOG("请确定连接模式:\n");
				LOG("1.直连模式\n");
				LOG("2.中继服务器操作员模式(一对多模式)\n");
				LOG("3.中继服务器非操作员模式(多对多模式)\n");
				int mode_num;
				cin >> mode_num;
				switch (mode_num)
				{
				case 1://直连模式
				{
					sh.ReqAuthenticate();
					WaitForSingleObject(g_hEvent, INFINITE);
					sh.ReqUserLogin();
					WaitForSingleObject(g_hEvent, INFINITE);
					break;
				}
				case 2://操作员模式
				{
					sh.ReqAuthenticate();
					WaitForSingleObject(g_hEvent, INFINITE);
					sh.ReqUserLogin();
					WaitForSingleObject(g_hEvent, INFINITE);
					sh.SubmitUserSystemInfo();
					break;
				}
				case 3://非操作员模式
				{
					sh.ReqAuthenticate();
					WaitForSingleObject(g_hEvent, INFINITE);
					sh.RegisterUserSystemInfo();
					sh.ReqUserLogin();
					WaitForSingleObject(g_hEvent, INFINITE);
					break;
				}
				default:
					LOG("选择的模式有误，请重新输入！\n");
					_getch();
					system("cls");
					continue;
				}
				break;
			}

			_getch();

			LOG("日期:");
			LOG(pUserApi->GetTradingDay());
			cout << endl;
			while (true)
			{
			loop:int input1;
				system("cls");
				LOG("103.请求登出\n");
				LOG("1.结算单确认请求\n");
				LOG("2.用户口令更新请求\n");
				LOG("3.资金账户口令更新请求\n");
				LOG("/////////////报单////////////\n");
				LOG("4.报单模块\n");
				LOG("////////////查询/////////////\n");
				LOG("5.查询模块\n");
				LOG("/////////////行权&做市商////////////\n");
				LOG("6.行权&做市商\n");
				LOG("///////////出入金/////////////\n");
				LOG("7.转账指令\n");
				LOG("///////////铜期权测试////////////\n");
				LOG("8.铜期权测试\n");
				LOG("9.版本6.6.5新加接口\n");
				LOG("0.清空界面\n");
				LOG("100.退出程序\n");
				LOG("请输入你需要的操作序号：");
				cin >> input1;
				switch (input1)
				{
				case 103:
				{
					sh.ReqUserLogout();
					_getch();
					break;
					//goto cir;
				}
				case 1://结算单确认请求
				{
					sh.ReqSettlementInfoConfirm();//结算单确认请求
					WaitForSingleObject(g_hEvent, INFINITE);
					_getch();
					system("cls");
					break;
				}
				case 2://用户口令更新请求
				{
					sh.ReqUserPasswordUpdate();//用户口令更新请求
					WaitForSingleObject(g_hEvent, INFINITE);
					_getch();
					system("cls");
					break;
				}
				case 3://资金账户口令更新请求
				{
					sh.ReqTradingAccountPasswordUpdate();//资金账户口令更新请求
					WaitForSingleObject(g_hEvent, INFINITE);
					_getch();
					system("cls");
					break;
				}
				case 4://报单录入请求
				{
				orderinsert:system("cls");
					int orderinsert_num;
					LOG("3.大商所市价止损单\n");
					LOG("4.报入一笔立即单\n");
					LOG("5.撤销上一笔报单\n");
					LOG("6.报入预埋单-限价单立即单\n");
					LOG("7.撤销预埋单-(上一个预埋单)\n");
					LOG("8.报入预埋撤单\n");
					LOG("9.撤销预埋撤单-(上一个预埋撤单)\n");
					LOG("10.报入条件单\n");
					LOG("11.撤销条件单-(上一个条件单)\n");
					LOG("25.大商所止损单\n");
					LOG("26.大商所止盈单\n");
					LOG("27.FOK全成全撤\n");
					LOG("28.FAK部成部撤\n");
					LOG("29.市价单\n");
					LOG("30.套利指令\n");
					LOG("31.互换单\n");
					LOG("32.申请组合\n");
					LOG("0.返回上一层\n");
					cin >> orderinsert_num;
					switch (orderinsert_num)
					{
					case 0:
						goto loop;
					case 3:
					{
						sh.ReqOrderInsert_dce();
						_getch();
						break;
					}
					case 4://报入普通立即单
					{
						sh.ReqOrderInsert_Ordinary();
						_getch();
						break;
					}
					case 5://撤销上一笔报单
					{
						sh.ReqOrderAction_Ordinary();//撤销上一笔报单
						_getch();
						break;
					}
					case 6://报入预埋单
					{
						sh.ReqParkedOrderInsert();//报入预埋单
						_getch();
						break;
					}
					case 7://删除预埋单
					{
						sh.ReqRemoveParkedOrder();//删除预埋单
						_getch();
						break;
					}
					case 8://报入预埋撤单
					{
						sh.ReqParkedOrderAction();//报入预埋撤单
						_getch();
						break;
					}
					case 9://删除预埋单撤单
					{
						sh.ReqRemoveParkedOrderAction();//删除预埋单撤单
						_getch();
						break;
					}
					case 10://报入条件单
					{
					it:LOG("1.最新价大于条件价\n");
						LOG("2.最新价大于等于条件价\n");
						LOG("3.最新价小于条件价\n");
						LOG("4.最新价小于等于条件价\n");
						LOG("5.卖一价大于条件价\n");
						LOG("6.卖一价大于等于条件价\n");
						LOG("7.卖一价小于条件价\n");
						LOG("8.卖一价小于等于条件价\n");
						LOG("9.买一价大于条件价\n");
						LOG("10.买一价大于等于条件价\n");
						LOG("11.买一价小于条件价\n");
						LOG("12.买一价小于等于条件价\n");
						LOG("13.返回上一层\n");
						LOG("请输入你需要报入的条件单类型:\n");
						int num;
						cin >> num;
						if (num < 1 || num>13)
						{
							LOG("输入的序号有误,请重新输入.\n");
							_getch();
							goto it;
						}
						else if (num == 13)
						{
							goto orderinsert;
						}
						else
						{
							sh.ReqOrderInsert_Condition(num);//报入条件单
							_getch();
							break;
						}
					}
					case 11://报入条件单撤单
					{
						sh.ReqOrderAction_Condition();//报入条件单撤单
						_getch();
						break;
					}

					case 25://大商所止损单
					{
						sh.ReqOrderInsert_Touch();
						_getch();
						break;
					}
					case 26://大商所止盈单
					{
						sh.ReqOrderInsert_TouchProfit();
						_getch();
						break;
					}
					case 27://FOK全成全撤
					{
						sh.ReqOrderInsert_VC_CV();
						_getch();
						break;
					}
					case 28://FAK部成部撤
					{
						sh.ReqOrderInsert_VC_AV();
						_getch();
						break;
					}
					case 29://市价单
					{
						sh.ReqOrderInsert_AnyPrice();
						_getch();
						break;
					}
					case 30://套利指令
					{
						sh.ReqOrderInsert_Arbitrage();
						_getch();
						break;
					}
					case 31://互换单
					{
						sh.ReqOrderInsert_IsSwapOrder();
						_getch();
						break;
					}
					case 32://申请组合
					{
						sh.ReqCombActionInsert();
						_getch();
						break;
					}
					default:
						LOG("请输入正确的序号\n");
						_getch();
						goto orderinsert;
					}
					goto orderinsert;
				}
				case 5://查询界面
				{
				search:system("cls");
					int choose_num;
					LOG("4.请求查询交易通知\n");
					LOG("5.请求查询客户通知\n");
					LOG("11.查询成交\n");
					LOG("12.查询预埋单\n");
					LOG("13.查询预埋撤单\n");
					LOG("14.查询报单\n");
					LOG("15.撤单对应查询编号\n");
					LOG("16.请求查询资金账户\n");//ReqQryTradingAccount
					LOG("17.请求查询投资者持仓\n");//ReqQryInvestorPosition
					LOG("18.请求查询投资者持仓明细\n");//ReqQryInvestorPositionDetail
					LOG("19.请求查询交易所保证金率\n");//ReqQryExchangeMarginRate
					LOG("20.请求查询合约保证金率\n");//ReqQryInstrumentMarginRate
					LOG("21.请求查询合约手续费率\n");//ReqQryInstrumentCommissionRate
					LOG("22.请求查询做市商合约手续费率\n");//ReqQryMMInstrumentCommissionRate
					LOG("23.请求查询做市商期权合约手续费\n"); //ReqQryMMOptionInstrCommRate
					LOG("24.请求查询报单手续费\n");//ReqQryInstrumentOrderCommRate
					LOG("25.请求查询期权合约手续费\n");//ReqQryOptionInstrCommRate
					LOG("26.请求查询合约\n");//ReqQryInstrument
					LOG("27.请求查询投资者结算结果\n");//ReqQrySettlementInfo
					LOG("28.请求查询转帐流水\n");//ReqQryTransferSerial
					LOG("29.请求查询询价\n");
					LOG("30.请求查询报价\n");
					LOG("31.请求查询执行宣告\n");
					LOG("32.请求查询转帐银行\n");
					LOG("33.请求查询交易通知\n");
					LOG("34.请求查询交易编码\n");
					LOG("35.请求查询结算信息确认\n");
					LOG("36.请求查询产品组\n");
					LOG("37.请求查询投资者单元\n");
					LOG("38.期货发起查询银行余额请求\n");
					LOG("39.请求查询经纪公司交易参数\n");
					LOG("40.查询最大报单数量请求\n");
					LOG("41.请求查询分类合约\n");
					LOG("42.请求组合优惠比例\n");
					LOG("43.请求查询投资者品种/跨品种保证金\n");
					LOG("44.请求查询交易所调整保证金率\n");
					LOG("45.投资者风险结算持仓查询\n");
					LOG("46.风险结算产品查询\n");
					LOG("47.查询银期签约关系\n");
					LOG("48.请求查询签约银行\n");
					LOG("49.查询深度行情\n");
					LOG("0.返回上一层\n");
					LOG("请输入选择的序号:\n");
					cin >> choose_num;
					switch (choose_num)
					{
					case 4:
					{
						sh.ReqQryTradingNotice();//请求查询交易通知
						_getch();
						break;
					}
					case 5:
					{
						sh.ReqQryNotice();//请求查询客户通知
						_getch();
						break;
					}
					case 11://请求查询成交
					{
						sh.ReqQryTrade();//请求查询成交
						_getch();
						break;
					}
					case 12://请求查询服务器预埋单
					{
						sh.ReqQryParkedOrder();//请求查询服务器预埋单
						_getch();
						break;
					}
					case 13://请求查询服务器预埋撤单
					{
						sh.ReqQryParkedOrderAction();//请求查询服务器预埋撤单
						_getch();
						break;
					}
					case 14://请求查询报单
					{
						sh.ReqQryOrder();//请求查询报单
						_getch();
						break;
					}
					case 15://撤销查询的报单回报
					{
					action:int action_num;
						LOG("请输入需要撤单的序号：\n");
						cin >> action_num;
						LOG("%d\n", action_num);
						if (action_num < 1 || action_num > vector_OrderSysID.size())
						{
							LOG("输入的序号有误,请重新输入.\n");
							_getch();
							goto action;
						}
						sh.ReqOrderAction_forqry(action_num);//撤销查询的报单回报
						_getch();
						break;
					}
					case 16://请求查询资金账户
					{
						sh.ReqQryTradingAccount();//请求查询资金账户
						_getch();
						break;
					}
					case 17://请求查询投资者持仓
					{
						sh.ReqQryInvestorPosition();//请求查询投资者持仓
						_getch();
						break;
					}
					case 18://请求查询投资者持仓明细
					{
						sh.ReqQryInvestorPositionDetail();//请求查询投资者持仓明细
						_getch();
						break;
					}
					case 19://请求查询交易所保证金率
					{
						sh.ReqQryExchangeMarginRate();//请求查询交易所保证金率
						_getch();
						break;
					}
					case 20://请求查询合约保证金率
					{
						sh.ReqQryInstrumentMarginRate();//请求查询合约保证金率
						_getch();
						break;
					}
					case 21://请求查询合约手续费率
					{
						sh.ReqQryInstrumentCommissionRate();//请求查询合约手续费率
						_getch();
						break;
					}
					case 22://请求查询做市商合约手续费率
					{
						sh.ReqQryMMInstrumentCommissionRate();//请求查询做市商合约手续费率
						_getch();
						break;
					}
					case 23://请求查询做市商期权合约手续费
					{
						sh.ReqQryMMOptionInstrCommRate();//请求查询做市商合约手续费率
						_getch();
						break;
					}
					case 24://请求查询报单手续费
					{
						sh.ReqQryInstrumentOrderCommRate();//请求查询报单手续费
						_getch();
						break;
					}
					case 25://请求查询期权合约手续费
					{
						sh.ReqQryOptionInstrCommRate();//请求查询期权合约手续费
						_getch();
						break;
					}
					case 26://请求查询合约
					{
						sh.ReqQryInstrument();//请求查询合约
						_getch();
						break;
					}
					case 27://请求查询投资者结算结果
					{
						sh.ReqQrySettlementInfo();//请求查询投资者结算结果
						_getch();
						break;
					}
					case 28://请求查询转帐流水
					{
						sh.ReqQryTransferSerial();//请求查询投资者结算结果
						_getch();
						break;
					}
					case 29://请求查询询价
					{
						sh.ReqQryForQuote();//请求查询询价
						_getch();
						break;
					}
					case 30://请求查询报价
					{
						sh.ReqQryQuote();//请求查询报价
						_getch();
						break;
					}
					case 31://请求查询执行宣告
					{
						sh.ReqQryExecOrder();//请求查询执行宣告
						_getch();
						break;
					}
					case 32://请求查询转帐银行
					{
						sh.ReqQryTransferBank();
						_getch();
						break;
					}
					case 33://请求查询交易通知
					{
						sh.ReqQryTradingNotice();
						_getch();
						break;
					}
					case 34://请求查询交易编码
					{
						sh.ReqQryTradingCode();
						_getch();
						break;
					}
					case 35://请求查询结算信息确认
					{
						sh.ReqQrySettlementInfoConfirm();
						_getch();
						break;
					}
					case 36://请求查询产品组
					{
						sh.ReqQryProductGroup();
						_getch();
						break;
					}
					case 37://请求查询投资者单元
					{
						sh.ReqQryInvestUnit();
						_getch();
						break;
					}
					case 38://期货发起查询银行余额请求
					{
						sh.ReqQueryBankAccountMoneyByFuture();
						_getch();
						break;
					}
					case 39://请求查询经纪公司交易参数
					{
						sh.ReqQryBrokerTradingParams();
						_getch();
						break;
					}
					case 40://查询最大报单数量请求
					{
						sh.ReqQryMaxOrderVolume();
						_getch();
						break;
					}
					case 41://请求查询分类合约
					{
						sh.ReqQryClassifiedInstrument();
						_getch();
						break;
					}
					case 42://请求组合优惠比例
					{
						sh.ReqQryCombPromotionParam();
						_getch();
						break;
					}
					case 43://请求查询投资者品种/跨品种保证金
					{
						sh.ReqQryInvestorProductGroupMargin();
						_getch();
						break;
					}
					case 44://请求查询交易所调整保证金率
					{
						sh.ReqQryExchangeMarginRateAdjust();
						_getch();
						break;
					}
					case 45:
					{
						sh.ReqQryRiskSettleInvstPosition();
						_getch();
						break;
					}
					case 46:
					{
						sh.ReqQryRiskSettleProductStatus();
						_getch();
						break;
					}
					case 47://查询银期签约关系
					{
						sh.ReqQryAccountregister();
						_getch();
						break;
					}
					case 48:
					{
						sh.ReqQryContractBank();
						_getch();
						break;
					}
					case 49:
					{
						sh.ReqQryDepthMarketData();
						_getch();
						break;
					}
					case 0:
					{
						goto loop;
					}
					default: {
						LOG("请输入正确的序号\n");
						_getch();
						goto search;
					}
					}
					goto search;
				}
				case 6://行权&做市商
				{
				Exec:system("cls");
					int num_xingquan;
					LOG("32.执行宣告录入请求\n");
					LOG("33.执行宣告操作请求\n");
					LOG("34.放弃行权\n");
					LOG("35.询价录入请求\n");
					LOG("36.做市商报价录入请求\n");
					LOG("37.做市商报价撤销请求\n");
					LOG("0.返回上一层")
						LOG("请选择你需要的编码");
					cin >> num_xingquan;
					switch (num_xingquan)
					{
					case 32://执行宣告录入请求
					{
						sh.ReqExecOrderInsert(0);
						_getch();
						break;
					}
					case 33://执行宣告操作请求
					{
						sh.ReqExecOrderAction();
						_getch();
						break;
					}
					case 34://放弃行权
					{
						sh.ReqExecOrderInsert(1);
						_getch();
						break;
					}
					case 35://询价录入请求
					{
						string g_chFrontMdaddr = getConfig("config", "FrontMdAddr");
						cout << "g_chFrontMdaddr = " << g_chFrontMdaddr << "\n" << endl;
						CThostFtdcMdApi  *pUserMdApi =
							CThostFtdcMdApi::CreateFtdcMdApi();
						CSimpleMdHandler ash(pUserMdApi);
						pUserMdApi->RegisterSpi(&ash);
						pUserMdApi->RegisterFront(const_cast<char *>(g_chFrontMdaddr.c_str()));
						pUserMdApi->Init();
						WaitForSingleObject(xinhao, INFINITE);
						ash.ReqUserLogin();
						WaitForSingleObject(xinhao, INFINITE);
						ash.SubscribeMarketData();//行情订阅询价请求
						sh.ReqForQuoteInsert();//交易请求询价
						_getch();
						pUserMdApi->Release();
						break;
					}
					case 36://做市商报价录入请求
					{
						sh.ReqQuoteInsert();
						_getch();
						break;
					}
					case 37://做市商报价撤销请求
					{
						sh.ReqQuoteAction();
						_getch();
						break;
					}
					case 0:
					{
						goto loop;
					}
					default:
						LOG("输入的编码有误，请重新输入\n");
						_getch();
					}
					goto Exec;
				}
				case 7://期货资金转账
				{
				futrue:system("cls");
					int num_future;
					LOG("38.期货发起银行资金转期货请求\n");
					LOG("39.期货发起期货资金转银行请求\n");
					LOG("0.返回上一层\n");
					LOG("请输入你需要的操作序号：");
					cin >> num_future;
					switch (num_future)
					{
					case 38://期货发起银行资金转期货请求
					{
						sh.ReqFromBankToFutureByFuture();
						_getch();
						break;
					}
					case 39://期货发起期货资金转银行请求
					{
						sh.ReqFromFutureToBankByFuture();
						_getch();
						break;
					}
					case 0:
					{
						goto loop;
					}
					default:
						LOG("输入的编码有误，请重新输入\n");
						_getch();
					}
					goto futrue;
				}
				case 8://铜期权测试
				{
				qiquan:system("cls");
					int num_qiquan;
					LOG("//////////////铜期权测试////////////\n");
					LOG("1.期权自对冲录入请求\n");
					LOG("2.期权自对冲操作请求\n");
					LOG("3.请求查询期权自对冲\n");
					LOG("0.返回上一层\n");
					LOG("请选择你需要的编码:\n");
					cin >> num_qiquan;
					switch (num_qiquan)
					{
					case 1:
					{
						sh.ReqOptionSelfCloseInsert();
						_getch();
						break;
					}
					case 2:
					{
						sh.ReqOptionSelfCloseAction();
						_getch();
						break;
					}
					case 3:
					{
						sh.ReqQryOptionSelfClose();
						_getch();
						break;
					}
					case 0:
						goto loop;
						break;
					default:
						LOG("输入的序号有误，请重新输入。\n\n");
						_getch();
					}
					goto qiquan;
				}
				case 9://版本6.6.5新加接口
				{
				NewVersion:
					system("cls");
					int num_Newversion;
					LOG("新版本测试\n");
					LOG("1.请求查询交易员报盘机\n");
					LOG("0.返回上一层\n");
					LOG("请选择你需要的编码:\n");
					cin >> num_Newversion;
					switch (num_Newversion)
					{
					case 1://查询用户当前支持的认证模式
					{
						sh.ReqQryTraderOffer();
						_getch();
						break;
					}
					case 0:
						goto loop;
						break;
					default:
						LOG("输入的序号有误，请重新输入。\n\n");
						_getch();
						goto NewVersion;
					}
					goto NewVersion;
				}
				case 0:
					system("cls");
					break;
				case 100:
					pUserApi->Release();
					exit(-1);
				}
			}
			return 0;
		}
		default: {
			LOG("请输入正确的序号。/n");
			_getch();
		}
		}
	}
}
