#include "Fraction.h"
#include "Fractionarray.h"

int main()
{
	Fraction a;
	Fractionarray x;
	x.openfile("Text.txt");
	cout << "sum of fractions : ";
	a = x.sum();
	a.display();
	system("pause");
	return 0;
}