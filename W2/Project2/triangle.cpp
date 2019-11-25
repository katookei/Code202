#include "triangle.h"
#include "trianglearray.h"

triangle::triangle()
{
	int a = b = c = 1;
}
triangle::triangle(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
}
int triangle::check()
{
	if ((a + b < c) || (a + c < b) || (b + c < a))
		return 0;
	else if (a == b && b == c && a == c)
		return 1;
	else if ((a*a == b * b + c * c) || (b*b == a * a + c * c) || (c*c == a * a + b * b))
	{
		if (a == b || b == c || a == c)
			return 2;
		else return 3;
	}
	else if ((a*a > b*b + c * c) || (b*b > a*a + c * c) || (c*c > a*a + b * b))
		return 4;
	else return 5;
}

