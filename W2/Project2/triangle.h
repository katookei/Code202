#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

class triangle
{
	int a, b, c;
public:
	triangle();
	triangle(int x, int y, int z);
	int check();
};