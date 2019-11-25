#include "Fractionarray.h"
#include "Fraction.h"



void Fractionarray::openfile(const char *path)
{
	int x, y;
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
		return;
	for (int i = 0; i < 5; i++)
	{
		fin >> x >> y;
		Fraction d(x, y);
		frac.push_back(d);
	}
	fin.close();
}
Fractionarray::Fractionarray()
{}
Fractionarray::~Fractionarray()
{
}
Fraction Fractionarray::sum()
{
	Fraction sum(0, 1);
	for (int i = 0; i < frac.size(); i++)
	{
		sum = sum.add(frac[i]);
	}
	sum.reduce();
	return sum;

}