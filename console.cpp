#include <windows.h>
#include <iostream>
#include "lazy.h"
#include "enc.h"
#include "stuff.h"
#include <stdio.h>
#include <filesystem>
#include <fstream>
#include <chrono>



void HideConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}
void ShowConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_SHOW);
}

int main()
{
	SetConsoleTitleA(E(".gg/DTC | We <3 You"));
	DTCSYS(system)(E("color 8"));
	slow_print("You Are Getting Serials Temporarily Changed!", 30);
	slow_print("\n Leave A Vouch <3", 30);
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	HideConsole();
	Woof::temp();
	system("cls");
	ShowConsole();
	slow_print("\n\n\n You Serials Are Changed | Restarting, Shutdown, Or Sleeping Will Undo!\n\n  ", 45);
	DTCSYS(system)(E("pause >nul"));

}