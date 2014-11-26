// GameEngine.cpp : Defines the entry point for the console application.
//
#include "Logger.h"

int main()
{
	Logger* l = new Logger();
	std::string c = "sdfsdf";
	float a = 1.33;
	int b = 2;
	l->Log(a);
	l->Log(b);
	l->Log(c);
	return 0;
}