#pragma  once
#include "stdafx.h"
#include "getconfig.h"
#include <wtypes.h>
#include <conio.h>
#include <iostream>
#include <locale>
#include <string>
#include <fstream>
#include <conio.h>
#include <string>
#include <time.h>
#include <sstream>
#include <locale.h>
#include <vector>

/*�������ƣ�getConfig()
�������ܣ���ȡ�����ļ�ini����Ӧ�����title��ָ�������ֶ�cfgname��ֵ
����1��string title		�����[***]
����2��string cfgName		������µ������ֶ�
����ֵ�������ļ�ini����Ӧ�����title��ָ�������ֶ�cfgname��ֵ
*/
string getConfig(string title, string cfgName)
{
	const char* INIFile = "config.ini";
	ifstream inifile(INIFile);
	if (!inifile.is_open())
	{
		cerr << "Could not open " << INIFile << endl;
		inifile.clear();
		_getch();
		exit(-1);
	}
	string strtmp, strtitle, strcfgname, returnValue;
	int flag = 0;
	while (getline(inifile, strtmp, '\n'))
	{
		if (strtmp.substr(0, 1) == "#")	continue;	//����ע��		
		if (flag == 0)
		{
			if (strtmp.find(title) != string::npos)
			{
				if (strtmp.substr(0, 1) == "[")
				{
					if (strtmp.find("]") == string::npos) 	break;	//ȱʧ��]���˳�
					strtitle = strtmp.substr(1);
					strtitle = strtitle.erase(strtitle.find("]"));
					if (strtitle == title)		//�ҵ���������ñ�־λΪ1�������Ͳ�������һ���������
					{
						flag = 1;
						continue;
					}
				}
			}
		}
		if (flag == 1)
		{
			if (strtmp.substr(0, 1) == "[")	break;	//���������һ��[]��˵����ǰ������Ӧ�������ֶ�������ϣ�����������
			if (strtmp.find(cfgName) != string::npos)
			{
				if (strtmp.find("=") == string::npos)	break;	//ȱʧ��=���˳�
				strcfgname = strtmp;
				strcfgname = strcfgname.erase(strcfgname.find("="));
				if (strcfgname == cfgName)		//�ҵ��������Ӧ���ֶκ󣬷���ֵ
				{
					returnValue = strtmp.substr(strtmp.find("=") + 1);
					return returnValue;
				}
				else continue;
			}
		}
	}
	cout << "�����ļ�����û�ҵ�" << title << "��Ӧ������" << cfgName << "��" << endl;
	_getch();
	exit(-1);
}
