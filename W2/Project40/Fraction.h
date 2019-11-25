#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Fraction 
{
	int nu, de;
public:
	Fraction();
	Fraction(int x, int y);
	~Fraction();
	Fraction add(Fraction b);		
	int gcd(int x, int y);
	Fraction reduce();
	void display();
};
