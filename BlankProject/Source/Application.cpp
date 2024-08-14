#include "pch.h"
#include "Application.h"
#include "Platform/WIN32/WinEntry.h"

ENTRYAPP(Application)

Application::Application()
{
}

Application::~Application()
{
}

VOID Application::Initialize()
{
	MessageBox(0, L" Initialize application ", 0, 0);
}

VOID Application::Update()
{
	MessageBox(0, L" Update game loop ", 0, 0);
}
