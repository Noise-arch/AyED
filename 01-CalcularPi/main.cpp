#include <iostream>
#include <math.h>
using namespace std;

double aproximarPi(int iteraciones)
{
    double sumaTotal = 0;
    for (int i = 0; i < iteraciones; i++)
    {
        double numerador = pow(-1, i);
        double denominador = 2 * i + 1;
        sumaTotal += numerador / denominador;
    }
    return sumaTotal * 4;
}

int main()
{
    cout.precision(7);
    cout << aproximarPi(1500000) << fixed << endl;
    return 0;
}
