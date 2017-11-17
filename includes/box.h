#pragma once
#include <vector>
#include "constants.h"

//holds up to 12 donuts (no more)
class Box
{
private:
	//holds the donuts
	std::vector<DONUT> donuts;
public:
	Box();
	virtual ~Box();

	//clear it out 
	void clear();
	
	//how many in the box
	int size();

	//returns true if there is space in box and donut was added
	//otherwise false (cant fit more than DOZEN)
	bool addDonut(DONUT &adonut);
};

