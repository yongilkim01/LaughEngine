#pragma once

/*
	1. It gives us a specific place to store variables, for example if we wanted to save ths boot time, we could do that in the LEngine
	2. It gives us a specific way to access our classes. We can create classes that are static which means you can only create one of them, which means they can be accessed from anywhere
*/

class LAUGH_API LEngine;

namespace Engine 
{
	enum EngineMode : INT
	{
		NONE,
		DEBUG,
		RELEASE,
		EDITOR,
		SERVER
	};
	
	extern LEngine g_LaughEngine;

	VOID LAUGH_API SetMode(EngineMode mode);
	EngineMode LAUGH_API GetMode();

	std::wstring LAUGH_API EngineModeToString();
}

class LAUGH_API LEngine
{
public:
	LEngine();
	~LEngine();

	Engine::EngineMode GetEngineMode();
	VOID SetEngineMode(Engine::EngineMode mode);

private:
	Engine::EngineMode m_EngineMode;
};