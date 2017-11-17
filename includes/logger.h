#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <mutex>
#include "../includes/constants.h"

class Logger
{
private:
	std::string filename;
	std::ofstream myFile;
	std::mutex m;

public:
	Logger(std::string filename = DEFAULT_LOG_FILE);
	virtual ~Logger();

	//delete the contents of the log file
	void clearlogfile();

	//open, append data to logfile, then close
	void log(std::string data);
};


