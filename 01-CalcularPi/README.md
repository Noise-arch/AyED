# 01-CalcularPi

Primero definimos las variables `sum` (sumatoria de la serie de Leibniz), `piDeseado` el valor de pi que queremos, `i` la cantidad de iteraciones que hace el while loop.

Definimos la precision a 7 digitos con `cout.precision(7)`.

En el loop ponemos la condicion de que la diferencia entre la sumatoria de Leibniz y el valor que deseamos de pi sea menor o igual a 0.0000001, ponemos tambien la condicion para los negativos ya que existe la posibilidad de que la serie de Leibniz devuelva un valor negativo y al restarle el pi deseado quede una diferencia negativa.