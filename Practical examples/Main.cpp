#include <iostream>
#include <ctime>
#include "PrototypeFunction.h"
#include "PrototypeFunctionArray.h"

using namespace std;

void main()
{
	int number1, number2;

	cout << "Enter a number: ";
	cin >> number1;
	cout << "Cube of number: " << CubeOfNumber(number1) << endl;


	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	cout << "Max of two number: " << MaxOfTwoNumber(number1, number2) << endl;


	cout << "Enter a number: ";
	cin >> number1;
	IsPositive(number1) ? cout << "The number is positive!\n" : cout << "The number is negative!\n";

	double num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter operation sign ('+' or '-' or '*' or '/'): ";
	char sign;
	cin >> sign;
	if (sign == '+' || sign == '-' || sign == '*' || sign == '/')
	{
		cout << "Result: " << Calculator(num1, num2, sign) << endl;
	}
	else
		cout << "Incorrect input!\n";


	int height, width;
	cout << "Enter a height of rectangle: ";
	cin >> height;
	cout << "Enter a width of rectangle: ";
	cin >> width;
	DrawRectangle(height, width);


	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE];
	Init(arr, SIZE);
	cout << "\nArray: \n";
	Print(arr, SIZE);
	cout << "\nAverage: " << Average(arr, SIZE) << endl;
	cout << "\nPrimes: ";
	Prime(arr, SIZE);
	cout << endl;
}