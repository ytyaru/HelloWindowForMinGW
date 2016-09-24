#include <windows.h>
#include <tchar.h>
int WINAPI WinMain(HINSTANCE hCurInst, HINSTANCE hPrevInst, LPSTR lpsCmdLine, int nCmdShow)
{
	MessageBox(
		NULL,
		_T("Hello Windows API !!"),
		_T("Hello Windows API !!"),
		MB_OK
	);
	return 0;
}
