#pragma once

#ifdef WIN32

	#include <d3d11.h>
	#include <Windows.h>
	#include <assert.h>
	#include <wrl.h>
	#include <DirectXMath.h>
	#include <DirectXTex/DirectXTex.h>
	#include <DirectXTex/DirectXTex.inl>

	#pragma comment(lib, "d3d11.lib")
	#pragma comment(lib, "d3dcompiler.lib")

	#ifdef _DEBUG
		#pragma comment(lib, "DirectXTex\\DirectXTex_debug.lib")
	#else
		#pragma comment(lib, "DirectXTex\\DirectXTex.ib")
	#endif

#endif


#include <string>
#include <list>
#include <vector>
#include <map>
#include <unordered_map>

#include "CoreDefinition.h"

#include "Engine/LEngine.h"

#include "Common/Logger.h"
#include "Common/Time.h"

#include "Core/PerGameSettings.h"

#ifdef WIN32

#include "Platform/Win32/Win32Utils.h"
#include "Platform/Win32/SubObject.h"
#include "Platform/Win32/w32Caption.h"
#include "Platform/Win32/Window.h"
#include "Platform/Win32/IApplication.h"

#endif
