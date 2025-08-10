#pragma once
#include <string>
#include <vector>

using namespace std;

string getConfig(string title, string cfgName);
//void split(const string& md, vector<string>& sv, const char flag = ' ');
vector<string> split(const string &str, const string &pattern);
