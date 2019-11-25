#pragma once

#include <vector>
#include <iostream>
using namespace std;

class IntArray {
	vector <int> array;
public:
	IntArray();
	IntArray(int n);
	IntArray(int arr[], int n);
	IntArray(IntArray&);
	
	friend ostream& operator << (ostream& cout, IntArray&);
	friend istream& operator >> (istream& cin, IntArray&);
	
	int& operator[] (int n);
	operator int();
};
