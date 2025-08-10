//高进度计时器//微妙级
#pragma once
#include <windows.h>
class timing
{
public:
	timing(void);
	~timing(void);//析构函数

private:
	LARGE_INTEGER time_begin;

	LARGE_INTEGER time_end;

	LARGE_INTEGER CPU_frequence;

public:
	double gettime;

public:
	void start();
	void end();
};


timing::timing(void)
{
	QueryPerformanceFrequency(&CPU_frequence);
}

timing::~timing(void)
{
}

void timing::start()
{
	QueryPerformanceCounter(&time_begin);
}

void timing::end()
{
	QueryPerformanceCounter(&time_end);

	gettime = ((double)time_end.QuadPart - (double)time_begin.QuadPart) / (double)CPU_frequence.QuadPart;

}
