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
//	// ������ Ŭ���� �̸� ����
//	const auto pClassName = L"LaughEngine";
//
//	// ������ Ŭ���� ���
//	WNDCLASSEX wc = { 0 }; // ����ü �ʱ�ȭ
//
//	// ����ü�� ũ�⸦ ����
//	wc.cbSize = sizeof(wc);
//	
//	// ����� ������ Ŭ������ ��Ÿ���� Ư�� Device context�� �����ϰ� ����  
//	wc.style = CS_OWNDC; 
//
//	// ������ ���ν��� �Լ� ������ ����
//	wc.lpfnWndProc = WndProc;
//
//	// Ŭ������ �߰� �޸𸮸� 0���� ����
//	wc.cbClsExtra = 0;
//	// �����캰 �߰� �޸𸮸� 0���� ����
//	wc.cbWndExtra = 0;
//
//	// ���ø����̼��� �ν��ͽ� �ڵ��� WinMain�� ���޵� hInstance�� ����
//	wc.hInstance = hInstance;
//
//	// ������ Ŭ������ ���ҽ��� ����
//	wc.hIcon = nullptr;
//	wc.hCursor = nullptr;
//	wc.hbrBackground = nullptr;
//	wc.lpszMenuName = nullptr;
//	wc.hIconSm = nullptr;
//
//	// ������ Ŭ������ �̸��� ����
//	wc.lpszClassName = pClassName;
//
//	// ������ Ŭ������ �ش� ����ü�� �ִ� ������ ���
//	RegisterClassEx(&wc);
//
//	// ������ �ν��Ͻ� ����
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
//	// �޼��� ����
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