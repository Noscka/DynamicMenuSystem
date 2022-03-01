#include <iostream>
#include "DynamicMenuSystem.h"


void blank()
{

}

//MenuEntry MenuEntries,
int main()
{
	DynamicMenuSystem::CreateMenu("cunt");
	DynamicMenuSystem::AddMenuEntries(4, MenuEntry("a", blank), MenuEntry("b", blank), MenuEntry("c", blank), MenuEntry("d", blank));
	DynamicMenuSystem::RefreshMenu();
}
