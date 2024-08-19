#pragma once
#include "Platform/Win32/Window.h"

namespace SplashScreen
{
	VOID LAUGH_API Open();
	VOID LAUGH_API Close();
	VOID LAUGH_API AddMessage(CONST WCHAR* message);
}

class LAUGH_API SplashWindow : public Win32::Window
{
public:
	SplashWindow();
	~SplashWindow();

	virtual			LRESULT				MessageHandler(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) override;

private:
	WCHAR m_outputMessage[MAX_NAME_STRING];
};