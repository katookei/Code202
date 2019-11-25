#include "Header.h"

void stu::input()
{
	cout << "id : ";
	cin >> id;
	cin.ignore();
	cout << "full name : ";
	getline(cin, fullname);
	cout << "gender : ";
	getline(cin, gender);
	cout << "address : ";
	getline(cin, add);
	cout << "mark : ";
	cin >> mark;
	cout << endl;
}
int  stu::compare(stu b)
{
	if (mark - b.mark > 0)
		return 0;
	else
		return 1;
}
void stu::higher(stu a, stu b)
{
	int k = a.compare(b);
	if (k == 0)
		cout << a.fullname << " is higher ";
	else cout << b.fullname << " is higher ";
}
stu stu::getstudent(stu a, stu b)
{
	int k = a.compare(b);
	if (k == 0)
		return a;
	else
		return b;
}


void stu::save(stu a, stu b)
{
	stu k;
	k = a.getstudent(a, b);
	ofstream fout;
	fout.open("student.xml");
	fout << k.id << endl;
	int end = k.fullname.size();
	int begin = 0;
	for (int i = k.fullname.size() - 1; k.fullname[i] != ' '; i--)
	{
		begin = i;
	}

	for (int i = begin - 1; i <= end - 1; i++)
	{
		fout << k.fullname[i];
	}
	fout << " ";
	for (int i = 0; i < begin - 1; i++)
	{
		fout << k.fullname[i];
	}
	fout << endl;
	fout << k.id << endl;
	fout << k.add << endl;
	fout << k.mark << endl;
	fout << getGPA(k) << endl;
	fout.close();
}

string stu::getGPA(stu a)
{
	string gpa;
	float p = (mark * 10 / 20)*1.0 - 1;
	if (p > 3.7)
		gpa = 'A';
	else if (p > 3.3)
		gpa = 'A-';
	else if (p > 3.0)
		gpa = 'B+';
	else if (p > 2.7)
		gpa = 'B';
	else if (p > 2.3)
		gpa = 'B-';
	else if (p > 2.0)
		gpa = 'C+';
	else if (p > 1.7)
		gpa = 'C';
	else if (p > 1.3)
		gpa = 'C-';
	else if (p > 1.0)
		gpa = 'D+';
	else if (p > 0.7)
		gpa = 'D-';
	else if (p > 0.0)
		gpa = 'D-';
	else
		gpa = 'F';
	return gpa;
}