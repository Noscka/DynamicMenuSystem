#include <iostream>
#include "DynamicMenuSystem.h"

int main()
{
	DynamicMenuSystem* asshat = new DynamicMenuSystem();
	DynamicMenuSystem* abc = new DynamicMenuSystem();

	abc->ID = 0;
	asshat->ID = 1;
	abc->CreateMenu();
	asshat->CreateMenu();
}
