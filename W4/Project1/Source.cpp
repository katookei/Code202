#include "Header.h"

GV::GV()
{
	id = 1;
	hsl = 1;
	lcb = 200000;
	dayoff = 0;
}
GV::GV(int _id)
{
	id = _id;
}
GV::GV(int _id, int _hsl)
{
	id = _id;
	hsl = _hsl;
}
GV::GV(int _id, int _hsl, int _lcb)
{
	id = _id;
	hsl = _hsl;
	lcb = _lcb;
}
GV::GV(int _id, int _hsl, int _lcb, int _dayoff)
{
	id = _id;
	hsl = _hsl;
	lcb = _lcb;
	dayoff = _dayoff;
}
void GV::input()
{
	cout << "Nhap ma giao vien : ";
	cin >> id;
	cin.ignore();
	cout << "Nhap ho va ten : ";
	getline(cin, name);
	cout << "Nhap he so luong : ";
	cin >> hsl;
	cout << "Nhap luong co ban : ";
	cin >> lcb;
	cout << "Nhap so ngay nghi : ";
	cin >> dayoff ;
}
void GV::print()
{
	cout << "Ma giao vien : " << id << endl;
	cout << "Ho va ten : " << name << endl;
	cout << "Luong co ban : " << lcb << endl;
	cout << "He so luong : " << hsl << endl;
	cout << "So ngay nghi : " << dayoff << endl;
	cout << "Luong : " << income() << endl;
}
int GV::income()
{
	int inc;
	inc = hsl * lcb - dayoff * 100000;
	if (inc < 0)
		return 0;
	else return inc;
}
GVCN::GVCN(): GV()
{
}
GVCN::GVCN(int _id) : GV(_id)
{}
GVCN::GVCN(int _id, int _hsl) :GV(_id, _hsl)
{}
GVCN::GVCN(int _id, int _hsl, int _lcb) : GV(_id, _hsl, _lcb)
{}
GVCN::GVCN(int _id, int _hsl, int _lcb, int _dayoff) : GV(_id, _hsl, _lcb, _dayoff)
{}
int GVCN::getsalary()
{
	int c = GV::income();
	c += phucap;
	return c;
}
void GVCN::_input() 
{
	GV::input();
	cin.ignore();
	cout << "Nhap lop chu nhiem : ";
	getline(cin, lcn);
}
void GVCN::_print()
{
	GV::print();
	cout << "Luong GVCN : " << getsalary() << endl;
}
