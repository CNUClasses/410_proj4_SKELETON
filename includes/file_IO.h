#pragma once
#include <string>
#include <vector>
#include <vector>
#include "stdlib.h"
#include "constants.h"
#include "datastructs.h"

class File_IO
{
private:
	//holds all the data read
	std::vector<ORDER> myOrders;

	//pulls in line from file, splits it into order number 
	//and number of donuts
	int processData(std::ifstream &file);
	std::string filename;
	bool is_initialized;

	//allthe functions available for use
	//attempt to open file 'filename' to read, parse its rows 
	//into ORDER structs and add these structs to a vector 
	//sort by order_number
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int loadData();
public:
	File_IO(std::string filename = DEFAULT_ORDER_IN_FILE);
	virtual ~File_IO();

	//return:
	//SUCCESS first struct in the vector is in anOrder
	//otherwise a failure code
	int getNext(ORDER &anOrder);
};

