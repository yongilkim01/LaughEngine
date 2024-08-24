#include "BlankProject.h"
#include "Engine/Simulation.h"
#include "Platform\Win32\WinEntry.h"

class BlankProject : public LaughEngine::Simulation
{
public:
	/* BlankProject Constructor */
	BlankProject();

	/* BlankProject Deconstructor */
	~BlankProject();

public:
	/* Setup game setting*/
	VOID SetupPerGameSettings();

	/* Initialize Function */
	VOID Initialize();

	/* Game Loop Function */
	VOID Update();
};

ENTRYAPP(BlankProject)

BlankProject::BlankProject()
{
}

BlankProject::~BlankProject()
{
}

VOID BlankProject::SetupPerGameSettings()
{
	/* Set the Per Game Settings */
	PerGameSettings::SetGameName(IDS_PERGAMENAME);
	PerGameSettings::SetShortName(IDS_SHORTNAME);
	PerGameSettings::SetMainIcon(IDI_MAINICON);
}

VOID BlankProject::Initialize()
{
	//Logger::PrintLog(L"I have Loaded Up");
}

VOID BlankProject::Update()
{
	//MessageBox(0, L" Update game loop ", 0, 0);
}
