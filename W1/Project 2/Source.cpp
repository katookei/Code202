#include "Header.h"

void oxy::input(oxy &b)
{
	cout << "enter 2 point:";
	cin >> x >> y;
	cin >> b.x >> b.y;
}
void oxy::distance(oxy b)
{
	cout << "distance : " << sqrt(pow(x - b.x, 2) + pow(y - b.y, 2));
}