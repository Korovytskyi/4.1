// 4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// < Коровицький Тарас >
// Лабораторна робота № 4.1
//Цикли.
// Варіант 13

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, n;
	double P;
	cout << "n = "; cin >> n;
	cout << "N = "; cin >> N;
	P=1 ;
	k=n ;
	while (k<=25)
	{
		P *= sin(sqrt(1+(N/k)));
		k++;
	}
	cout << P << endl;
	P = 1;
	k=n;
	do {
		P *= sin(sqrt(1 + (N / k)));
		k++;
	} while (k <= 25);
	cout << P << endl;
	P = 1;
	for (k = n; k <= 25; k++)
	{
		P *= sin(sqrt(1 + (N / k)));
	}
	cout << P << endl;
	P = 1;
	for (k = 25; k >= 25; k--)
	{
		P *= sin(sqrt(1 + (N / k)));
	}
	cout << P << endl;
	return 0;
}
