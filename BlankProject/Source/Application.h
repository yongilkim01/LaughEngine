#pragma once

#include "Engine/Simulation.h"

class Application : public LaughEngine::Simulation
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