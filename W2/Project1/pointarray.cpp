#include "point.h"
#include "pointarray.h"

void pointarray::readfile(const char *path)
{
	int a, b;
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
		return;
	for (int i = 0; i < 5; i++)
	{
		fin >> a >> b;
		point d(a, b);
		array.push_back(d);
	}
	fin.close();
}
pointarray::pointarray()
{};
point pointarray::compare(point b)
{
	int d;
	int k;
	int max = 0;
		for (int i = 0; i < array.size(); i++)
		{
			d = array[i].distance(b);
			if (d > max)
			{
				max = d;
				k = i;
			}
		}
		return array[k];
}
