#include <iostream>
#include <fstream>
#include <clocale>
#include <math.h>
using namespace std;
extern double eps = 3.2300;
double f(double x)
{
	return (3 * x - 4 * log(x) - 5);
}
double f1(double x)
{
	return 3 - (4 / x);
}
double f2(double x)
{
	return 4 / pow(x, 2);
}
int n(double x, double x1)
{
	setlocale(LC_ALL, "Ru");
	if (f(x) * f2(x) > 0)
	{
		cout << "Точка подходит" << endl;
	}
	else
	{
		cout << "Точка не подходит" << endl;
		return 0;
	}
	while (abs(x1 - x) > eps)
	{
		x1 = x - (f(x) / f1(x));
		x = x1;
	}
	if (abs(x1 - x) < eps)
	{
		cout << "Корнем уравнения является " << x1 << endl;
	}
	return 0;
}
int main()
{
	setlocale(LC_ALL, "Ru");
	double x;
	double x1;
	cout << "Введите x " << endl;
	cin >> x;
	x1 = x - (f(x) / f1(x));
	n(x, x1);
	return 0;
}
