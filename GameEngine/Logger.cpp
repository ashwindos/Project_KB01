#include "StdAfx.h"
#include "Logger.h"
#include <string>
#include <fstream>

using namespace std;

Logger::Logger(void)
{
}


Logger::~Logger(void)
{
}

/// <summary>
/// Appends a string to log.txt
/// </summary>
/// <param name="text">The text to log.</param>
void Logger::Log(string text)
{
	ofstream outfile;
	outfile.open("log.txt", ios_base::app);
	outfile << "\n";
	outfile << text;
}