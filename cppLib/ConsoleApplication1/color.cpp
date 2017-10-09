// color.cpp - A cool extension that is used for setting the console certain colors. Not completely
// done yet, might implement more colors as I go along. 

// include necessary headers.
#include <iostream>
#include <Windows.h>
#include <string>

// include every other header we need
#include "stdafx.h"
#include "basic.h"
#include "color.h"

// nobody likes typing out std::
using namespace std;

// all the colors, not yet done {
string ConsoleColor::Black = "0";
string ConsoleColor::DarkBlue = "1";
string ConsoleColor::DarkGreen = "2";
string ConsoleColor::Teal = "3";
string ConsoleColor::DarkRed = "4";
string ConsoleColor::Purple = "5";
string ConsoleColor::Gold = "6";
string ConsoleColor::Gray = "7";
string ConsoleColor::DarkGray = "8";
string ConsoleColor::Indigo = "9";
// all of the colors, not yet done }

// color-related voids {
void setConsoleColor(int color) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, color); // set the text attribute
}
// color-related voids }