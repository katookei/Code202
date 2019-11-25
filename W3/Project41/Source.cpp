#include "Header.h"

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

Fraction Fraction::operator+(Fraction &b)
{
	Fraction k;
	k.nu = nu * b.de + de * b.nu;
	k.de = de * b.de;

	return k.reduce();
}
	
Fraction Fraction::operator-( Fraction &b)
{
	Fraction k;
	k.nu = nu * b.de - de * b.nu;
	k.de = de * b.de;

	k.reduce();
	return k;
}
Fraction Fraction::operator*( Fraction &b)
{
	Fraction k;
	k.nu = nu * b.nu;
	k.de = de * b.de;

	k.reduce();
	return k;
}
Fraction Fraction::operator/( Fraction &b)
{
	Fraction k;
	k.nu = nu * b.de;
	k.de = de * b.nu;

	k.reduce();
	return k;
}
int gcd(int x, int y)
{
	int remainder;
	while (y != 0)
	{
		remainder = x % y;
		x = y;
		y = remainder;
	}
	return x;
}
Fraction Fraction::reduce()
{
	int i = gcd(nu, de);
	return Fraction(nu/i, de/i);
}

bool Fraction::operator==(const Fraction &b)
{
	if ((nu = b.nu) && (de = b.de))
		return true;
	else
		return false;
}
bool Fraction::operator!=(const Fraction &b)
{
	if ((nu*b.de - de * b.nu) != 0)
		return true;
	else
		return false;
}
bool Fraction::operator>=(const Fraction &b)
{
	if ((nu*b.de - de * b.nu) >= 0)
		return true;
	else
		return false;
}
bool Fraction::operator>(const Fraction &b)
{
	if ((nu*b.de - de * b.nu) > 0)
		return true;
	else
		return false;
}
bool Fraction::operator<=(const Fraction &b)
{
	if ((nu*b.de - de * b.nu) <= 0)
		return true;
	else
		return false;
}
bool Fraction::operator<(const Fraction &b)
{
	if ((nu*b.de - de * b.nu) < 0)
		return true;
	else
		return false;
}

Fraction operator*(int a, Fraction &b)
{
	Fraction k = Fraction(a);
	return k.operator*(b);

}
Fraction operator+(int a, Fraction &b)
{
	Fraction k = Fraction(a);
	return k.operator+(b);
}
Fraction operator+(Fraction &b, int a)
{
	Fraction k = Fraction(a);
	return k.operator+(b);
}
Fraction operator-(Fraction &b, int a)
{
	Fraction k = Fraction(a);
	return k.operator-(b);
}
ostream & operator<<(ostream &cout, const Fraction &a)
{
	cout << a.nu << "/" << a.de;
	return cout;
}
istream &operator>>(istream &cin, const Fraction &a)
{
	cout << "enter numerator";
	cin >> a.nu;
	cout << "enter denomerator";
	cin >> a.de;
	return cin;
}
Fraction Fraction::operator++(int a)
{
	Fraction b = Fraction(*this);
	this->nu += a * this->de;
	return b;
}
Fraction& Fraction::operator++()
{
	this->nu += this->de;
	return *this;
}
Fraction Fraction::operator--(int a)
{
	Fraction b = Fraction(*this);
	this->nu -= a * this->de;
	return b;
}
Fraction& Fraction::operator--()
{
	this->nu -= this->de;
	return *this;
}
Fraction::Fraction(int n)
{
	nu = n;
	de = 1;
}
Fraction& Fraction::operator+=(Fraction &b)
{
	*this = *this + b;
	return *this;
}
Fraction& Fraction::operator-=(Fraction &b)
{
	*this = *this - b;
	return *this;
}
Fraction& Fraction::operator*=(Fraction &b)
{
	*this = *this * b;
	return *this;
}
Fraction& Fraction::operator/=(Fraction &b)
{
	*this = *this / b;
	return *this;
}
Fraction::operator float()
{
	return (float)nu / de;
}
