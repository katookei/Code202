#include "Header.h"

int main()
{
	stu a, b;
	a.input();
	b.input();
	a.higher(a, b);
	a.save(a, b);
	system("pause");
	return 0;
}