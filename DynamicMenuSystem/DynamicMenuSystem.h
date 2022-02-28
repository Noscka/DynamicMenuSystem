#pragma once

#include <list>
#include <string>
#include <functional>
#include <Windows.h>
#include <iostream>

#define ARROW_UP    72
#define ARROW_DOWN  80
#define ENTER       13

class MenuEntry
{
public:
	std::string Name;
	std::function<void()> Function;

	MenuEntry(std::string name, std::function<void()> function);
};

static class DynamicMenuSystem
{
private:
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int columns, rows, counter;

public:
	int ID;

	DynamicMenuSystem();

	void CreateMenu();
};