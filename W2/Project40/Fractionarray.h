#pragma once
#include "Fraction.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Fractionarray
{
	vector <Fraction> frac;
public:
	Fractionarray();
	~Fractionarray();
	void openfile(const char *path);
	Fraction sum();
};