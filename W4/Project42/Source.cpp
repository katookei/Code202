#include "Header.h"

B::B()
{

}
B::B(int x)
{
	id = x;
}
B::B(int x, string y)
{
	id = x;
	address = y;
}
B::B(int x, string y, string z)
{
	id = x;
	address = y;
	name = z;
}
B::B(int x, string y, string z, string d)
{
	id = x;
	address = y;
	name = z;
	dob = d;
}
void B::input()
{
	cout << "input your information : ";
	cout << "id" << endl;
	 cin >> id;
	cout << "name " << endl;
	while (getchar() != '\n');
	getline(cin, name);
	cout << "day of birth" << endl;
	//while (getchar() != '\n');
	//getline(cin, dob);
	cin >> dob;
	cout << "address " << endl;

	while (getchar() != '\n');
	getline(cin, address);
}
void B::output()
{
	cout << "id : " << id << endl;
	cout << "name : " << name << endl;
	cout << "day of birth : " << dob << endl;
	cout << "address : " << address << endl;
}
nvsx::nvsx()
{
	salary = 20000;
	product = 1;
}
nvsx::nvsx(int _salary)
{
	salary = _salary;
}
nvsx::nvsx(int _product, int x, string y) {
	product = _product;
	B(x,y);
}
nvsx::nvsx(int _salary, int _product)
{
	salary = _salary;
	product = _product;
}
nvsx::nvsx(int _id, int _salary, int _product)
{
	salary = _salary;
	product = _product;
	
}
void nvsx::income()
{
	cout << "Income" << product * 20000 << endl;
}
nvcn::nvcn()
{
	day = 1;
}
nvcn::nvcn(int _salary)
{
	salary = _salary;
}
nvcn::nvcn(int _day, int x, string y)
{
	day = _day;
	B(x,y);
}
nvcn::nvcn(int _salary, int _day)
{
	salary = _salary;
	day = _day;
}
nvcn::nvcn(int _id, int _salary, int _day)
{
	salary = _salary;
	day = _day;
	B(_int);
}
void nvcn::income()
{
	cout << "income : " << day * 300000 << endl;
}