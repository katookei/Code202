#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

class time
{
	int s, m, h;
public:
	time();
	void input();
	void increase();
	void decrease();
};
