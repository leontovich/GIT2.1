#include "pch.h"
#include "Windows.h"
#include "funcs.h" 
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	double a;
	double b;
	char znak;
	cout << "Введите 1 число" << endl;
	cin >> a;
	cout << "Введите 2 число" << endl;
	cin >> b;
	cout << "Введите действие" << endl;
	cin >> znak;
	switch (znak)
	{
	case '+':
		cout << "Результат сложения" << endl;
		cout << Plus(a, b) <<endl;
		break;
	case '-':
		cout << "Результат вычитания";
		Minus(a, b);
		break;
	case '*':
		cout << "Результат умножения";
		Umnoj(a, b);
		break;
	case '/':
		cout << "Результат деления";
		Del(a, b);
		break;
	default:
		cout << "Введите правильный знак";
		break;
	}
	return 0;
}
