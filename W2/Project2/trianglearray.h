#pragma once
#include "triangle.h"
class trianglearray
{
	vector <triangle> array;
	int dem[6] = { 0, 0, 0, 0, 0, 0 };
public:
	void readfile(const char *path);
	void display();
};