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

// создание одномерного массива int
void FillArrayInt(int a[], int);

// вывод одномерного массива int
void ShowArrayInt(int a[], int);

// поиск минимального значения
void FindMinInt(int arr[], int);

// поиск минимального значения
void FindMaxInt(int arr[], int);

//сортировка масива
void SortIntArray(int arr[], int);

//редактирование елементов массива
void ChangeElementInt(int arr[]);


/////////////////////////////////////////////////////////////////

// создание одномерного массива double
void FillArrayDouble(double a[], int);

// вывод одномерного массива double
void ShowArrayDouble(double a[], int);

// поиск минимального значения
void FindMinDouble(double arr[], int);

// поиск максимального значения
void  FindMaxDouble(double arr[], int);

//сортировка масива
void SortDoubleArray(double arr[], int);

//редактирование елементов массива
void ChangeElementDouble(double arr[]);

/////////////////////////////////////////////////////////////////

// создание одномерного массива char
void FillArrayChar(char a[], int);

// вывод одномерного массива char
void ShowArrayChar(char a[], int);

//поиск минимального значения 
void FindMinChar(char arr[], int);

//поиск максимального значения
void FindMaxChar(char arr[], int);

//Сортировка массива Char
void SortCharArray(char arr[], int);

//Редактирование значения
void ChangeElementChar(char arr[]);
