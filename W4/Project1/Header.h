#pragma once
#include <iostream>
#include <string>
using namespace std;

class GV {
private:
	int id, hsl, lcb, dayoff;
	string name;
public:
	GV();
	GV(int _id);
	GV(int _id, int _hsl);
	GV(int _id, int _hsl, int _lcb);
	GV(int _id, int _hsl, int _lcb, int _dayoff);
	void print();
	void input();
	int income();
};
class GVCN : public GV
{
private:
	int phucap = 500000;
	string lcn;
public:
	GVCN();
	GVCN(int _id);
	GVCN(int _id, int _hsl);
	GVCN(int _id, int _hsl, int _lcb);
	GVCN(int _id, int _hsl, int _lcb, int _dayoff);
	void _input();
	void _print();
	int getsalary();
};