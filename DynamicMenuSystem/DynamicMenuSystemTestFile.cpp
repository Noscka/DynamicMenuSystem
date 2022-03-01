#include <iostream>
#include "DynamicMenuSystem.h"


void blank()
{
	printf("Example Function\n");
	std::string input;
	printf("So this is it, not much. Input something: ");
	std::getline(std::cin, input);
	std::cout << "Imagine writing " << input << " haha\n";
}

//MenuEntry MenuEntries,
int main()
{
	DynamicMenuSystem::AddMenuEntries(4, MenuEntry("Entry 1", blank),					// First you have to add Some entries
										 MenuEntry("Entry 2 Eletric boogalu", blank),	// using the "MenuEntry" object
										 MenuEntry("Settings?", blank),					// with both a entry name and entry function
										 MenuEntry("Nothing", blank));					// which will be ran when entry is selected

	DynamicMenuSystem::CreateMenu("Test Project Menu", true);							// Then run the "CreateMenu" function to use the entries
																						// and create a sorta of nice looking menu

	return 0;
}
