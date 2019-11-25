#include "triangle.h"
#include "trianglearray.h"

int main()
{
	triangle a;
	trianglearray b;
	b.readfile("Text.txt");
	b.display();
	system("pause");
	return 0;
}