#include "DynamicMenuSystem.h"


MenuEntry::MenuEntry(std::string name, std::function<void()> function)
{
	Name = name;
	Function = function;
}

DynamicMenuSystem::DynamicMenuSystem()
{
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

	std::cout << std::string((columns / 2) - 4 / 2, ' ') + "cunt" + "\n";
}

void DynamicMenuSystem::CreateMenu()
{
	std::cout << ID;
}
