#pragma once
#include "point.h"

class pointarray
{
	vector <point> array;
public:
	pointarray();
	void readfile(const char *path);
	point compare(point c);
};
