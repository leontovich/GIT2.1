#include "pch.h"
#include "Windows.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int a;
	int b;
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
		cout << "Плюс в разработке";
		//Plus();
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
		cout << "Деление в разработке";
		//Del();
		break;
	default:
		cout << "Введите правильный знак";
		break;
	}
	return 0;
}
