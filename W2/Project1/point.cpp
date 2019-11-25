#include "point.h"
#include "pointarray.h"

void point::input()
{
	cout << "input x, y: ";
	cin >> x >> y ;
}
void point::display()
{
	cout << "Point is " << "(" << x << "," << y << ")";
}
point::point()
{
	x = y =  1;
}
point::point(int a, int b)
{
	x = a;
	y = b;

}
float point::distance(point b)
{
	int k = sqrt(pow((x - b.x), 2) + pow((y - b.y), 2));
	return k;
}