#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

class stu
{
	string  fullname, firstname, lastname, gender, add;
	float mark;
	int id;
	int compare(stu b);
public:
	void input();
	void save(stu a, stu b);
	void higher(stu a, stu b);
	stu getstudent(stu a, stu b);
	string getGPA(stu a);
};