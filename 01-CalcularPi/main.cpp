#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float sum = 0.0; // La variable usada para la sumatoria de la serie de Leibniz
    float piDeseado = 3.1415920; // El valor de pi deseado
    int i = 0; // La cantidad de iteraciones

    cout.precision(7);

    // Iteramos hasta que la diferencia entre el resultado de la serie de Leibniz y el valor de pi deseado sea mayor 
    // o igual a la precision deseada en negativo, o menor o igual a la precision deseada en positivos.
    while (sum - piDeseado < -0.0000001 || sum - piDeseado > 0.0000001)
    {
        sum += (pow(-1, i) / (2.0 * i + 1)) * (4.0);
        i++;
    }

    cout << "Iteracion: " << i << " | " << sum << fixed << endl;

    return 0;
}