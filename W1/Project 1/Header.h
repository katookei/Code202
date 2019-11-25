#pragma once
#include <iostream>
#include <fstream>
#include <string>


using namespace std;
class fraction
{
	int nu, de;
public:
	
	void readfile(fraction &b);
	void compare(fraction b);
};
