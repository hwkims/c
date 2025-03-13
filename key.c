#include <windows.h>
#include <commdlg.h>
#include <stdio.h>

#define ID_UPLOAD_BUTTON 1
#define ID_QUIT_BUTTON 2

// 소리 재생 함수
void playSound(const char* soundFile) {
    PlaySound(soundFile, NULL, SND_FILENAME | SND_ASYNC);
}

// 파일 열기 대화상자 함수
void openFileDialog(HWND hwnd, char* filePath) {
    OPENFILENAME ofn;
    ZeroMemory(&ofn, sizeof(ofn));
    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = hwnd;
    ofn.lpstrFile = filePath;
    ofn.lpstrFile[0] = '\0';
    ofn.nMaxFile = MAX_PATH;
    ofn.lpstrFilter = "WAV Files\0*.WAV\0";
    ofn.nFilterIndex = 1;
    ofn.lpstrFileTitle = NULL;
    ofn.nMaxFileTitle = 0;
    ofn.lpstrInitialDir = NULL;
    ofn.lpstrTitle = "소리 파일 선택";
    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

    GetOpenFileName(&ofn);
}

// 윈도우 프로시저
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static char soundFile[MAX_PATH] = "";

    switch (uMsg) {
    case WM_CREATE: {
        CreateWindow("BUTTON", "소리 업로드", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
            50, 50, 150, 30, hwnd, (HMENU)ID_UPLOAD_BUTTON, (HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);

        CreateWindow("BUTTON", "종료", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
            50, 100, 150, 30, hwnd, (HMENU)ID_QUIT_BUTTON, (HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
        break;
    }
    case WM_COMMAND:
        if (LOWORD(wParam) == ID_UPLOAD_BUTTON) {
            openFileDialog(hwnd, soundFile);
            if (soundFile[0] != '\0') {
                MessageBox(hwnd, soundFile, "선택한 파일", MB_OK);
            }
        }
        else if (LOWORD(wParam) == ID_QUIT_BUTTON) {
            PostQuitMessage(0);
        }
        break;
    case WM_KEYDOWN:
        if (soundFile[0] != '\0') {
            playSound(soundFile);  // 키가 눌리면 소리 재생
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int main() {
    const char CLASS_NAME[] = "KeyboardSoundApp";

    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(0, CLASS_NAME, "키보드 입력 소리 프로그램", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 250, 200, NULL, NULL, wc.hInstance, NULL);

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
