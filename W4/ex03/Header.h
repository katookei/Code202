#pragma once
#include <iostream>
#include <string>
using namespace std;

class VIP {
private:
	int fee = 50000;
protected:
	string name, expire, gender;
	int id, books;
public:
	VIP();
	VIP(string _name);
	VIP(string _name, string _expire);
	VIP(int _id);
	VIP(int id, string _name);
	void input();
	void print();
	virtual void lephi();
};
class reader : protected VIP
{
public:
	reader();
	reader(int id);
	reader(int _id, string _name);
	reader(string _name);
	reader(string _name, string _expire);
	void input();
	void print();
	void lephi();
};
