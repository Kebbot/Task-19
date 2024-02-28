#include "function.h"


// �������� ����������� ������� int
void FillArrayInt(int a[], int n)
{
	srand(time(0));

	for (size_t i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
}

// ����� ����������� ������� int
void ShowArrayInt(int a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << setw(5) << "[" << i << "]   " << a[i] << endl;
	}
}

// ����� ������������ ��������
void FindMinInt(int arr[], int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << endl << "Min: " << min << endl;
}

// ����� ������������ ��������
void FindMaxInt(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << endl << "Max: " << max << endl;
}

//���������� ������
void SortIntArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[j] > arr[i])
				swap(arr[i], arr[j]);

}

//�������������� ��������� �������
void ChangeElementInt(int arr[]) {
	int d, val;
	cout << "������� ������ �������� ������� ������ ��������" << endl;
	cin >> d;
	cout << "����� �������� �������� " << endl;
	cin >> val;
	arr[d] = val;

}


//////////////////////////////////////////////////////////////////
// �������� ����������� ������� double
void FillArrayDouble(double a[], int n)
{
	srand(time(0));

	for (size_t i = 0; i < n; i++)
	{
		a[i] = (rand() % 10 * 1.5) / 10;
	}
}

// ����� ����������� ������� double
void ShowArrayDouble(double a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << setw(5) << "[" << i << "]   " << a[i] << endl;
	}
}

// ����� ������������ ��������
void FindMinDouble(double arr[], int n) {
	double min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << endl << "Min: " << min << endl;
}

// ����� ������������� ��������
void  FindMaxDouble(double arr[], int n) {
	double max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << endl << "Max: " << max << endl;
}

//���������� ������
void SortDoubleArray(double arr[], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[j] < arr[i])
				swap(arr[i], arr[j]);

}

//�������������� ��������� �������
void ChangeElementDouble(double arr[]) {
	int d;
	double val;
	cout << "������� ������ �������� ������� ������ ��������" << endl;
	cin >> d;
	cout << "����� �������� �������� " << endl;
	cin >> val;
	arr[d] = val;

}


//////////////////////////////////////////////////////////////////
// �������� ����������� ������� char
void FillArrayChar(char a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = char('a' + rand() % ('z' - 'a'));
	}
}

// ����� ����������� ������� char
void ShowArrayChar(char a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << setw(5) << "[" << i << "]   " << a[i] << endl;
	}
}

// ����� ������������ ��������
void FindMinChar(char arr[], int n) {
	char min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << endl << "Min: " << min << endl;
}

// ����� ������������� ��������
void FindMaxChar(char arr[], int n) {
	char max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << endl << "Max: " << max << endl;
}

//���������� ������
void SortCharArray(char arr[], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[j] < arr[i])
				swap(arr[i], arr[j]);

}

//�������������� ��������� �������
void ChangeElementChar(char arr[]) {
	int d;
	char val;
	cout << "������� ������ �������� ������� ������ ��������" << endl;
	cin >> d;
	cout << "����� �������� �������� " << endl;
	cin >> val;
	arr[d] = val;

}
