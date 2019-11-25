#include "Header.h"

VIP::VIP()
{
	name = "nguyen van a";
	gender = "male";
}
VIP::VIP(string _name)
{
	name = _name;
}
VIP::VIP(string _name, string _expire)
{
	name = _name;
	expire = _expire;
}
VIP::VIP(int _id)
{
	id = _id;
}
VIP::VIP(int _id, string _name)
{
	id = _id;
	name = _name;
}
void VIP::input()
{
	cout << "Nhap ma doc gia :";
	cin >> id;
	cin.ignore();
	cout << "Nhap ho va ten : ";
	getline(cin, name);
	
	cout << "Nhap gioi tinh : ";
	cin >> gender;

	cout << "Nhap ngay het han : ";
	cin >> expire;
	cout << "So sach muon trong thang : ";
	cin >> books;
}
void VIP::print()
{
	cout << "Nhap ma doc gia :" << id << endl;
	cout << "Nhap ho va ten : " << name << endl;
	cout << "Nhap gioi tinh : " << gender << endl;
	cout << "Nhap ngay het han : " << expire << endl;
	cout << "So sach muon trong thang : " << books << endl;
}
void VIP::lephi()
{
	cout << "Le phi : " << fee << endl;
}
reader::reader()
{
	name = "nguyen van a";
	gender = "male";
}
reader::reader(int _id) : VIP(_id)
{
}
reader::reader(int _id, string _name) : VIP(_id, _name)
{

}
reader::reader(string _name) : VIP(_name)
{}
reader::reader(string _name, string _expire) :VIP(_name, _expire)
{}
void reader::lephi()
{
	cout << "Le phi : " << books * 5000 << endl;
}
void reader::input()
{
	VIP::input();
}
void reader::print() 
{
	VIP::print();
}















