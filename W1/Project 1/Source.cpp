#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"

using namespace std;

void fraction::readfile(fraction &b)
{
	ifstream fou;
	int data[10];
	fou.open("a.txt");
	for (int i = 0; i < 4; i++)
	{
		fou >> data[i];
	}
	fou.close();
	nu = data[0]; de = data[1];
	b.nu = data[2]; b.de = data[3];
	cout << "Fraction 1: " <<  nu  << "/" << de  << endl;
	cout << "Fraction 2: " << b.nu << "/" << b.de << endl;
}

void fraction::compare(fraction b)
{
	if (nu*b.de - de* b.nu > 0)
		cout << "f1>f2";
	else if (nu*b.de - de * b.nu < 0)
		cout << "f1<f2";
	else
		cout << "f1=f2";
}