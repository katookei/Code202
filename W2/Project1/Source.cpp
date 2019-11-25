#include "point.h"
#include "pointarray.h"

int main()
{
	point a;
	pointarray c;
	c.readfile("Text.txt");
	cout << "input a point : " << endl;
	a.input();
	c.compare(a).display();
	system("pause");
	return 0;
}