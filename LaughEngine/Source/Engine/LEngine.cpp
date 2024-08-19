#include "LaughEngine.h"

namespace Engine
{
	LEngine g_LaughEngine;

	VOID SetMode(EngineMode mode)
	{
		g_LaughEngine.SetEngineMode(mode);
	}

	EngineMode GetMode()
	{
		return g_LaughEngine.GetEngineMode();
	}

	std::wstring LAUGH_API EngineModeToString()
	{
		switch (Engine::GetMode())
		{
		case EngineMode::DEBUG:		return L"Debug";
		case EngineMode::RELEASE:	return L"Release";
		case EngineMode::SERVER:	return L"Server";
		case EngineMode::EDITOR:	return L"Editor";
		default:					return L"None";
		}
	}
}

LEngine::LEngine()
{
#ifdef _DEBUG
	m_EngineMode = Engine::EngineMode::DEBUG;
#else
	m_EngineMode = Engine::EngineMode::RELEASE;
#endif
}

LEngine::~LEngine()
{

}

Engine::EngineMode LEngine::GetEngineMode()
{
	return m_EngineMode;
}

VOID LEngine::SetEngineMode(Engine::EngineMode mode)
{
	m_EngineMode = mode;
}