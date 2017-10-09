// exitCode::err::errorCode.cpp: A comprehensive list of all the exitCode::error codes. Comes complete with integral STOP codes
// and strings of reason.

// ENGINE BEING REWRITTEN AS OF 10/6/17

// include necessary headers
#include <iostream>
#include <string>

// include every other header
#include "stdafx.h"
#include "errorCode.h"

// usings
using namespace std;

// exceptional constants {
int programException::success::generic = 0;
int programException::success::dirty = 1;
int programException::generic::undefined = 2;
int programException::generic::ioexception = 3;
int programException::generic::ioexception::fileNotFound = 4;
int programException::generic::ioexception::driveNotFound = 5;
int programException::generic::ioexception::directoryNotFound = 6;
int programException::generic::ioexception::endOfStream = 7;
int programException::generic::ioexception::pipeException = 8;
int programException::generic::ioexception::fileLoad = 9;
int programException::generic::ioexception::exceedsMaxLength = 10;
int programException::generic::ioexception::accessDenied = 11;
int programException::generic::ioexception::notListed = 12;
int programException::generic::overflow::genericInteger = 13;
int programException::generic::overflow::genericInteger8 = 14;
int programException::generic::overflow::genericInteger16 = 15;
int programException::generic::overflow::genericInteger32 = 16;
int programException::generic::overflow::genericInteger64 = 17;
int programException::generic::overflow::genericInteger128 = 18;
int programException::generic::overflow::internalBuffer = 19;
int programException::generic::overflow::externalBuffer = 20;
int programException::generic::overflow::stack = 21;
int programException::generic::overflow::antiDisclosure = 22;
int programException::generic::overflow::notListed = 23;
int programException::security::undefined = 24;
int programException::security::access::bypassRestrictionsAttempt = 25;
int programException::security::access::unauthorizedAccess = 26;
int programException::security::process::attemptedToEndCriticalWindowsProcess = 27;
int programException::security::process::attemptedToEndCurrentProcess = 28;
int programException::security::process::attemptedToEndProcessNotOwned = 29;
int programException::security::currentProcess::accessedFunctionIllegally = 30;
int programException::security::web::unauthorized = 31;
int programException::security::web::forbidden = 33;
int programException::security::web::methodNotAllowed = 34;
int programException::security::web::notAcceptable = 35;
int programException::security::web::paywall = 36;
int programException::security::web::proxyAuth = 37;
int programException::security::web::tooManyRequests = 38;
int programException::security::web::antiDisclosure = 39;
int programException::security::web::unlisted = 40;
int programException::security::web::brewCoffeeWithTeapot = 41;
int programException::security::web::legal = 44;
int programException::unusedPractically::completelyUndefined = 9999;
int programException::unusedPractically::isThisThingOn = 1234;
int programException::unusedPractically::luckyEscape = 7777;
int programException::unusedPractically::the_answer = 42;
int programException::unusedPractically::ctfWinner = 1010;
int programException::unusedPractically::bufferOverflow_GG_Researcher = 66;
int programException::unusedPractically::sailboat = 7.5;
// exceptional constants }
// exceptional reasons {
string programExceptionReason::success::generic = "The program completed without error. success:generic";
string programExceptionReason::success::dirty = "The program completed with a non-terminal error. success:dirty";
string programExceptionReason::generic::ioexception = "The program threw a generic ioexception. generic:ioexception";
string programExceptionReason::generic::undefined = "The program threw an undefined exception. generic:undefined";
string programExceptionReason::generic::ioexception::accessDenied = "The program threw an access denied exception. generic:ioexception:accessDenied";
string programExceptionReason::generic::ioexception::directoryNotFound = "The program could not find the directory. generic:ioexception:directoryNotFound";
string programExceptionReason::generic::ioexception::driveNotFound = "The program could not find the drive. generic:ioexception:driveNotFound";
string programExceptionReason::generic::ioexception::endOfStream = "The program reached the end of the stream. generic:ioexception:endOfStream";
string programExceptionReason::generic::ioexception::exceedsMaxLength = "The program determined that the path length was >255. generic:ioexception:exceedsMaxLength";
string programExceptionReason::generic::ioexception::fileLoad = "The program could not load the file or dll. generic:ioexception:fileLoad";
string programExceptionReason::generic::ioexception::fileNotFound = "The program could not find the file. generic:ioexception:fileNotFound";
string programExceptionReason::generic::ioexception::notListed = "The program encountered an ioexception that was unlisted. generic:ioexception:notListed";
string programExceptionReason::generic::ioexception::pipeException = "The program encountered a pipe exception. generic:ioexception:pipeException";
string programExceptionReason::generic::overflow::antiDisclosure = "The program did not want to disclose this error.";
string programExceptionReason::generic::overflow::externalBuffer = "The program encountered an external buffer overflow. generic:overflow:externalBuffer";
string programExceptionReason::generic::overflow::internalBuffer = "The program encountered an internal buffer overflow. generic:overflow:internalBuffer";
string programExceptionReason::generic::overflow::genericInteger = "The program encountered a generic integer overflow. generic:overflow:genericInteger";
string programExceptionReason::generic::overflow::genericInteger8 = "The program encountered an 8-bit integer overflow. generic:overflow:genericInteger8";
string programExceptionReason::generic::overflow::genericInteger16 = "The program encountered a 16-bit integer overflow. generic:overflow:genericInteger16";
string programExceptionReason::generic::overflow::genericInteger32 = "The program encountered a 32-bit integer overflow. generic:overflow:genericInteger32";
string programExceptionReason::generic::overflow::genericInteger64 = "The program encountered a 64-bit integer overflow. generic:overflow:genericInteger64";
string programExceptionReason::generic::overflow::genericInteger128 = "The program encountered an 128-bit integer overflow. generic:overflow:genericInteger128";
string programExceptionReason::generic::overflow::stack = "The program encountered a stack overflow. generic:overflow:stack";
string programExceptionReason::generic::overflow::notListed = "The program encountered an unknown overflow. generic:overflow:unListed";
string programExceptionReason::security::access::bypassRestrictionsAttempt = "The user tried to bypass restrictions. security:access:bypassRestrictionsAttempt";
string programExceptionReason::security::access::unauthorizedAccess = "The user is unauthorized. security:access:unauthorizedAccess";
string programExceptionReason::security::currentProcess::accessedFunctionIllegally = "The user accessed a function illegally. security:currentProcess:accessedFunctionIllegally";
string programExceptionReason::security::process::attemptedToEndCriticalWindowsProcess = "The user attempted to end a critical windows proccess. security:process:attemptedToEndCriticalWindowsProcess";
string programExceptionReason::security::process::attemptedToEndCurrentProcess = "The user attempted to end the session. security:process:attemptedToEndCurrentProcess";
string programExceptionReason::security::process::attemptedToEndProcessNotOwned = "The user attempted to end a proccess not owned by them. security:process:attemptedToEndProcessNotOwned";
string programExceptionReason::security::undefined = "The user triggered an undefined security exception. security:undefined";
string programExceptionReason::security::antiDisclosure = "The user triggered a security exception, but it shall not be disclosed.";
string programExceptionReason::security::web::antiDisclosure = "The user triggered a web security exception, but it shall not be disclosed.";
string programExceptionReason::security::web::brewCoffeeWithTeapot = "418: Attempted to brew coffee with a teapot. security:web:brewCoffeeWithTeapot";
string programExceptionReason::security::web::forbidden = "403: Forbidden. security:web:forbidden";
string programExceptionReason::security::web::legal = "459: Down for legal reasons. security:web:legal";
string programExceptionReason::security::web::methodNotAllowed = "405: Method not allowed. security:web:methodNotAllowed";
string programExceptionReason::security::web::notAcceptable = "406: Not acceptable. security:web:notAcceptable";
string programExceptionReason::security::web::paywall = "402: Paywall. security:web:paywall";
string programExceptionReason::security::web::proxyAuth = "407: Proxy Auth required. security:web:proxyAuth";
string programExceptionReason::security::web::tooManyRequests = "429: Too many requests right now. security:web:tooManyRequests";
string programExceptionReason::security::web::unauthorized = "401: Unauthorized. security:web:unauthorized";
string programExceptionReason::security::web::unlisted = "4xx: Unknown. security:web:unlisted";
string programExceptionReason::unusedPractically::sailboat = "do watchya want cuz a pirate is free, you are a pirate :)";
string programExceptionReason::unusedPractically::bufferOverflow_GG_Researcher = "sec researcher encountered a buffer overflow, gg";
string programExceptionReason::unusedPractically::completelyUndefined = "This error is completely undefined by any means. completelyUndefined";
string programExceptionReason::unusedPractically::isThisThingOn = "T e s t";
string programExceptionReason::unusedPractically::luckyEscape = "ultra luck";
string programExceptionReason::unusedPractically::the_answer = "t H e A n S w E r.";
string programExceptionReason::unusedPractically::ctfWinner = "You won CTF!";
// exceptional reasons }








