#include "../includes/box.h"

Box::Box()
{
}

Box::~Box()
{
}

void Box::clear() {
	donuts.clear();
}

int Box::size() {
	return donuts.size();
}

bool Box::addDonut(DONUT &adonut) {
	if (donuts.size() == DOZEN)
		return false;

	donuts.push_back(adonut);
	return true;
}
