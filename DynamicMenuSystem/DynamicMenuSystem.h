#pragma once

#include <list>
#include <string>
#include <functional>
#include <Windows.h>
#include <iostream>
#include <list>

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
	static CONSOLE_SCREEN_BUFFER_INFO csbi;
	static int columns, rows, counter;
	static std::list<MenuEntry> MenuEntryList;
	static bool SetUpEntries;

public:
	
	/// <summary>
	/// Create Menu once everything was set up
	/// </summary>
	static void CreateMenu(std::string Name);

	/// <summary>
	/// Add Entries to Menu
	/// </summary>
	/// <param name="size">Amount of entries being added</param>
	/// <param name="...">Entry Variable</param>
	static void AddMenuEntries(int size, MenuEntry ...);

	/// <summary>
	/// Refresh Menu when new settings are "added"
	/// </summary>
	static void RefreshMenu();
};