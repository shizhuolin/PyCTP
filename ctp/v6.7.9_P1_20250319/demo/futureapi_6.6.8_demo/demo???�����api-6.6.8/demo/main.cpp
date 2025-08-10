#include "stdafx.h"
#include "main.h"
#include <thread>

int main()
{
	system("COLOR 0A");
	logfile = fopen("syslog.txt", "w");
	while (true)
	{
		LOG("��ѡ����������/����:\n");
		LOG("1.���ӽ���\n");
		LOG("2.��������\n");
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
			//��ʼ��ȡ��Լ
			md_InstrumentID.clear();
			string New_instrument;
			LOG("�������Լ�ţ������Լ����':'�ָ�:\n");
			cin >> New_instrument;
			md_InstrumentID = split(New_instrument, ":");

			ash.SubscribeMarketData();//��������
			//ash.SubscribeForQuoteRsp();//����ѯ��
			//ash.UnSubscribeMarketData();//�˶�����
			//ash.UnSubscribeForQuoteRsp();//�˶�ѯ��
			//ash.ReqQryMulticastInstrument();//�����ѯ�鲥��Լ
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
			LOG("\napi�汾: \n%s",pUserApi->GetApiVersion());
			LOG("\n�ɼ���汾��\n%s",CTP_GetDataCollectApiVersion());
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
				LOG("��ȷ������ģʽ:\n");
				LOG("1.ֱ��ģʽ\n");
				LOG("2.�м̷���������Աģʽ(һ�Զ�ģʽ)\n");
				LOG("3.�м̷������ǲ���Աģʽ(��Զ�ģʽ)\n");
				int mode_num;
				cin >> mode_num;
				switch (mode_num)
				{
				case 1://ֱ��ģʽ
				{
					sh.ReqAuthenticate();
					WaitForSingleObject(g_hEvent, INFINITE);
					sh.ReqUserLogin();
					WaitForSingleObject(g_hEvent, INFINITE);
					break;
				}
				case 2://����Աģʽ
				{
					sh.ReqAuthenticate();
					WaitForSingleObject(g_hEvent, INFINITE);
					sh.ReqUserLogin();
					WaitForSingleObject(g_hEvent, INFINITE);
					sh.SubmitUserSystemInfo();
					break;
				}
				case 3://�ǲ���Աģʽ
				{
					sh.ReqAuthenticate();
					WaitForSingleObject(g_hEvent, INFINITE);
					sh.RegisterUserSystemInfo();
					sh.ReqUserLogin();
					WaitForSingleObject(g_hEvent, INFINITE);
					break;
				}
				default:
					LOG("ѡ���ģʽ�������������룡\n");
					_getch();
					system("cls");
					continue;
				}
				break;
			}

			_getch();

			LOG("����:");
			LOG(pUserApi->GetTradingDay());
			cout << endl;
			while (true)
			{
			loop:int input1;
				system("cls");
				LOG("103.����ǳ�\n");
				LOG("1.���㵥ȷ������\n");
				LOG("2.�û������������\n");
				LOG("3.�ʽ��˻������������\n");
				LOG("/////////////����////////////\n");
				LOG("4.����ģ��\n");
				LOG("////////////��ѯ/////////////\n");
				LOG("5.��ѯģ��\n");
				LOG("/////////////��Ȩ&������////////////\n");
				LOG("6.��Ȩ&������\n");
				LOG("///////////�����/////////////\n");
				LOG("7.ת��ָ��\n");
				LOG("///////////ͭ��Ȩ����////////////\n");
				LOG("8.ͭ��Ȩ����\n");
				LOG("9.�汾6.6.5�¼ӽӿ�\n");
				LOG("0.��ս���\n");
				LOG("100.�˳�����\n");
				LOG("����������Ҫ�Ĳ�����ţ�");
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
				case 1://���㵥ȷ������
				{
					sh.ReqSettlementInfoConfirm();//���㵥ȷ������
					WaitForSingleObject(g_hEvent, INFINITE);
					_getch();
					system("cls");
					break;
				}
				case 2://�û������������
				{
					sh.ReqUserPasswordUpdate();//�û������������
					WaitForSingleObject(g_hEvent, INFINITE);
					_getch();
					system("cls");
					break;
				}
				case 3://�ʽ��˻������������
				{
					sh.ReqTradingAccountPasswordUpdate();//�ʽ��˻������������
					WaitForSingleObject(g_hEvent, INFINITE);
					_getch();
					system("cls");
					break;
				}
				case 4://����¼������
				{
				orderinsert:system("cls");
					int orderinsert_num;
					LOG("3.�������м�ֹ��\n");
					LOG("4.����һ��������\n");
					LOG("5.������һ�ʱ���\n");
					LOG("6.����Ԥ��-�޼۵�������\n");
					LOG("7.����Ԥ��-(��һ��Ԥ��)\n");
					LOG("8.����Ԥ�񳷵�\n");
					LOG("9.����Ԥ�񳷵�-(��һ��Ԥ�񳷵�)\n");
					LOG("10.����������\n");
					LOG("11.����������-(��һ��������)\n");
					LOG("25.������ֹ��\n");
					LOG("26.������ֹӯ��\n");
					LOG("27.FOKȫ��ȫ��\n");
					LOG("28.FAK���ɲ���\n");
					LOG("29.�м۵�\n");
					LOG("30.����ָ��\n");
					LOG("31.������\n");
					LOG("32.�������\n");
					LOG("0.������һ��\n");
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
					case 4://������ͨ������
					{
						sh.ReqOrderInsert_Ordinary();
						_getch();
						break;
					}
					case 5://������һ�ʱ���
					{
						sh.ReqOrderAction_Ordinary();//������һ�ʱ���
						_getch();
						break;
					}
					case 6://����Ԥ��
					{
						sh.ReqParkedOrderInsert();//����Ԥ��
						_getch();
						break;
					}
					case 7://ɾ��Ԥ��
					{
						sh.ReqRemoveParkedOrder();//ɾ��Ԥ��
						_getch();
						break;
					}
					case 8://����Ԥ�񳷵�
					{
						sh.ReqParkedOrderAction();//����Ԥ�񳷵�
						_getch();
						break;
					}
					case 9://ɾ��Ԥ�񵥳���
					{
						sh.ReqRemoveParkedOrderAction();//ɾ��Ԥ�񵥳���
						_getch();
						break;
					}
					case 10://����������
					{
					it:LOG("1.���¼۴���������\n");
						LOG("2.���¼۴��ڵ���������\n");
						LOG("3.���¼�С��������\n");
						LOG("4.���¼�С�ڵ���������\n");
						LOG("5.��һ�۴���������\n");
						LOG("6.��һ�۴��ڵ���������\n");
						LOG("7.��һ��С��������\n");
						LOG("8.��һ��С�ڵ���������\n");
						LOG("9.��һ�۴���������\n");
						LOG("10.��һ�۴��ڵ���������\n");
						LOG("11.��һ��С��������\n");
						LOG("12.��һ��С�ڵ���������\n");
						LOG("13.������һ��\n");
						LOG("����������Ҫ���������������:\n");
						int num;
						cin >> num;
						if (num < 1 || num>13)
						{
							LOG("������������,����������.\n");
							_getch();
							goto it;
						}
						else if (num == 13)
						{
							goto orderinsert;
						}
						else
						{
							sh.ReqOrderInsert_Condition(num);//����������
							_getch();
							break;
						}
					}
					case 11://��������������
					{
						sh.ReqOrderAction_Condition();//��������������
						_getch();
						break;
					}

					case 25://������ֹ��
					{
						sh.ReqOrderInsert_Touch();
						_getch();
						break;
					}
					case 26://������ֹӯ��
					{
						sh.ReqOrderInsert_TouchProfit();
						_getch();
						break;
					}
					case 27://FOKȫ��ȫ��
					{
						sh.ReqOrderInsert_VC_CV();
						_getch();
						break;
					}
					case 28://FAK���ɲ���
					{
						sh.ReqOrderInsert_VC_AV();
						_getch();
						break;
					}
					case 29://�м۵�
					{
						sh.ReqOrderInsert_AnyPrice();
						_getch();
						break;
					}
					case 30://����ָ��
					{
						sh.ReqOrderInsert_Arbitrage();
						_getch();
						break;
					}
					case 31://������
					{
						sh.ReqOrderInsert_IsSwapOrder();
						_getch();
						break;
					}
					case 32://�������
					{
						sh.ReqCombActionInsert();
						_getch();
						break;
					}
					default:
						LOG("��������ȷ�����\n");
						_getch();
						goto orderinsert;
					}
					goto orderinsert;
				}
				case 5://��ѯ����
				{
				search:system("cls");
					int choose_num;
					LOG("4.�����ѯ����֪ͨ\n");
					LOG("5.�����ѯ�ͻ�֪ͨ\n");
					LOG("11.��ѯ�ɽ�\n");
					LOG("12.��ѯԤ��\n");
					LOG("13.��ѯԤ�񳷵�\n");
					LOG("14.��ѯ����\n");
					LOG("15.������Ӧ��ѯ���\n");
					LOG("16.�����ѯ�ʽ��˻�\n");//ReqQryTradingAccount
					LOG("17.�����ѯͶ���ֲ߳�\n");//ReqQryInvestorPosition
					LOG("18.�����ѯͶ���ֲ߳���ϸ\n");//ReqQryInvestorPositionDetail
					LOG("19.�����ѯ��������֤����\n");//ReqQryExchangeMarginRate
					LOG("20.�����ѯ��Լ��֤����\n");//ReqQryInstrumentMarginRate
					LOG("21.�����ѯ��Լ��������\n");//ReqQryInstrumentCommissionRate
					LOG("22.�����ѯ�����̺�Լ��������\n");//ReqQryMMInstrumentCommissionRate
					LOG("23.�����ѯ��������Ȩ��Լ������\n"); //ReqQryMMOptionInstrCommRate
					LOG("24.�����ѯ����������\n");//ReqQryInstrumentOrderCommRate
					LOG("25.�����ѯ��Ȩ��Լ������\n");//ReqQryOptionInstrCommRate
					LOG("26.�����ѯ��Լ\n");//ReqQryInstrument
					LOG("27.�����ѯͶ���߽�����\n");//ReqQrySettlementInfo
					LOG("28.�����ѯת����ˮ\n");//ReqQryTransferSerial
					LOG("29.�����ѯѯ��\n");
					LOG("30.�����ѯ����\n");
					LOG("31.�����ѯִ������\n");
					LOG("32.�����ѯת������\n");
					LOG("33.�����ѯ����֪ͨ\n");
					LOG("34.�����ѯ���ױ���\n");
					LOG("35.�����ѯ������Ϣȷ��\n");
					LOG("36.�����ѯ��Ʒ��\n");
					LOG("37.�����ѯͶ���ߵ�Ԫ\n");
					LOG("38.�ڻ������ѯ�����������\n");
					LOG("39.�����ѯ���͹�˾���ײ���\n");
					LOG("40.��ѯ��󱨵���������\n");
					LOG("41.�����ѯ�����Լ\n");
					LOG("42.��������Żݱ���\n");
					LOG("43.�����ѯͶ����Ʒ��/��Ʒ�ֱ�֤��\n");
					LOG("44.�����ѯ������������֤����\n");
					LOG("45.Ͷ���߷��ս���ֲֲ�ѯ\n");
					LOG("46.���ս����Ʒ��ѯ\n");
					LOG("47.��ѯ����ǩԼ��ϵ\n");
					LOG("48.�����ѯǩԼ����\n");
					LOG("49.��ѯ�������\n");
					LOG("0.������һ��\n");
					LOG("������ѡ������:\n");
					cin >> choose_num;
					switch (choose_num)
					{
					case 4:
					{
						sh.ReqQryTradingNotice();//�����ѯ����֪ͨ
						_getch();
						break;
					}
					case 5:
					{
						sh.ReqQryNotice();//�����ѯ�ͻ�֪ͨ
						_getch();
						break;
					}
					case 11://�����ѯ�ɽ�
					{
						sh.ReqQryTrade();//�����ѯ�ɽ�
						_getch();
						break;
					}
					case 12://�����ѯ������Ԥ��
					{
						sh.ReqQryParkedOrder();//�����ѯ������Ԥ��
						_getch();
						break;
					}
					case 13://�����ѯ������Ԥ�񳷵�
					{
						sh.ReqQryParkedOrderAction();//�����ѯ������Ԥ�񳷵�
						_getch();
						break;
					}
					case 14://�����ѯ����
					{
						sh.ReqQryOrder();//�����ѯ����
						_getch();
						break;
					}
					case 15://������ѯ�ı����ر�
					{
					action:int action_num;
						LOG("��������Ҫ��������ţ�\n");
						cin >> action_num;
						LOG("%d\n", action_num);
						if (action_num < 1 || action_num > vector_OrderSysID.size())
						{
							LOG("������������,����������.\n");
							_getch();
							goto action;
						}
						sh.ReqOrderAction_forqry(action_num);//������ѯ�ı����ر�
						_getch();
						break;
					}
					case 16://�����ѯ�ʽ��˻�
					{
						sh.ReqQryTradingAccount();//�����ѯ�ʽ��˻�
						_getch();
						break;
					}
					case 17://�����ѯͶ���ֲ߳�
					{
						sh.ReqQryInvestorPosition();//�����ѯͶ���ֲ߳�
						_getch();
						break;
					}
					case 18://�����ѯͶ���ֲ߳���ϸ
					{
						sh.ReqQryInvestorPositionDetail();//�����ѯͶ���ֲ߳���ϸ
						_getch();
						break;
					}
					case 19://�����ѯ��������֤����
					{
						sh.ReqQryExchangeMarginRate();//�����ѯ��������֤����
						_getch();
						break;
					}
					case 20://�����ѯ��Լ��֤����
					{
						sh.ReqQryInstrumentMarginRate();//�����ѯ��Լ��֤����
						_getch();
						break;
					}
					case 21://�����ѯ��Լ��������
					{
						sh.ReqQryInstrumentCommissionRate();//�����ѯ��Լ��������
						_getch();
						break;
					}
					case 22://�����ѯ�����̺�Լ��������
					{
						sh.ReqQryMMInstrumentCommissionRate();//�����ѯ�����̺�Լ��������
						_getch();
						break;
					}
					case 23://�����ѯ��������Ȩ��Լ������
					{
						sh.ReqQryMMOptionInstrCommRate();//�����ѯ�����̺�Լ��������
						_getch();
						break;
					}
					case 24://�����ѯ����������
					{
						sh.ReqQryInstrumentOrderCommRate();//�����ѯ����������
						_getch();
						break;
					}
					case 25://�����ѯ��Ȩ��Լ������
					{
						sh.ReqQryOptionInstrCommRate();//�����ѯ��Ȩ��Լ������
						_getch();
						break;
					}
					case 26://�����ѯ��Լ
					{
						sh.ReqQryInstrument();//�����ѯ��Լ
						_getch();
						break;
					}
					case 27://�����ѯͶ���߽�����
					{
						sh.ReqQrySettlementInfo();//�����ѯͶ���߽�����
						_getch();
						break;
					}
					case 28://�����ѯת����ˮ
					{
						sh.ReqQryTransferSerial();//�����ѯͶ���߽�����
						_getch();
						break;
					}
					case 29://�����ѯѯ��
					{
						sh.ReqQryForQuote();//�����ѯѯ��
						_getch();
						break;
					}
					case 30://�����ѯ����
					{
						sh.ReqQryQuote();//�����ѯ����
						_getch();
						break;
					}
					case 31://�����ѯִ������
					{
						sh.ReqQryExecOrder();//�����ѯִ������
						_getch();
						break;
					}
					case 32://�����ѯת������
					{
						sh.ReqQryTransferBank();
						_getch();
						break;
					}
					case 33://�����ѯ����֪ͨ
					{
						sh.ReqQryTradingNotice();
						_getch();
						break;
					}
					case 34://�����ѯ���ױ���
					{
						sh.ReqQryTradingCode();
						_getch();
						break;
					}
					case 35://�����ѯ������Ϣȷ��
					{
						sh.ReqQrySettlementInfoConfirm();
						_getch();
						break;
					}
					case 36://�����ѯ��Ʒ��
					{
						sh.ReqQryProductGroup();
						_getch();
						break;
					}
					case 37://�����ѯͶ���ߵ�Ԫ
					{
						sh.ReqQryInvestUnit();
						_getch();
						break;
					}
					case 38://�ڻ������ѯ�����������
					{
						sh.ReqQueryBankAccountMoneyByFuture();
						_getch();
						break;
					}
					case 39://�����ѯ���͹�˾���ײ���
					{
						sh.ReqQryBrokerTradingParams();
						_getch();
						break;
					}
					case 40://��ѯ��󱨵���������
					{
						sh.ReqQryMaxOrderVolume();
						_getch();
						break;
					}
					case 41://�����ѯ�����Լ
					{
						sh.ReqQryClassifiedInstrument();
						_getch();
						break;
					}
					case 42://��������Żݱ���
					{
						sh.ReqQryCombPromotionParam();
						_getch();
						break;
					}
					case 43://�����ѯͶ����Ʒ��/��Ʒ�ֱ�֤��
					{
						sh.ReqQryInvestorProductGroupMargin();
						_getch();
						break;
					}
					case 44://�����ѯ������������֤����
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
					case 47://��ѯ����ǩԼ��ϵ
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
						LOG("��������ȷ�����\n");
						_getch();
						goto search;
					}
					}
					goto search;
				}
				case 6://��Ȩ&������
				{
				Exec:system("cls");
					int num_xingquan;
					LOG("32.ִ������¼������\n");
					LOG("33.ִ�������������\n");
					LOG("34.������Ȩ\n");
					LOG("35.ѯ��¼������\n");
					LOG("36.�����̱���¼������\n");
					LOG("37.�����̱��۳�������\n");
					LOG("0.������һ��")
						LOG("��ѡ������Ҫ�ı���");
					cin >> num_xingquan;
					switch (num_xingquan)
					{
					case 32://ִ������¼������
					{
						sh.ReqExecOrderInsert(0);
						_getch();
						break;
					}
					case 33://ִ�������������
					{
						sh.ReqExecOrderAction();
						_getch();
						break;
					}
					case 34://������Ȩ
					{
						sh.ReqExecOrderInsert(1);
						_getch();
						break;
					}
					case 35://ѯ��¼������
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
						ash.SubscribeMarketData();//���鶩��ѯ������
						sh.ReqForQuoteInsert();//��������ѯ��
						_getch();
						pUserMdApi->Release();
						break;
					}
					case 36://�����̱���¼������
					{
						sh.ReqQuoteInsert();
						_getch();
						break;
					}
					case 37://�����̱��۳�������
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
						LOG("����ı�����������������\n");
						_getch();
					}
					goto Exec;
				}
				case 7://�ڻ��ʽ�ת��
				{
				futrue:system("cls");
					int num_future;
					LOG("38.�ڻ����������ʽ�ת�ڻ�����\n");
					LOG("39.�ڻ������ڻ��ʽ�ת��������\n");
					LOG("0.������һ��\n");
					LOG("����������Ҫ�Ĳ�����ţ�");
					cin >> num_future;
					switch (num_future)
					{
					case 38://�ڻ����������ʽ�ת�ڻ�����
					{
						sh.ReqFromBankToFutureByFuture();
						_getch();
						break;
					}
					case 39://�ڻ������ڻ��ʽ�ת��������
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
						LOG("����ı�����������������\n");
						_getch();
					}
					goto futrue;
				}
				case 8://ͭ��Ȩ����
				{
				qiquan:system("cls");
					int num_qiquan;
					LOG("//////////////ͭ��Ȩ����////////////\n");
					LOG("1.��Ȩ�ԶԳ�¼������\n");
					LOG("2.��Ȩ�ԶԳ��������\n");
					LOG("3.�����ѯ��Ȩ�ԶԳ�\n");
					LOG("0.������һ��\n");
					LOG("��ѡ������Ҫ�ı���:\n");
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
						LOG("���������������������롣\n\n");
						_getch();
					}
					goto qiquan;
				}
				case 9://�汾6.6.5�¼ӽӿ�
				{
				NewVersion:
					system("cls");
					int num_Newversion;
					LOG("�°汾����\n");
					LOG("1.�����ѯ����Ա���̻�\n");
					LOG("0.������һ��\n");
					LOG("��ѡ������Ҫ�ı���:\n");
					cin >> num_Newversion;
					switch (num_Newversion)
					{
					case 1://��ѯ�û���ǰ֧�ֵ���֤ģʽ
					{
						sh.ReqQryTraderOffer();
						_getch();
						break;
					}
					case 0:
						goto loop;
						break;
					default:
						LOG("���������������������롣\n\n");
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
			LOG("��������ȷ����š�/n");
			_getch();
		}
		}
	}
}
