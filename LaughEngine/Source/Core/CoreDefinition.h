#pragma once

#ifdef BUILD_DLL
	#define LAUGH_API __declspec(dllexport)
#else
	#define LAUGH_API __declspec(dllimport)
#endif

#define MAX_NAME_STRING 256
#define HInstance() GetModuleHandle(NULL)

typedef std::wstring WSTRING;
typedef std::string  STRING;

using int8 = __int8;
using int16 = __int16;
using int32 = __int32;
using int64 = __int64;
using uint8 = unsigned __int8;
using uint16 = unsigned __int16;
using uint32 = unsigned __int32;
using uint64 = unsigned __int64;

using Vector2 = DirectX::XMFLOAT2;
using Vector3 = DirectX::XMFLOAT3;
using Vector4 = DirectX::XMFLOAT4;
using Color = DirectX::XMFLOAT4;