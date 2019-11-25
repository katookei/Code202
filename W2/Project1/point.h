#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

class point
{
	int x, y;
public:
	point();
	point(int a, int b);
	void display();
	void input();
	float distance(point b);
};

