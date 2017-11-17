#include "../includes/logger.h"
using namespace std;

Logger::Logger(std::string filename) {
	this->filename = filename;
}

Logger::~Logger() {
}

//open close and clear the log file
void Logger::clearlogfile() {
	myFile.open(filename, std::fstream::trunc);

	//close file
	if (myFile.is_open())
		myFile.close();
}

void Logger::log(std::string data) {
	myFile.open(filename, std::fstream::app);
	if (!myFile.is_open())
		return;

	std::string myline;

	myFile << data;

	//close file
	if (myFile.is_open())
		myFile.close();
}
