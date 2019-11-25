
#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"

using namespace std;

fraction::fraction()
{
	nu = 0;
	de = 1;
}

void fraction::initial(int x, int y)
{
	nu = x;
	de = y;
}

void fraction::sum(fraction b)
{
	int nu1 = nu*b.de + de*b.nu;
	int de1 = de * b.de;
	reduce(nu1, de1);
}
int fraction::gcd(int x, int y)
{
	if (x>=y)
		for (int i = x; i>0; i--)
		{
			if (x%i == 0 && y%i == 0)
				return i;
		}
	else
		for (int i = y; i>0; i--)
		{
			if (y%i == 0 && x%i == 0)
				return i;
		}
}
void fraction::reduce(int x, int y)
{
	int i = gcd(x, y);
	cout << x / i << "/" << y / i;
}
void fraction::readfile()
{
	ifstream fou;
	int data[10];
	fou.open("function.txt");
	for (int i = 0; i < 4; i++)
	{
		fou >> data[i];
	}
	fou.close();
	cout << "Fraction 1: " << data[0] << "/" << data[1] << endl;
	cout << "Fraction 2: " << data[2] << "/" << data[3] << endl;
}
void fraction::compare(int a[])
{
	if ((a[0] / a[1]) - (a[2] / a[3]) > 0)
		cout << "f1>f2";
	else if ((a[0] / a[1]) - (a[2] / a[3]) < 0)
		cout << "f1<f2";
	else
		cout << "f1=f2";
}
