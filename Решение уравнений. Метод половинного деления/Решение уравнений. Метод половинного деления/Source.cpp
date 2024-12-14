#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) 
{
    return 3 * x - 4 * log(x) - 5;
}
int main()
{
    setlocale(LC_ALL, "Ru");
    double a = 2.0;
    double b = 4.0;
    double eps = 0.5;
    double x;
    int iteration = 0;

    while (abs(b - a) > eps)
    {
        x = (a + b) / 2;
        cout << "Итерация " << iteration++ << ": x = " << x << ", f(x) = " << f(x) << endl;

        if (f(a) * f(x) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
    }
    cout << "Корень уравнения: " << x << endl;

    return 0;
}

