#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Rus");
	double a, b;
	int c;
	bool cal = true;

	cout << "Первое число = "; cin >> a; cout << endl;
	cout << "Второе число = "; cin >> b; cout << endl;

	do
	{
		cout << "1 - Сумма \n 2 - Разница \n 3 - Произведение \n 4 - Деление \n 5 - выход" << endl; cin >> c;
		switch (c)
		{
		case 1:
			cout << "a + b = " << a + b << endl;
			cout << endl;
			break;
		case 2:
			cout << "a - b = " << a - b << endl;
			cout << "b - a = " << b - a << endl;
			cout << endl;
			break;
		case 3:
			cout << "a * b = " << a * b << endl;
			cout << endl;
			break;
		case 4:
			cout << "a / b = " << a / b << endl;
			cout << "b / a = " << b / a << endl;
			cout << endl;
			break;
		case 5:
			cal = false;
			break;
		}
	} while (cal);

    return 0;
}

