#include "stdafx.h"

#include "building.h"


Building::Building()
{
}

Building::Building(int min_x, int min_x_y, int min_y, int min_y_x, int min_z, int max_x, int max_x_y, int max_y, int max_y_x, int max_z)
{
	this->min_x = min_x;
	this->min_x_y = min_x_y;
	this->min_y = min_y;
	this->min_y_x = min_y_x;
	this->min_z = min_z;
	this->max_x = max_x;
	this->max_x_y = max_x_y;
	this->max_y = max_y;
	this->max_y_x = max_y_x;
	this->max_z = max_z;
}

void Building::print()
{
	const char *str = "Building min_x: %d, min_x_y: %d, max_x: %d, max_x_y: %d, min_y: %d, min_y_x: %d, max_y: %d, max_y_x: %d, min_z: %d, max_z: %d\n\n";

	printf(str, min_x, min_x_y, max_x, max_x_y, min_y, min_y_x, max_y, max_y_x, min_z, max_z);
}
