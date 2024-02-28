#pragma once
#include<iostream>
#include <ctime>
#include<iomanip>
#include <Windows.h>

using namespace std;


#ifdef INTEGER
#define FillArray FillArrayInt
#define ShowArray ShowArrayInt
#define FindMinElementArray FindMinInt
#define FindMaxElementArray FindMaxInt
#define SortArray SortIntArray
#define ChangeElementArray ChangeElementInt
#endif

#ifdef Double
#define FillArray FillArrayDouble
#define ShowArray ShowArrayDouble
#define FindMinElementArray FindMinDouble
#define FindMaxElementArray FindMaxDouble
#define SortArray SortDoubleArray
#define ChangeElementArray ChangeElementDouble
#endif

#ifdef Char
#define FillArray FillArrayChar
#define ShowArray ShowArrayChar
#define FindMinElementArray FindMinChar
#define FindMaxElementArray FindMaxChar
#define SortArray SortCharArray
#define ChangeElementArray ChangeElementChar
#endif

// �������� ����������� ������� int
void FillArrayInt(int a[], int);

// ����� ����������� ������� int
void ShowArrayInt(int a[], int);

// ����� ������������ ��������
void FindMinInt(int arr[], int);

// ����� ������������ ��������
void FindMaxInt(int arr[], int);

//���������� ������
void SortIntArray(int arr[], int);

//�������������� ��������� �������
void ChangeElementInt(int arr[]);


/////////////////////////////////////////////////////////////////

// �������� ����������� ������� double
void FillArrayDouble(double a[], int);

// ����� ����������� ������� double
void ShowArrayDouble(double a[], int);

// ����� ������������ ��������
void FindMinDouble(double arr[], int);

// ����� ������������� ��������
void  FindMaxDouble(double arr[], int);

//���������� ������
void SortDoubleArray(double arr[], int);

//�������������� ��������� �������
void ChangeElementDouble(double arr[]);

/////////////////////////////////////////////////////////////////

// �������� ����������� ������� char
void FillArrayChar(char a[], int);

// ����� ����������� ������� char
void ShowArrayChar(char a[], int);

//����� ������������ �������� 
void FindMinChar(char arr[], int);

//����� ������������� ��������
void FindMaxChar(char arr[], int);

//���������� ������� Char
void SortCharArray(char arr[], int);

//�������������� ��������
void ChangeElementChar(char arr[]);
