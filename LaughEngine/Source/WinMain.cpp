//#include <Windows.h>
//
//LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
//{
//	switch (msg)
//	{
//	case WM_CLOSE:
//		PostQuitMessage(69);
//		break;
//	}
//	return DefWindowProc(hWnd, msg, wParam, lParam);
//}
//
//int CALLBACK WinMain(
//	HINSTANCE hInstance,
//	HINSTANCE hPrevInstance,
//	LPSTR ldCmdLine,
//	int nCmdShow)
//{
//	// 윈도우 클래스 이름 정의
//	const auto pClassName = L"LaughEngine";
//
//	// 윈도우 클래스 등록
//	WNDCLASSEX wc = { 0 }; // 구조체 초기화
//
//	// 구조체의 크기를 설정
//	wc.cbSize = sizeof(wc);
//	
//	// 등록할 윈도우 클래스의 스타일을 특정 Device context를 소유하게 설정  
//	wc.style = CS_OWNDC; 
//
//	// 윈도우 프로시저 함수 포인터 설정
//	wc.lpfnWndProc = WndProc;
//
//	// 클래스별 추가 메모리를 0으로 설정
//	wc.cbClsExtra = 0;
//	// 윈도우별 추가 메모리를 0으로 설정
//	wc.cbWndExtra = 0;
//
//	// 애플리케이션의 인스터스 핸들을 WinMain에 전달된 hInstance로 설정
//	wc.hInstance = hInstance;
//
//	// 윈도우 클래스의 리소스를 설정
//	wc.hIcon = nullptr;
//	wc.hCursor = nullptr;
//	wc.hbrBackground = nullptr;
//	wc.lpszMenuName = nullptr;
//	wc.hIconSm = nullptr;
//
//	// 윈도우 클래스의 이름을 설정
//	wc.lpszClassName = pClassName;
//
//	// 윈도우 클래스를 해당 구조체에 있는 정보로 등록
//	RegisterClassEx(&wc);
//
//	// 윈도우 인스턴스 생성
//	HWND hWnd = CreateWindowEx(
//		0, pClassName,
//		L"My game",
//		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
//		200, 200, 640, 480,
//		nullptr,
//		nullptr,
//		hInstance,
//		nullptr );
//
//	ShowWindow(hWnd, SW_SHOW);
//
//	// 메세지 루프
//	MSG msg;
//	BOOL gResult;
//	while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0)
//	{
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//
//	if (gResult == -1)
//	{
//
//	}
//	else
//	{
//		return msg.wParam;
//	}
//}