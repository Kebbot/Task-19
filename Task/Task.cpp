#include <iostream>
#include<Windows.h>
#define n 10

#define INTEGER
#include"function.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a[n];
	double d[n];
	char c[n];


	cout << endl;
	cout << "Int   \n";
	FillArray(a, n);
	ShowArray(a, n);
	FindMinElementArray(a, n);
	FindMaxElementArray(a, n);
	SortArray(a, n);
	cout << endl;
	cout << "Int   \n";
	ShowArray(a, n);
	cout << endl;
	ChangeElementArray(a);
	ShowArray(a, n);
	cout << endl;
#undef INTEGER

#define Double
#include "function.h"

	cout << endl;
	cout << "Double \n";
	FillArray(d, n);
	ShowArray(d, n);
	FindMinElementArray(d, n);
	FindMaxElementArray(d, n);
	SortArray(d, n);
	cout << endl;
	cout << "Double  \n";
	ShowArray(d, n);
	cout << endl;
	ChangeElementArray(d);
	ShowArray(d, n);
	cout << endl;
#undef Double	

#define Char
#include "function.h"


	cout << endl;
	cout << "Char   \n";
	FillArray(c, n);
	ShowArray(c, n);
	FindMinElementArray(c, n);
	FindMaxElementArray(c, n);
	SortArray(c, n);
	cout << endl;
	cout << "Char   \n";
	ShowArray(c, n);
	cout << endl;
	ChangeElementArray(c);
	ShowArray(c, n);
	cout << endl;
#undef Char


	cout << endl;
	cout << endl;
	system("pause");
	return 0;

}
