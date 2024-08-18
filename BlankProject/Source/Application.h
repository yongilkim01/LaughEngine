#pragma once

#include "Platform/WIN32/IApplication.h"

class Application : public IApplication
{
public:
	/* Application Constructor */
	Application();

	/* Application Deconstructor */
	~Application();

public:
	/* Setup game setting*/
	VOID SetupPerGameSettings();

	/* Initialize Function */
	VOID Initialize();

	/* Game Loop Function */
	VOID Update();
};