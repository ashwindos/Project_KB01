#include "StdAfx.h"
#include "Logger.h"
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <ctime>

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
	std::time_t t =  std::time(NULL);
    std::tm tm    = *std::localtime(&t);
	outfile << '[' << put_time(&tm, "%c") << "] " << text << endl;
}