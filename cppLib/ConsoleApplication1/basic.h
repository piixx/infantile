// basic.h - Header file for basic.cpp, the lead of my C++ career.

// include guards
#ifndef BASIC_H
#define BASIC_H

// necessary headers
#include <string>

class progInfo {
public:
	static std::string verInfo();
	static int minorVersion();
	static int majorVersion();
	static int fullVersion();
	static std::string dateUpdated();
};
class basicFuncs {
public:
	static void advIntExit(std::string exitReason, bool wasExpected = true, int exitCode = -404);
	static void sleep(int milliseconds);
	static int StringToInt(std::string toConvert);
	static void clear();
};

#endif