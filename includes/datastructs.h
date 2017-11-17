#pragma once
#include <queue>
#include "constants.h"
#include "box.h"

//this is where the loaded data goes
struct ORDER {
	std::vector<Box> boxes;
	int order_number = UNINITIALIZED;
	int number_donuts = UNINITIALIZED;
};

