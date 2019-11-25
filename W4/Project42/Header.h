#pragma once
 
#include <iostream>
#include <string>
using namespace std;

class B
{
	int id;
	string name, dob, address;
public:
	B();
	B(int x);
	B(int x, string y);
	B(int x, string y, string z);
	B(int x, string y, string z, string d);
	void input();
	void output();
};

class nvsx : public B
{
	int salary;
	int product;
public:
	nvsx();
	nvsx(int _salary);
	nvsx(int _product, int x, string y);
	nvsx(int _salary, int _product);
	nvsx(int _id, int _salary, int _product);
	void income();
	
};

class nvcn : public B
{
	int salary;
	int day;
public:
	nvcn();
	nvcn(int _salary);
	nvcn(int _day, int x, string y);
	nvcn(int _salary, int _day);
	nvcn(int _id, int _salary, int _day);
	void income();
};