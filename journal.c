#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    
    // Journal's application URI
    const wchar_t *appUri = L"shell:AppsFolder\\Microsoft.MicrosoftJournal_8wekyb3d8bbwe!App";
    
    // Launch via ShellExecuteW
    HINSTANCE result = ShellExecuteW(NULL, L"open", appUri, NULL, NULL, SW_SHOWNORMAL);
    
    // Check for errors
    if ((INT_PTR)result <= 32) {
        MessageBoxW(NULL, L"Cannot launch Journal.", L"Error", MB_OK | MB_ICONERROR);
        return 1;
    }
    
    return 0;
}