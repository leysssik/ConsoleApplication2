
#include <iostream> 
#include<string>
#include<windows.h> 
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a1 = 60;
	int b1 = 25;
	int c1 = a1 & b1;
	int c2 = a1 | b1;
	int c3 = a1 - b1;
	int c4 = a1 + b1;
	int c5 = a1 != b1;
	int i = 0, b = 5;
	int q1 = 3, e1, w1;
	int i1 = 8, i2 = 3;
	if (c1 < c3)
	{
		cout << "true" << endl;
	}

	if (a1 != 3)
	{
		cout << "Введите первое число: " << endl;
		cin >> b1;
		cout << "Введите второе число: " << endl;
		cin >> c1;
		int s1 = b1 + c1;
		cout << "Сумма b1 и c1 =  " << s1 << endl;
	}
	if (q1 != 5)
	{
		cout << "Введите первое число: " << endl;
		cin >> w1;
		cout << "Введите второе число: " << endl;
		cin >> e1;
		int r1 = w1 - e1;
		cout << "Разность =  " << r1 << endl;
	}
	if (a1 > b1 || c2 < c1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	if (c5 && c3 > 0)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	while (i < 10 && b < 10)
	{
		i++;
		b++;
		i1 = i1 + i1;
		i2 = i2 + i2;
		cout <<"i = " << i << endl;
		cout << "b = " << b << endl;
		cout << "i1 = " << i1 << endl;
		cout << "i2 = " << i2 << endl;
	}

}
