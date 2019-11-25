#include "triangle.h"
#include "trianglearray.h"

void trianglearray::readfile(const char *path)
{
	int x,y,z;
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
		return;
	for (int i = 0; i < 5; i++)
	{
		fin >> x >> y >> z;
		triangle d(x,y,z);
		int k = d.check();
		dem[k]++;
		if(k>0)
		array.push_back(d);
	}
	fin.close();
}
void trianglearray::display()
{
	cout << "There are " << dem[0] << " invalid triangles" << endl;
	cout << "There are " << dem[1] << " equilateral triangles" << endl;
	cout << "There are " << dem[2] << " right isosceles triangles" << endl;
	cout << "There are " << dem[3] << " right triangles " << endl;
	cout << "There are " << dem[4] << " obtuse triangles" << endl;
	cout << "There are " << dem[5] << " acute triangles" << endl;
}