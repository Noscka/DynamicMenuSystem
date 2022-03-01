#include "DynamicMenuSystem.h"
#include "AsciiTextGenerator.h"
#include <cstdarg>

MenuEntry::MenuEntry(std::string name, std::function<void()> function)
{
	Name = name;
	Function = function;
}

// Define Variables to not throw "unresolved External Symbol"
#pragma region Variables
CONSOLE_SCREEN_BUFFER_INFO DynamicMenuSystem::csbi;
int DynamicMenuSystem::columns, DynamicMenuSystem::rows, DynamicMenuSystem::counter;
std::list<MenuEntry> DynamicMenuSystem::MenuEntryList = {
	MenuEntry("Single Game", DynamicMenuSystem::RefreshMenu),
	MenuEntry("Multi Games", DynamicMenuSystem::RefreshMenu),
	MenuEntry("Exit", DynamicMenuSystem::RefreshMenu)
};;
#pragma endregion

void DynamicMenuSystem::CreateMenu(std::string name)
{
	std::cout << AsciiTextGenerator::AsciiWrite(name);

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}


void DynamicMenuSystem::AddMenuEntries(int size, MenuEntry ...)
{
	va_list ArgList;
	va_start(ArgList, size);

	for(int i = 0; i < size; i++)
	{
		MenuEntryList.push_back(va_arg(ArgList, MenuEntry));
	}

	va_end(ArgList);
}

void DynamicMenuSystem::RefreshMenu()
{
	//DynamicMenuSystem::CreateMenu();

	std::string EntryString;

	for(MenuEntry Entry : DynamicMenuSystem::MenuEntryList)
	{
		// Append to string as to make it be 1 print operation, makes it way quicker
		/*if(counter == CurrentIndex)
		{
			EntryString += std::string((columns / 2) - (1 + Entry.Name.length()) / 2, ' ') + ">" + Entry.Name + "<\n";
		}
		else
		{*/
			EntryString += std::string((columns / 2) - Entry.Name.length() / 2, ' ') + Entry.Name + "\n";
		/* }
		counter++;*/
	}

	printf(EntryString.c_str());
	
}
