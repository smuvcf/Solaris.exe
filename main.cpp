#include <windows.h>
#define BBBBBBBBBBBBBBBBB BitBlt
#define ADASDASDASDASDASD GetSystemMetrics
static ULONGLONG r, n;
int randy() { return n = r, n ^= 0x8ebf635bee3c6d25, n ^= n << 5 | n >> 26, n *= 0xf3e05ca5c43e376b, r = n, n & 0x7fffffff;}

DWORD WINAPI helly1(LPVOID lpParam)
{
	HDC DES = GetDC(0);
	int w = ADASDASDASDASDASD(0), h = ADASDASDASDASDASD(1);
	for (int i = 0;;i++) {
		int(a) = randy() % w, b = randy() % h;
		BBBBBBBBBBBBBBBBB(DES, a, b, 200, 200, DES, a + randy() % 21 - 10, b + randy() % 21 - 10, !(randy() & 3) ? 0xEE0086 : 0xCC0020);
	}
}

DWORD WINAPI helly3(LPVOID lpParam)
{
	HDC DES = GetDC(0);
	int w = ADASDASDASDASDASD(0), h = ADASDASDASDASDASD(1);
	for (int i = 0;;i++) {
		int(a) = randy() % w, b = randy() % h;
		BBBBBBBBBBBBBBBBB(DES, a, b, 500, 500, DES, a + randy() % 51 - 20, b + randy() % 51 - 20, !(randy() & 6) ? 0xEE0196 : 0xCC0320);
	}
}

DWORD WINAPI helly2(LPVOID lpParam)
{
	int tymez = GetTickCount();
	int w = ADASDASDASDASDASD(0), h = ADASDASDASDASDASD(1);
	RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0,
		(w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE,
		PAGE_READWRITE);
	for (int i = 0;; i++, i %= 3) {
		if (!1)RedrawWindow(0, 0, 0, 133);
		HDC dick = GetDC(0), dickMem = CreateCompatibleDC(dick);HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
		SelectObject(dickMem, hbm);
		BBBBBBBBBBBBBBBBB(dickMem, 0, 0, w, h, dick, 0, 0, 0x330008);GetBitmapBits(hbm, w * h * 4, data);
		int v = 0;
		BYTE dfasdf = 0;
		if ((GetTickCount() - tymez) > 60000)
			dfasdf = randy() & 0xff;
		for (int i = 0; /* */ w * h > i; i++) {
			if (i % h == 0 && randy() % 100 == 0)
				v = randy() % 50;
			((BYTE*)(data + i))[v % 3] += ((
				BYTE*)(data + i + v))[v] ^
				dfasdf;
		}
		SetBitmapBits(hbm, w * h * 4, data); BBBBBBBBBBBBBBBBB(dick, randy() % 3 - 1, randy() % 3 - 1, w, h, dickMem, 0, 0, 0xCC0020);
		DeleteObject(hbm);DeleteObject(dickMem);
		DeleteObject(dick);
	}
}

DWORD WINAPI helly4(LPVOID lpParam)
{
	int tymez = GetTickCount();
	int w = ADASDASDASDASDASD(0), h = ADASDASDASDASDASD(1);
	RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0,
		(w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE,
		PAGE_READWRITE);
	for (int i = 0;; i++, i %= 4) {
		if (!1)RedrawWindow(0, 0, 0, 420);
		HDC dick = GetDC(0), dickMem = CreateCompatibleDC(dick);HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
		SelectObject(dickMem, hbm);
		BBBBBBBBBBBBBBBBB(dickMem, 0, 0, w, h, dick, 0, 0, 0x3300420);GetBitmapBits(hbm, w * h * 4, data);
		int v = 0;
		BYTE dfasdf = 0;
		if ((GetTickCount() - tymez) > 60000)
			dfasdf = randy() & 0xff;
		for (int i = 0; /* */ w * h > i; i++) {
			if (i % h == 0 && randy() % 100 == 0)
				v = randy() % 50;
			((BYTE*)(data + i))[v % 3] += ((
				BYTE*)(data + i + v))[v] ^
				dfasdf;
		}
		SetBitmapBits(hbm, w * h * 4, data); BBBBBBBBBBBBBBBBB(dick, randy() % 4 - 2, randy() % 4 - 2, w, h, dickMem, 0, 0, 0xCC0420);
		DeleteObject(hbm);DeleteObject(dickMem);
		DeleteObject(dick);
	}
}

DWORD WINAPI helly5(LPVOID lpParam)
{
	int tymez = GetTickCount();
	int w = ADASDASDASDASDASD(0), h = ADASDASDASDASDASD(1);
	RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0,
		(w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE,
		PAGE_READWRITE);
	for (int i = 0;; i++, i %= 4) {
		if (!1)RedrawWindow(0, 0, 0, 810);
		HDC dick = GetDC(0), dickMem = CreateCompatibleDC(dick);HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
		SelectObject(dickMem, hbm);
		BBBBBBBBBBBBBBBBB(dickMem, 0, 0, w, h, dick, 0, 0, 0x3300420);GetBitmapBits(hbm, w * h * 4, data);
		int v = 0;
		BYTE dfasdf = 0;
		if ((GetTickCount() - tymez) > 80000)
			dfasdf = randy() & 0xff;
		for (int i = 0; /* */ w * h > i; i++) {
			if (i % h == 0 && randy() % 100 == 0)
				v = randy() % 50;
			((BYTE*)(data + i))[v % 3] += ((
				BYTE*)(data + i + v))[v] ^
				dfasdf;
		}
		SetBitmapBits(hbm, w * h * 8, data); BBBBBBBBBBBBBBBBB(dick, randy() % 8 - 4, randy() % 8 - 1, w, h, dickMem, 0, 0, 0xCC0810);
		DeleteObject(hbm);DeleteObject(dickMem);
		DeleteObject(dick);
	}
}

int main(HINSTANCE(a), HINSTANCE(b), LPSTR(c), int(d))
{
		CreateThread(0, 0, helly1, 0, 0, 0);
		CreateThread(0, 0, helly2, 0, 0, 0);
		CreateThread(0, 0, helly3, 0, 0, 0);
		CreateThread(0, 0, helly4, 0, 0, 0);
		CreateThread(0, 0, helly5, 0, 0, 0);
		Sleep(-1);
}
