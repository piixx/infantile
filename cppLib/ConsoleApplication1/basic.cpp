// basic.cpp - The file of basic commands. This is very useful because without this, my
// c++ career would be much harder if I had to type all of these commands out. Version info
// is standard on all of my programs, and this just makes it 100x easier.

#include "stdafx.h"

// necessary headers
#include <iostream>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <sstream>

// every other header
#include "basic.h"
#include "color.h"

using namespace std; // not sure if this'll be a problem in the future

// all of the program info voids {
string progInfo::verInfo() {
		return "v1.01, 10/2/17";
	}
int progInfo::minorVersion() {
		return 0.01; // 1.01, not returning major version
	}
int progInfo::majorVersion() {
		return 1; // 1, not returning minor version
	}
int progInfo::fullVersion() {
		return 1.01; // 1.01, returning full version
	}
string progInfo::dateUpdated() {
		return "10/2/17"; // date
	}
// all of the program info voids }

// all of the basic functions {
void basicFuncs::advIntExit(string exitReason, bool wasExpected, int exitCode) {
		bool wasntExpected = !wasExpected; // not was expected
		if (wasExpected) {
			string exitCodeString = to_string(exitCode); // convert the exit code to a string
			if (exitCode == -404) { exitCodeString = "UNDEFINED\n"; }
			setConsoleColor(10);
			clear();
			cout << "An expected shutdown was initiated by the program.\n";
			cout << "Reasoning: " + exitReason + "\n"; // state the exit reason
			cout << "Exit Code: " + exitCodeString + "\n"; // state the exit code
			for (int x = 5; x >= 0; x--) {
				cout << "\r"; // go to beginning
				cout << "  "; // erase line
				cout << "\r" + to_string(x); // go to beginning again and print timer
				sleep(1000);
			}
		}
		else if (wasntExpected) {
			string exitCodeString = to_string(exitCode);
			if (exitCode == -404) { exitCodeString = "UNDEFINED"; }
			setConsoleColor(10);
			clear();
			cout << "An unexpected shutdown was initiated by the program.\n";
			cout << "Reasoning: " + exitReason + "\n";
			cout << "Exit Code: " + exitCodeString + "\n";
			cout << "Since this shutdown was unexpected, "
				<< "we'll give you 10 seconds to take down this information.\n";
			for (int x = 10; x >= 0; x--) {
				cout << "\r"; // go to beginning
		        cout << "  "; // erase line
				cout << "\r" + to_string(x); // go to beginning again and print timer
				sleep(1000);
			}
		}
		exit(exitCode);
	}
void basicFuncs::sleep(int milliseconds) {
		this_thread::sleep_for(chrono::milliseconds(milliseconds));
	}
int basicFuncs::StringToInt(string toConvert) {
	stringstream stream(toConvert);
	int toReturn = 0;
	stream >> toReturn;
	return toReturn;
}
void basicFuncs::clear() {
	system("CLS");
	cout << flush;
	system("CLS");
}
// all of the basic functions }

