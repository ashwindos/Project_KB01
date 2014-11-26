#include <string>

class Logger
{
public:
	Logger(void);
	~Logger(void);

	/// <summary>
	/// Appends a string to log.txt, includes the time of the log.
	/// </summary>
	void Log(std::string);
	/// <summary>
	/// Appends an int to log.txt, includes the time of the log.
	/// </summary>
	void Log(int);
	/// <summary>
	/// Appends a float to log.txt, includes the time of the log.
	/// </summary>
	void Log(float);
};