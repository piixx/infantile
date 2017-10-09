// errorCode.h - The header file for errorCode.cpp.
// ENGINE BEING REWRITTEN AS OF 10/6/17

#ifndef ERRORCODE_H // Necessary include guards.
#define ERRORCODDE_H // Necessary include guards.

// Necessary includes
#include <iostream>
#include <string>

// Every other header file we will need
#include "stdafx.h"
using namespace std;

class programException {
public:
	class success {
	public:
		static int generic;
		static int dirty;
	};
	class generic {
	public:
		static int undefined;
		static int ioexception;
		class ioexception {
		public:
			static int fileNotFound;
			static int driveNotFound;
			static int directoryNotFound;
			static int endOfStream;
			static int pipeException;
			static int fileLoad;
			static int exceedsMaxLength;
			static int accessDenied;
			static int notListed;
		};
		class overflow {
		public:
			static int genericInteger;
			static int genericInteger8;
			static int genericInteger16;
			static int genericInteger32;
			static int genericInteger64;
			static int genericInteger128;
			static int internalBuffer;
			static int externalBuffer;
			static int stack;
			static int antiDisclosure;
			static int notListed;
		};
	};
	class security {
	public:
		static int undefined;
		static int antiDisclosure;
		class access {
		public:
			static int bypassRestrictionsAttempt;
			static int unauthorizedAccess;
		};
		class process {
		public:
			static int attemptedToEndCriticalWindowsProcess;
			static int attemptedToEndCurrentProcess;
			static int attemptedToEndProcessNotOwned;
		};
		class currentProcess {
		public:
			static int accessedFunctionIllegally;
		};
		class web {
		public:
			static int unauthorized;
			static int paywall;
			static int forbidden;
			static int methodNotAllowed;
			static int notAcceptable;
			static int proxyAuth;
			static int brewCoffeeWithTeapot;
			static int legal;
			static int tooManyRequests;
			static int antiDisclosure;
			static int unlisted;
		};
	};
	class unusedPractically {
	public:
		static int completelyUndefined;
		static int isThisThingOn;
		static int luckyEscape;
		static int the_answer;
		static int ctfWinner;
		static int bufferOverflow_GG_Researcher;
		static int sailboat;
	};
};
class programExceptionReason {
public:
	class success {
	public:
		static string generic;
		static string dirty;
	};
	class generic {
	public:
		static string undefined;
		static string ioexception;
		class ioexception {
		public:
			static string fileNotFound;
			static string driveNotFound;
			static string directoryNotFound;
			static string endOfStream;
			static string pipeException;
			static string fileLoad;
			static string exceedsMaxLength;
			static string accessDenied;
			static string notListed;
		};
		class overflow {
		public:
			static string genericInteger;
			static string genericInteger8;
			static string genericInteger16;
			static string genericInteger32;
			static string genericInteger64;
			static string genericInteger128;
			static string internalBuffer;
			static string externalBuffer;
			static string stack;
			static string antiDisclosure;
			static string notListed;
		};
	};
	class security {
	public:
		static string undefined;
		static string antiDisclosure;
		class access {
		public:
			static string bypassRestrictionsAttempt;
			static string unauthorizedAccess;
		};
		class process {
		public:
			static string attemptedToEndCriticalWindowsProcess;
			static string attemptedToEndCurrentProcess;
			static string attemptedToEndProcessNotOwned;
		};
		class currentProcess {
		public:
			static string accessedFunctionIllegally;
		};
		class web {
		public:
			static string unauthorized;
			static string paywall;
			static string forbidden;
			static string methodNotAllowed;
			static string notAcceptable;
			static string proxyAuth;
			static string brewCoffeeWithTeapot;
			static string legal;
			static string tooManyRequests;
			static string antiDisclosure;
			static string unlisted;
		};
	};
	class unusedPractically {
	public:
		static string completelyUndefined;
		static string isThisThingOn;
		static string luckyEscape;
		static string the_answer;
		static string ctfWinner;
		static string bufferOverflow_GG_Researcher;
		static string sailboat;
	};
};


#endif
