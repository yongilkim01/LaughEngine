#pragma once

class LAUGH_API PerGameSettings 
{
public:
	PerGameSettings();
	~PerGameSettings();

	static WCHAR* GameName() { return instance->m_GameName; }
	static VOID SetGameName(UINT id) { LoadString(HInstance(), id, instance->m_GameName, MAX_NAME_STRING); }

	static WCHAR* ShortName() { return instance->m_ShortName; }
	static VOID SetShortName(UINT id) { LoadString(HInstance(), id, instance->m_ShortName, MAX_NAME_STRING); }

	static HICON MainIcon() { return instance->m_MainIcon; }
	static VOID SetMainIcon(UINT id) { LoadIcon(HInstance(), MAKEINTRESOURCE(id)); }

	static WCHAR* BootTime() { return instance->m_BootTime; }

private:
	/* Singleton instance */
	static PerGameSettings* instance;
	static PerGameSettings* Instance() { return instance; }

	/* Per Game Private Variables */
	WCHAR m_GameName[MAX_NAME_STRING];
	WCHAR m_ShortName[MAX_NAME_STRING];
	HICON m_MainIcon;
	WCHAR m_BootTime[MAX_NAME_STRING];
};