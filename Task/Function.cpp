#include "function.h"


// создание одномерного массива int
void FillArrayInt(int a[], int n)
{
	srand(time(0));

	for (size_t i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
}

// вывод одномерного массива int
void ShowArrayInt(int a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << setw(5) << "[" << i << "]   " << a[i] << endl;
	}
}

// поиск минимального значения
void FindMinInt(int arr[], int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << endl << "Min: " << min << endl;
}

// поиск минимального значения
void FindMaxInt(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << endl << "Max: " << max << endl;
}

//сортировка масива
void SortIntArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[j] > arr[i])
				swap(arr[i], arr[j]);

}

//редактирование елементов массива
void ChangeElementInt(int arr[]) {
	int d, val;
	cout << "Введите индекс элемента который хотите изменить" << endl;
	cin >> d;
	cout << "Новое значение елемента " << endl;
	cin >> val;
	arr[d] = val;

}


//////////////////////////////////////////////////////////////////
// создание одномерного массива double
void FillArrayDouble(double a[], int n)
{
	srand(time(0));

	for (size_t i = 0; i < n; i++)
	{
		a[i] = (rand() % 10 * 1.5) / 10;
	}
}

// вывод одномерного массива double
void ShowArrayDouble(double a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << setw(5) << "[" << i << "]   " << a[i] << endl;
	}
}

// поиск минимального значения
void FindMinDouble(double arr[], int n) {
	double min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << endl << "Min: " << min << endl;
}

// поиск максимального значения
void  FindMaxDouble(double arr[], int n) {
	double max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << endl << "Max: " << max << endl;
}

//сортировка масива
void SortDoubleArray(double arr[], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[j] < arr[i])
				swap(arr[i], arr[j]);

}

//редактирование елементов массива
void ChangeElementDouble(double arr[]) {
	int d;
	double val;
	cout << "Введите индекс элемента который хотите изменить" << endl;
	cin >> d;
	cout << "Новое значение елемента " << endl;
	cin >> val;
	arr[d] = val;

}


//////////////////////////////////////////////////////////////////
// создание одномерного массива char
void FillArrayChar(char a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = char('a' + rand() % ('z' - 'a'));
	}
}

// вывод одномерного массива char
void ShowArrayChar(char a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << setw(5) << "[" << i << "]   " << a[i] << endl;
	}
}

// поиск минимального значения
void FindMinChar(char arr[], int n) {
	char min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << endl << "Min: " << min << endl;
}

// поиск максимального значения
void FindMaxChar(char arr[], int n) {
	char max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << endl << "Max: " << max << endl;
}

//сортировка масива
void SortCharArray(char arr[], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[j] < arr[i])
				swap(arr[i], arr[j]);

}

//редактирование елементов массива
void ChangeElementChar(char arr[]) {
	int d;
	char val;
	cout << "Введите индекс элемента который хотите изменить" << endl;
	cin >> d;
	cout << "Новое значение елемента " << endl;
	cin >> val;
	arr[d] = val;

}
