// GameEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Logger.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Logger* l = new Logger();
	l->Log("invoer");
	return 0;
}

