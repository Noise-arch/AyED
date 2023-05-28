#include <iostream>
#include <math.h>
using namespace std;

double aproximarPi(unsigned int iteraciones)
{
    double sum = 0;
    for (size_t i = 0; i < iteraciones; i++)
    {
        double pi;
        double numerador = pow(-1, i);

        double denominador = 2 * i + 1;
        pi = numerador / denominador;

        sum = sum + pi;
    }
    return sum * 4;
}

int main()
{
    cout.precision(7);
    cout << aproximarPi(1500000) << fixed << endl;
    return 0;
}
