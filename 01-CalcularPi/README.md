# 01-CalcularPi

Le aplicamos a `cout` una precision decimal de 7.

Dentro del `cout` llamamos a la funcion `aproximarPi` a la que se le pasa la cantidad de iteraciones que uno desea.
Luego se llama a un ciclo `for` que itera la cantidad de veces que se le pide a la funcion `aproximarPi`. El codigo dentro del ciclo representaria cada termino de la serie de Leibniz para al final de cada iteracion sumarlo a `sumaTotal`.

Finalmente luego de ejecutar el ciclo `for` la cantidad de veces solicitadas, la funcion retorna el valor de la `sumaTotal` multiplicado por 4.