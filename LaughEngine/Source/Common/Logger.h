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

	/* Print a line of '-' char's */
	static VOID PrintDebugSeperator();

	/* Check to see if MTail is already Running */
	static BOOL IsMTailRunning();

	/* Start MTail Application */
	static VOID StartMTail();

private:
	static Logger* instance;
};