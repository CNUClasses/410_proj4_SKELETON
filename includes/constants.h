#pragma once
#include <iostream>

//default files
const std::string	DEFAULT_ORDER_IN_FILE = "orders_in.txt";

const std::string	DEFAULT_LOG_FILE = "Log.txt";
const std::string	TEST_LOG_FILE = "test_log.txt";
const std::string	TEST_BOGUS_LOG_FILE = "test_bogus_log.txt";
const std::string	TEST_BOGUS_FILEIO_FILE = "test_orders_in_BOGUS.txt";
const std::string	TEST_ORDER_IN_FILE = "test_orders_in.txt";
//how many times a log test string is written to the logfile
const int MAX_TEST = 100;
const int DOZEN = 12;

//SUCCESS CODES
const int 			SUCCESS = 0;

//used when reading orders from a file
const char			CHAR_TO_SEARCH_FOR = ',';

//FAILURE CODES
const int 			FAIL = SUCCESS - 1;
const int 			COULD_NOT_OPEN_FILE = SUCCESS - 3;
const int			UNINITIALIZED = SUCCESS - 5;
const int			NO_ORDERS = SUCCESS - 7;


//I have 3 types of donut but for now only use GLAZED
//It adds a lot of complexity to have mixed types
enum type { GLAZED, SPRINKLED, CAKE };
struct DONUT {
	type myType = type::GLAZED;
};

