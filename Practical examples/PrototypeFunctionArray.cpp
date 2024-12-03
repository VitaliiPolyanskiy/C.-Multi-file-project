#include <iostream>
#include <iomanip>
#include "PrototypeFunction.h"

using namespace std;


// Функция инициализирует одномерный массив
void Init(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

// Функция печатает одномерный массив
void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << arr[i];
	}
}

// Функция определяет среднее арифметическое элементов массива
double Average(int arr[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

// Функция печатает те элементы массива, которые являются простыми числами
void Prime(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if(IsPrime(arr[i]))
			cout << setw(4) << arr[i];
	}
}