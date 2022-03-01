#include <iostream>
#include "DynamicMenuSystem.h"


void blank()
{
	printf("BlankRan\n");
}

//MenuEntry MenuEntries,
int main()
{
	DynamicMenuSystem::AddMenuEntries(4, MenuEntry("a", blank), MenuEntry("b", blank), MenuEntry("c", blank), MenuEntry("d", blank));
	//DynamicMenuSystem::RefreshMenu();
	DynamicMenuSystem::CreateMenu("Test Project Menu");
}
