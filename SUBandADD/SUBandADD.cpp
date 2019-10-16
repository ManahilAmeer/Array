// SUBandADD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int size;
		int sum = 0, sub = 0;
	cout << "Enter the size of the array: ";
	cin >> size;
	int* arr=new int [size];
	cout << "Enter the " << size << " elements" << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> *(arr+i);
	}

	sub = arr[0];
	sum = arr[0];
	for (int i = 0; i < size - 1; i++)
	{
		sum = sum + arr[i + 1];
		sub = sub - arr[i + 1];
	}

	cout << "Sum of array elements = " << sum << endl;
	cout << "Subtraction of array elements = " << sub;
	return 0;
}
//The console will show the sum and difference
