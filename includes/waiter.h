#pragma once
#include <string>

#include "constants.h"
#include "datastructs.h"
#include "file_IO.h"

class Waiter
{
private:
	int id;
	File_IO myIO;

public:
	//ID is just a number used to identify this particular baker 
	//(used with PRINT statements)
	//filename is what waiter reads in orders from
	Waiter(int id, std::string filename = DEFAULT_ORDER_IN_FILE);
	virtual ~Waiter();

	//gets next Order from file_IO
	//if return == SUCCESS then anOrder
	//contains new order
	//otherwise return contains error 
	int getNext(ORDER &anOrder);

	//contains a loop that will get orders from filename one at a time 
	//then puts them in order_in_Q then signals baker(s) using cv_order_inQ 
	//so they can be consumed by baker(s) 
	//when finished exits loop and signals baker(s) using cv_order_inQ that 
	//it is done using b_WaiterIsFinished
	void beWaiter();
};
