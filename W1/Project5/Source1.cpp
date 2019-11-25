#include "Header.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fraction a, b;
	a.initial(1, 2);
	b.initial(1, 3);
	a.sum(b);
	system("pause");
	return 0;
}