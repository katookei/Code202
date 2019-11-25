#include "Header.h"

void point::points(point &b, point &c)
{
	ifstream fin;
	int data[10];
	fin.open("a.txt");
	for (int i = 0; i < 6; i++)
	{
		fin >> data[i];
	}
	fin.close();
	x = data[0]; y = data[1];
	b.x = data[2]; y = data[3];
	c.x = data[4]; c.y = data[5];
}

void point::vertices(point b, point c)
{
	d = sqrt(pow(x - b.x, 2) + pow(y - b.y, 2));
	b.d = sqrt(pow(x - c.x, 2) + pow(y - c.y, 2));
	c.d = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
	cout << "3 vertices : " << d << " " << b.d << " " << c.d;
}
int point::type(point b, point c)
{
	if (d = b.d = c.d)
		return 1;
	else if (d == b.d || b.d == c.d || d == c.d)
	{
		if ((d*d == b.d*b.d + c.d*c.d) || (b.d*b.d == d * d + c.d*c.d) || (c.d*c.d == b.d*b.d + d * d))
			return 2;

		else
			return 3;
	}
	else if ((d*d == b.d*b.d + c.d*c.d) || (b.d*b.d == d * d + c.d*c.d) || (c.d*c.d == b.d*b.d + d * d))
		return 4;
	else
		return 5;
}
float point::parameter(point b, point c)
{
	return d + b.d + c.d;
}
float point::area(point b, point c)
{
	int p = (d + b.d + c.d);
	return sqrt(p*(p - d)*(p - b.d)*(p - c.d));
}
void point::save(point b, point c)
{
	int k = type(b, c);
	float p = parameter(b, c);
	float are = area(b, c);
	ofstream fout;
	fout.open("b.csv");
	fout << "Edge A" << "," << "Edge B" << "," << "Edge C" << "Type" << "Parameter" << "Area" << endl;
	fout << d << "," << b.d << "," << c.d << ",";
	switch (k)
	{
	case 1:
		fout << "Equaliteral Triangle" << ",";
		break;
	case 2:
		fout << "Right Isosceles Triangle" << ",";
		break;
	case 3:
		fout << "Isosceles Triangle" << ",";
		break;
	case 4:
		fout << "Right Triangle " << ",";
		break;
	case 5:
		fout << "Normal Triangle" << ",";
		break;
	}
	fout << p << "," << are;
	fout.close();
}