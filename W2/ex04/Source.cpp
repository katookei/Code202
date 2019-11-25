#include "Header.h"

time::time()
{
	d = 1;
	m = 1;
	y = 2000;
}
void time::input()
{
	cout << "input d,m,y : ";
	cin >> d;
	cin >> m;
	cin >> y;
}
void time::increase()
{
	int k = checkleap();
	if (d == 31)
	{
		if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m = 8) || (m = 10))
		{
			m = m + 1;
			d = 1;
		}
		else
		{
			m = 1;
			d = 1;
			y = y + 1;
		}
	}
	else if (d == 30)
	{
		if ((m == 4) || (m == 6) || (m == 9) || (m = 11))
		{
			d = 1;
			m = m + 1;
		}
		else
		{
			d = d + 1;
			m = m + 1;
		}
	}
	else if (d == 29)
	{
		if ((k == 1) && (m == 2))
		{
			d = 1;
			m = 3;
		}
		else
		{
			d = d + 1;
		}
	}
	else if (d == 28)
	{
		if ((k == 0) && (m == 2))
		{
			d = 1;
			m = 3;
		}
		else
			d = d + 1;
	}
	else
		d = d + 1;
	cout << "The next day is " << d << "/" << m << "/" << y << endl;
}
int time::checkleap()
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else return 0;

}
void time::decrease()
{
	int k = checkleap();
	if (d == 1)
	{
		if ((m == 4) || (m == 2) || (m == 6) || (m == 9) || (m == 8) || (m = 11))
		{
			d = 31;
			m = m - 1;
		}
		else if ((m == 5) || (m == 7) || (m = 10) || (m == 12))
		{
			d = 30;
			m = m - 1;
		}
		else if (m == 1)
		{
			d = 31;
			m = 12;
			y = y - 1;
		}
		else if (m == 3)
		{
			if (k == 1)
			{
				d = 29;
				m = 2;
			}
			else
			{
				d = 28;
				m = 2;
			}
		}
	}
	else
		d = d - 2;
	cout << "The day before is " << d << "/" << m << "/" << y << endl;
}
