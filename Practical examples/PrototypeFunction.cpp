#include <iostream>

using namespace std;

// Функция возвращает куб числа.
int CubeOfNumber(int number)
{
	return number * number * number;
}

// Функция определяет наибольшее из двух чисел. 
int MaxOfTwoNumber(int n1, int n2)
{
	if (n1 > n2)
		return n1;
	else
		return n2;
}

// Функция возвращает истину, если передаваемое значение положительное 
// и ложь, если отрицательное.
bool IsPositive(int number)
{
	if (number >= 0)
		return true;
	return false;
}

// Функция сложения двух чисел
double Addition(double n1, double n2)
{
	return n1 + n2;
}

// Функция вычитания двух чисел
double Subtraction(double n1, double n2)
{
	return n1 - n2;
}

// Функция произведения двух чисел
double Multiplication(double n1, double n2)
{
	return n1 * n2;
}

// Функция деления двух чисел
double Division(double n1, double n2)
{
	return n1 / n2;
}

// Функция в зависимости от выбора пользователя вызывает функции сложения, 
// произведения, вычитания, деления двух чисел
double Calculator(double n1, double n2, char operation)
{
	switch (operation)
	{
	case '+':
		return Addition(n1, n2);
	case '-':
		return Subtraction(n1, n2);
	case '*':
		return Multiplication(n1, n2);
	case '/':
		return Division(n1, n2);
	}
}

// Функция выводит на экран прямоугольник с высотой N и шириной K.
void DrawRectangle(int height, int width)
{
	if (height <= 0 || width <= 0)
		return;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
}

// Функция возвращает истину, если передаваемое значение является простым числом
bool IsPrime(int number)
{
	int i = 2;
	while (i <= number / 2)
	{
		if (number % i == 0)
			break;
		i++;
	}
	if (i > number / 2)
		return true;
	return false;
}