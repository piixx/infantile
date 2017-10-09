// color.h - Headers for color.cpp

// include guards
#ifndef COLOR_H
#define COLOR_H

// necessary includes
#include <string>
#include <Windows.h>

using namespace std;

class ConsoleColor {
public:
	static string Black;
	static string DarkBlue;
	static string DarkGreen;
	static string Teal;
	static string DarkRed;
	static string Purple;
	static string Gold;
	static string Gray;
	static string DarkGray;
	static string Indigo;
};

void setConsoleColor(int color);

#endif COLOR_H

