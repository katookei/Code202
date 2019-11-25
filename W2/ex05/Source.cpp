#include "Header.h"

time::time()
{
	s = 0;
	m = 0;
	h = 0;
}
void time::input()
{
	cout << "input time (hour/minute/second) : ";
	cin >> h >> m >> s;
}
void time::increase()
{
	time a;
	a.s = s;
	a.m = m;
	a.h = h;
	if (a.s == 59)
	{
		if (a.m == 59)
		{
			if (a.h == 23)
			{
				a.s = a.m = a.h = 0;
			}
			else
			{
				a.s = a.m = 0;
				a.h = a.h + 1;
			}
		}
	}
	else
	{
		a.s = a.s + 1;
	}
	cout << "Time is " << a.h << "/" << a.m << "/" << a.s << endl;
}
void time::decrease()
{
	time a;
	a.s = s;
	a.m = m;
	a.h = h;
	if (a.s == 0)
	{
		if (a.m == 0)
		{
			if (a.h == 0)
			{
				a.h = 23;
				a.m = a.s = 59;
			}
			else
			{
				a.h = a.h - 1;
				a.m = a.s = 59;
			}
		}
		else
		{
			a.m = a.m - 1;
			a.s = 59;
		}
	}
	else
		a.s = a.s - 1;
	cout << "Time is " << a.h << "/" << a.m << "/" << a.s << endl;
}