#pragma once

#include "Platform/Win32/IApplication.h"

namespace LaughEngine {
	class LAUGH_API Simulation : public Win32::IApplication
	{
	public:
		Simulation();
		~Simulation();
	};
}