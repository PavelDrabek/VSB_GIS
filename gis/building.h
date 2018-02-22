#ifndef __BUILDING_H__
#define __BUILDING_H__

class Building
{
public:
	int min_x;
	int min_x_y;
	int min_y;
	int min_y_x;
	int min_z;
	int max_x;
	int max_x_y;
	int max_y;
	int max_y_x;
	int max_z;

public:
	Building();
	Building(int min_x, int min_x_y, int min_y, int min_y_x, int min_z, int max_x, int max_x_y, int max_y, int max_y_x, int max_z);

	void print();
};

#endif //__BUILDING_H__
