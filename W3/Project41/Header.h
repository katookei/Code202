#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Fraction
{
	int nu, de;
	friend Fraction operator+(Fraction& a, const Fraction &b);
	friend Fraction operator*(int a, const Fraction &b);
public:
	Fraction();
	Fraction(int x, int y);
	Fraction operator+( Fraction &b);
	Fraction operator-( Fraction &b);
	Fraction operator*( Fraction &b);
	Fraction operator/( Fraction &b);
	bool operator==(const Fraction &b);
	bool operator!=(const Fraction &b);
	bool operator>=(const Fraction &b);
	bool operator>(const Fraction &b);
	bool operator<=(const Fraction &b);
	bool operator<(const Fraction &b);
	//int gcd(int x, int y);
	Fraction reduce();
	Fraction(int n);

	friend Fraction operator+(int a, Fraction &b);
	friend Fraction operator+(Fraction &b, int a);
	friend Fraction operator*(int a, Fraction& b);
	friend Fraction operator-(Fraction& b, int a);

	
	Fraction operator++(int a);
	Fraction& operator++();
	Fraction operator--(int a);
	Fraction& operator--();
	
	Fraction& operator+=(Fraction &b);
	Fraction& operator-=(Fraction &b);
	Fraction& operator*=(Fraction &b);
	Fraction& operator/=(Fraction &b);
	friend ostream &operator<<(ostream &cout, const Fraction &a);
	friend istream &operator>>(istream &cin, const Fraction &a);
	operator float();
	//Fraction& operator+=(const Fraction &p);
};

