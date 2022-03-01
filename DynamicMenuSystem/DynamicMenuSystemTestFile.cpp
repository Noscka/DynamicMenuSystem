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
	DynamicMenuSystem::AddMenuEntries(4, MenuEntry("Entry 1", blank), MenuEntry("Entry 2 Eletric boogalu", blank), MenuEntry("Settings?", blank), MenuEntry("Nothing", blank));
	DynamicMenuSystem::CreateMenu("Test Project Menu", true);

	return 0;
}
