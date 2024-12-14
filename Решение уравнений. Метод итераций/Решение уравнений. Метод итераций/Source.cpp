#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

double f(double x)
{
	return exp((3 * x - 5) / 4);
}

int main()
{
	setlocale(LC_ALL, "Ru");
	double x = 2;
	double x1;
	double eps = 3.2300;
	do
	{
		x1 = f(x);
		if (abs(x1 - x) < eps)
			break;
		x = x1;
	} while (true);
	cout << "Корнем уравнения является " << x1 << endl;
	return 0;
}