#pragma once
#include <unordered_map>
#include <Windows.h>

class MessageMap
{
public:
	MessageMap();
	std::string operator() (DWORD msg, WPARAM wParam, LPARAM lParam) const;

private:
	std::unordered_map<DWORD, std::string> map_;
};