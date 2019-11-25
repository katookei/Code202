#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

class time
{
	int d, m, y;
public:
	time();
	void input();
	void increase();
	void decrease();
	int checkleap();
};
