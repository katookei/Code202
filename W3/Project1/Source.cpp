#include "Header.h"

IntArray::IntArray() 
{

}
IntArray::IntArray(int n) 
{
	for (int i = 0; i < n; i++) {
		array.push_back(0);
	}
}
IntArray::IntArray(int arr[], int n) 
{
	for (int i = 0; i < n; i++) 
	{
		array.push_back(arr[i]);
	}
}
IntArray::IntArray(IntArray & arr) 
{
	for (int i = 0; i < arr.array.size(); i++) {
		array.push_back(arr.array[i]);
	}
}

ostream& operator << (ostream& cout, IntArray& other) 
{
	for (int i = 0; i < other.array.size(); i++) {
		cout << other.array[i] << " ";
	}
	cout << endl;
	return cout;
}
istream& operator >> (istream& cin, IntArray& other) 
{
	cout << "Input array: ";
	for (int i = 0; i < other.array.size(); i++) {
		cin >> other.array[i];
	}
	return cin;
}

int& IntArray::operator[] (int n) 
{
	return array[n];
}
IntArray:: operator int() 
{
	int sum = 0;
	for (int i = 0; i < array.size(); i++) {
		sum += array[i];
	}
	return sum;
}

