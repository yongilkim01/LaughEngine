#pragma once
#include <string>

class LAUGH_API Logger
{
public:
	static Logger* Instance() { return instance; }
	
	Logger();
	~Logger();
	
	/* Print to log file */
	static VOID PrintLog(const WCHAR* fmt, ...);
	static std::wstring LogDirectory();
	static std::wstring LogFile();

private:
	static Logger* instance;
};