#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

class point
{
	int x, y;
	float d;
public:
	void points(point &b, point &c);
	void vertices(point b, point c);
	int type(point b, point c);
	float  parameter(point b, point c);
	float area(point b, point c);
	void save(point b, point c);
};

