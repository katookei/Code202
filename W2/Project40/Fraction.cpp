#include "Fraction.h"

Fraction::Fraction()
{
	nu = 0;
	de = 1;
}
Fraction::Fraction(int x, int y)
{
	nu = x;
	de = y;
}
Fraction::~Fraction()
{}
Fraction Fraction::add(Fraction b)
{
	int nu1 = nu * b.de + de * b.nu;
	int de1 = de * b.de;
	Fraction k(nu1, de1);
	return k;
}
int Fraction::gcd(int x, int y)
{
	if (x >= y)
		for (int i = x; i > 0; i--)
		{
			if (x%i == 0 && y%i == 0)
				return i;
		}
	else
		for (int i = y; i > 0; i--)
		{
			if (y%i == 0 && x%i == 0)
				return i;
		}
}
Fraction Fraction::reduce()
{
	int i = gcd(nu, de);
	nu = nu / i; de = de / i;
	Fraction k;
	return k;
}
void Fraction::display()
{
	cout << nu << "/" << de;
}